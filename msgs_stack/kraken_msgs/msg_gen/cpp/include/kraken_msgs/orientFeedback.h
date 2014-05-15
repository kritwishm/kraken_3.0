/* Auto-generated by genmsg_cpp for file /home/prudhvi/ros_ws/kraken_msgs/msg/orientFeedback.msg */
#ifndef KRAKEN_MSGS_MESSAGE_ORIENTFEEDBACK_H
#define KRAKEN_MSGS_MESSAGE_ORIENTFEEDBACK_H
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
struct orientFeedback_ {
  typedef orientFeedback_<ContainerAllocator> Type;

  orientFeedback_()
  : percent_done(0.0)
  {
  }

  orientFeedback_(const ContainerAllocator& _alloc)
  : percent_done(0.0)
  {
  }

  typedef float _percent_done_type;
  float percent_done;


  typedef boost::shared_ptr< ::kraken_msgs::orientFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kraken_msgs::orientFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct orientFeedback
typedef  ::kraken_msgs::orientFeedback_<std::allocator<void> > orientFeedback;

typedef boost::shared_ptr< ::kraken_msgs::orientFeedback> orientFeedbackPtr;
typedef boost::shared_ptr< ::kraken_msgs::orientFeedback const> orientFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kraken_msgs::orientFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kraken_msgs::orientFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kraken_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::orientFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kraken_msgs::orientFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kraken_msgs::orientFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "275881aed49b48fdb4a89a9e2db543b5";
  }

  static const char* value(const  ::kraken_msgs::orientFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x275881aed49b48fdULL;
  static const uint64_t static_value2 = 0xb4a89a9e2db543b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::kraken_msgs::orientFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kraken_msgs/orientFeedback";
  }

  static const char* value(const  ::kraken_msgs::orientFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kraken_msgs::orientFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
float32 percent_done\n\
\n\
\n\
";
  }

  static const char* value(const  ::kraken_msgs::orientFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::kraken_msgs::orientFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kraken_msgs::orientFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.percent_done);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct orientFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kraken_msgs::orientFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kraken_msgs::orientFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "percent_done: ";
    Printer<float>::stream(s, indent + "  ", v.percent_done);
  }
};


} // namespace message_operations
} // namespace ros

#endif // KRAKEN_MSGS_MESSAGE_ORIENTFEEDBACK_H
