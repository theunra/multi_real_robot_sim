#include "ball_gazebo.hh"

#define idx_X 1
#define idx_Y 0
#define idx_w 3

#define Button_A    0
#define Button_B    1
#define Button_X    2
#define Button_Y    3

#define Button_Up   5
#define Button_Down 4

const double        g = 9.8;                    // gravity coefficient
const double        m = 0.41;                   // ball mass (kg)



BallGazebo::BallGazebo()
{}

BallGazebo::~BallGazebo()
{}

void BallGazebo::Load(gazebo::physics::ModelPtr _parent, sdf::ElementPtr /*_sdf*/)
{
    world_ = _parent->GetWorld();
    football_model_ = _parent;
    rosnode_ = new ros::NodeHandle();
    rosnode_->param("/football/chassis_link",  football_chassis_,   std::string("football::ball") );
    rosnode_->param("/field/length",           field_length_,      18.0);
    rosnode_->param("/field/width",            field_width_,       12.0);


    football_link_ = football_model_->GetLink(football_chassis_);
    if(!football_link_)
        ROS_ERROR("link [%s] does not exist!", football_chassis_.c_str());

    joy_sub_ =rosnode_->subscribe<sensor_msgs::Joy>("joy", 2, &BallGazebo::joyCallback, this);

    update_connection_ = gazebo::event::Events::ConnectWorldUpdateBegin(
        boost::bind(&BallGazebo::UpdateChild, this));
}

void BallGazebo::joyCallback(const sensor_msgs::Joy::ConstPtr& joy)
{
    vel_y_ = joy->axes[idx_X]*5;
    vel_x_ = -joy->axes[idx_Y]*5;
}

void BallGazebo::UpdateChild()
{
    static ignition::math::Vector3d ball_vel(0, 0, 0);

    detect_ball_out();
    if(std::sqrt(vel_x_*vel_x_+vel_y_*vel_y_)>1)
    {
      ball_vel.Set(vel_x_, vel_y_, 0);
      football_model_->SetLinearVel(ball_vel);
    }
    rosnode_->param("/general/ball_decay_coef", mu_, 0.5);
    ball_vel_decay(mu_);
}

void BallGazebo::ball_vel_decay(double mu)
{
    ignition::math::Vector3d   vel = football_model_->WorldLinearVel();
    static double   last_vel_len = vel.Length();
    double          vel_len = vel.Length();

    if(vel_len > 0.0)
    {
        if(football_model_->WorldPose().Pos().Z() <= 0.12 &&
                !(last_vel_len - vel_len > 0) )     // when the ball is not in the air && when
                                                    // it does not decelerate anymore
        {
            double force = -mu*m*g;
            football_link_->AddForce(vel.Normalize()*force);
        }
    }
    else if(vel_len <= 0.0)
    {
        vel_len = 0.0;
        football_model_->SetLinearVel(ignition::math::Vector3d::Zero);
    }

    last_vel_len = vel_len;
}

void BallGazebo::detect_ball_out(void)
{
    double pos_x = football_model_->WorldPose().Pos().X();
    double pos_y = football_model_->WorldPose().Pos().Y();
    int a = pos_x > 0? 1 : -1;
    int b = pos_y > 0? 1 : -1;

    if(fabs(pos_x)>field_length_/2.0)
    {
        ignition::math::Pose3d  target_pose( ignition::math::Vector3d (a*(field_length_/2.0-0.02), pos_y, 0.12), ignition::math::Quaterniond(0,0,0) );
        football_model_->SetWorldPose(target_pose);
        football_model_->SetLinearVel(ignition::math::Vector3d::Zero);
    }
    else if(fabs(pos_y) > field_width_/2.0)
    {
        ignition::math::Pose3d  target_pose( ignition::math::Vector3d (pos_x, b*(field_width_/2.0 - 0.02), 0.12), ignition::math::Quaterniond(0,0,0) );
        football_model_->SetWorldPose(target_pose);
        football_model_->SetLinearVel(ignition::math::Vector3d::Zero);
    }
}
