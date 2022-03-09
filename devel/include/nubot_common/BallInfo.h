// Generated by gencpp from file nubot_common/BallInfo.msg
// DO NOT EDIT!


#ifndef NUBOT_COMMON_MESSAGE_BALLINFO_H
#define NUBOT_COMMON_MESSAGE_BALLINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nubot_common/Point2d.h>
#include <nubot_common/PPoint.h>
#include <nubot_common/Point2d.h>

namespace nubot_common
{
template <class ContainerAllocator>
struct BallInfo_
{
  typedef BallInfo_<ContainerAllocator> Type;

  BallInfo_()
    : header()
    , ballinfostate(0)
    , pos()
    , real_pos()
    , velocity()
    , pos_known(false)
    , velocity_known(false)  {
    }
  BallInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ballinfostate(0)
    , pos(_alloc)
    , real_pos(_alloc)
    , velocity(_alloc)
    , pos_known(false)
    , velocity_known(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _ballinfostate_type;
  _ballinfostate_type ballinfostate;

   typedef  ::nubot_common::Point2d_<ContainerAllocator>  _pos_type;
  _pos_type pos;

   typedef  ::nubot_common::PPoint_<ContainerAllocator>  _real_pos_type;
  _real_pos_type real_pos;

   typedef  ::nubot_common::Point2d_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef uint8_t _pos_known_type;
  _pos_known_type pos_known;

   typedef uint8_t _velocity_known_type;
  _velocity_known_type velocity_known;





  typedef boost::shared_ptr< ::nubot_common::BallInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nubot_common::BallInfo_<ContainerAllocator> const> ConstPtr;

}; // struct BallInfo_

typedef ::nubot_common::BallInfo_<std::allocator<void> > BallInfo;

typedef boost::shared_ptr< ::nubot_common::BallInfo > BallInfoPtr;
typedef boost::shared_ptr< ::nubot_common::BallInfo const> BallInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nubot_common::BallInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nubot_common::BallInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nubot_common::BallInfo_<ContainerAllocator1> & lhs, const ::nubot_common::BallInfo_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ballinfostate == rhs.ballinfostate &&
    lhs.pos == rhs.pos &&
    lhs.real_pos == rhs.real_pos &&
    lhs.velocity == rhs.velocity &&
    lhs.pos_known == rhs.pos_known &&
    lhs.velocity_known == rhs.velocity_known;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nubot_common::BallInfo_<ContainerAllocator1> & lhs, const ::nubot_common::BallInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nubot_common

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nubot_common::BallInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::BallInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::BallInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::BallInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::BallInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::BallInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nubot_common::BallInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "06211c2a8d639c68390f487a28e6a33a";
  }

  static const char* value(const ::nubot_common::BallInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x06211c2a8d639c68ULL;
  static const uint64_t static_value2 = 0x390f487a28e6a33aULL;
};

template<class ContainerAllocator>
struct DataType< ::nubot_common::BallInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nubot_common/BallInfo";
  }

  static const char* value(const ::nubot_common::BallInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nubot_common::BallInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int32     ballinfostate\n"
"Point2d   pos\n"
"PPoint    real_pos\n"
"Point2d   velocity\n"
"bool      pos_known\n"
"bool      velocity_known\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: nubot_common/Point2d\n"
"float32 x\n"
"float32 y\n"
"\n"
"================================================================================\n"
"MSG: nubot_common/PPoint\n"
"float32 angle\n"
"float32 radius\n"
;
  }

  static const char* value(const ::nubot_common::BallInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nubot_common::BallInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ballinfostate);
      stream.next(m.pos);
      stream.next(m.real_pos);
      stream.next(m.velocity);
      stream.next(m.pos_known);
      stream.next(m.velocity_known);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BallInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nubot_common::BallInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nubot_common::BallInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ballinfostate: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ballinfostate);
    s << indent << "pos: ";
    s << std::endl;
    Printer< ::nubot_common::Point2d_<ContainerAllocator> >::stream(s, indent + "  ", v.pos);
    s << indent << "real_pos: ";
    s << std::endl;
    Printer< ::nubot_common::PPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.real_pos);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::nubot_common::Point2d_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "pos_known: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_known);
    s << indent << "velocity_known: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.velocity_known);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NUBOT_COMMON_MESSAGE_BALLINFO_H
