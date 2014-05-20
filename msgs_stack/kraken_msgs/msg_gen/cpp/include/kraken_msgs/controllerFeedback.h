/* Auto-generated by genmsg_cpp for file /home/prudhvi/ros_ws/kraken_3.0/msgs_stack/kraken_msgs/msg/controllerFeedback.msg */
#ifndef KRAKEN_MSGS_MESSAGE_CONTROLLERFEEDBACK_H
#define KRAKEN_MSGS_MESSAGE_CONTROLLERFEEDBACK_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace kraken_msgs
{
template <class ContainerAllocator>
struct controllerFeedback_ {
  typedef controllerFeedback_<ContainerAllocator> Type;

  controllerFeedback_()
  : running_time(0.0)
  {
  }

  controllerFeedback_(const ContainerAllocator& _alloc)
  : running_time(0.0)
  {
  }

  typedef float _running_time_type;
  float running_time;


  typedef boost::shared_ptr< ::kraken_msgs::controllerFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::controllerFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct controllerFeedback
typedef  ::kraken_msgs::controllerFeedback_<std::allocator<void> > controllerFeedback;

typedef boost::shared_ptr< ::kraken_msgs::controllerFeedback> controllerFeedbackPtr;
typedef boost::shared_ptr< ::kraken_msgs::controllerFeedback const> controllerFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kraken_msgs::controllerFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kraken_msgs::controllerFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::controllerFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::controllerFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::controllerFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c2e4e5e2851a3713c120e74e45f192c2";
  }

  static const char* value(const  ::kraken_msgs::controllerFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc2e4e5e2851a3713ULL;
  static const uint64_t static_value2 = 0xc120e74e45f192c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::controllerFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/controllerFeedback";
  }

  static const char* value(const  ::kraken_msgs::controllerFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::controllerFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
float32 running_time\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::controllerFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::kraken_msgs::controllerFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::controllerFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.running_time);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct controllerFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kraken_msgs::controllerFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kraken_msgs::controllerFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "running_time: ";
    Printer<float>::stream(s, indent + "  ", v.running_time);
  }
};


} // namespace message_operations
} // namespace ros

#endif // KRAKEN_MSGS_MESSAGE_CONTROLLERFEEDBACK_H

