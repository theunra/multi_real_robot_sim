// Generated by gencpp from file nubot_common/TargetInfo.msg
// DO NOT EDIT!


#ifndef NUBOT_COMMON_MESSAGE_TARGETINFO_H
#define NUBOT_COMMON_MESSAGE_TARGETINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nubot_common/Point2d.h>

namespace nubot_common
{
template <class ContainerAllocator>
struct TargetInfo_
{
  typedef TargetInfo_<ContainerAllocator> Type;

  TargetInfo_()
    : header()
    , target()  {
    }
  TargetInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , target(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::nubot_common::Point2d_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nubot_common::Point2d_<ContainerAllocator> >::other >  _target_type;
  _target_type target;





  typedef boost::shared_ptr< ::nubot_common::TargetInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nubot_common::TargetInfo_<ContainerAllocator> const> ConstPtr;

}; // struct TargetInfo_

typedef ::nubot_common::TargetInfo_<std::allocator<void> > TargetInfo;

typedef boost::shared_ptr< ::nubot_common::TargetInfo > TargetInfoPtr;
typedef boost::shared_ptr< ::nubot_common::TargetInfo const> TargetInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nubot_common::TargetInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nubot_common::TargetInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nubot_common::TargetInfo_<ContainerAllocator1> & lhs, const ::nubot_common::TargetInfo_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.target == rhs.target;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nubot_common::TargetInfo_<ContainerAllocator1> & lhs, const ::nubot_common::TargetInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nubot_common

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nubot_common::TargetInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::TargetInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::TargetInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::TargetInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::TargetInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::TargetInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nubot_common::TargetInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a4938944832bdc9277041fe2fa758dce";
  }

  static const char* value(const ::nubot_common::TargetInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa4938944832bdc92ULL;
  static const uint64_t static_value2 = 0x77041fe2fa758dceULL;
};

template<class ContainerAllocator>
struct DataType< ::nubot_common::TargetInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nubot_common/TargetInfo";
  }

  static const char* value(const ::nubot_common::TargetInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nubot_common::TargetInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Point2d[] target\n"
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
;
  }

  static const char* value(const ::nubot_common::TargetInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nubot_common::TargetInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.target);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TargetInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nubot_common::TargetInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nubot_common::TargetInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "target[]" << std::endl;
    for (size_t i = 0; i < v.target.size(); ++i)
    {
      s << indent << "  target[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nubot_common::Point2d_<ContainerAllocator> >::stream(s, indent + "    ", v.target[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NUBOT_COMMON_MESSAGE_TARGETINFO_H
