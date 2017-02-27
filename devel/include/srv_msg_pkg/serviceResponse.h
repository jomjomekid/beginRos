// Generated by gencpp from file srv_msg_pkg/serviceResponse.msg
// DO NOT EDIT!


#ifndef SRV_MSG_PKG_MESSAGE_SERVICERESPONSE_H
#define SRV_MSG_PKG_MESSAGE_SERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <srv_msg_pkg/message.h>

namespace srv_msg_pkg
{
template <class ContainerAllocator>
struct serviceResponse_
{
  typedef serviceResponse_<ContainerAllocator> Type;

  serviceResponse_()
    : nn()  {
    }
  serviceResponse_(const ContainerAllocator& _alloc)
    : nn(_alloc)  {
  (void)_alloc;
    }



   typedef  ::srv_msg_pkg::message_<ContainerAllocator>  _nn_type;
  _nn_type nn;




  typedef boost::shared_ptr< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct serviceResponse_

typedef ::srv_msg_pkg::serviceResponse_<std::allocator<void> > serviceResponse;

typedef boost::shared_ptr< ::srv_msg_pkg::serviceResponse > serviceResponsePtr;
typedef boost::shared_ptr< ::srv_msg_pkg::serviceResponse const> serviceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::srv_msg_pkg::serviceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace srv_msg_pkg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'srv_msg_pkg': ['/home/parallels/catkin_ws/src/srv_msg_pkg/msg', '/home/parallels/catkin_ws/src/srv_msg_pkg/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0c4aa309dce3e0299572b2b845f9084a";
  }

  static const char* value(const ::srv_msg_pkg::serviceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0c4aa309dce3e029ULL;
  static const uint64_t static_value2 = 0x9572b2b845f9084aULL;
};

template<class ContainerAllocator>
struct DataType< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "srv_msg_pkg/serviceResponse";
  }

  static const char* value(const ::srv_msg_pkg::serviceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
srv_msg_pkg/message nn\n\
\n\
\n\
\n\
\n\
================================================================================\n\
MSG: srv_msg_pkg/message\n\
# message_type message_a\n\
int64 A\n\
\n\
";
  }

  static const char* value(const ::srv_msg_pkg::serviceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nn);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct serviceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::srv_msg_pkg::serviceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::srv_msg_pkg::serviceResponse_<ContainerAllocator>& v)
  {
    s << indent << "nn: ";
    s << std::endl;
    Printer< ::srv_msg_pkg::message_<ContainerAllocator> >::stream(s, indent + "  ", v.nn);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SRV_MSG_PKG_MESSAGE_SERVICERESPONSE_H
