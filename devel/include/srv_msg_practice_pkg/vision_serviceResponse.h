// Generated by gencpp from file srv_msg_practice_pkg/vision_serviceResponse.msg
// DO NOT EDIT!


#ifndef SRV_MSG_PRACTICE_PKG_MESSAGE_VISION_SERVICERESPONSE_H
#define SRV_MSG_PRACTICE_PKG_MESSAGE_VISION_SERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <srv_msg_practice_pkg/vision_position.h>

namespace srv_msg_practice_pkg
{
template <class ContainerAllocator>
struct vision_serviceResponse_
{
  typedef vision_serviceResponse_<ContainerAllocator> Type;

  vision_serviceResponse_()
    : data()  {
    }
  vision_serviceResponse_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::srv_msg_practice_pkg::vision_position_<ContainerAllocator>  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct vision_serviceResponse_

typedef ::srv_msg_practice_pkg::vision_serviceResponse_<std::allocator<void> > vision_serviceResponse;

typedef boost::shared_ptr< ::srv_msg_practice_pkg::vision_serviceResponse > vision_serviceResponsePtr;
typedef boost::shared_ptr< ::srv_msg_practice_pkg::vision_serviceResponse const> vision_serviceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace srv_msg_practice_pkg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'srv_msg_practice_pkg': ['/home/parallels/catkin_ws/src/rosPractice/srv_msg_practice_pkg/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aee3eb144bbf6cd2eb2d2f628b793624";
  }

  static const char* value(const ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaee3eb144bbf6cd2ULL;
  static const uint64_t static_value2 = 0xeb2d2f628b793624ULL;
};

template<class ContainerAllocator>
struct DataType< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "srv_msg_practice_pkg/vision_serviceResponse";
  }

  static const char* value(const ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "srv_msg_practice_pkg/vision_position data\n\
\n\
================================================================================\n\
MSG: srv_msg_practice_pkg/vision_position\n\
float64 x\n\
float64 y\n\
";
  }

  static const char* value(const ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct vision_serviceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::srv_msg_practice_pkg::vision_serviceResponse_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    s << std::endl;
    Printer< ::srv_msg_practice_pkg::vision_position_<ContainerAllocator> >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SRV_MSG_PRACTICE_PKG_MESSAGE_VISION_SERVICERESPONSE_H
