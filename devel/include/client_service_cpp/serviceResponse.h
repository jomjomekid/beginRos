// Generated by gencpp from file client_service_cpp/serviceResponse.msg
// DO NOT EDIT!


#ifndef CLIENT_SERVICE_CPP_MESSAGE_SERVICERESPONSE_H
#define CLIENT_SERVICE_CPP_MESSAGE_SERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace client_service_cpp
{
template <class ContainerAllocator>
struct serviceResponse_
{
  typedef serviceResponse_<ContainerAllocator> Type;

  serviceResponse_()
    : b(0)  {
    }
  serviceResponse_(const ContainerAllocator& _alloc)
    : b(0)  {
  (void)_alloc;
    }



   typedef int64_t _b_type;
  _b_type b;




  typedef boost::shared_ptr< ::client_service_cpp::serviceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::client_service_cpp::serviceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct serviceResponse_

typedef ::client_service_cpp::serviceResponse_<std::allocator<void> > serviceResponse;

typedef boost::shared_ptr< ::client_service_cpp::serviceResponse > serviceResponsePtr;
typedef boost::shared_ptr< ::client_service_cpp::serviceResponse const> serviceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::client_service_cpp::serviceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::client_service_cpp::serviceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace client_service_cpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::client_service_cpp::serviceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::client_service_cpp::serviceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::client_service_cpp::serviceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::client_service_cpp::serviceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::client_service_cpp::serviceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::client_service_cpp::serviceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::client_service_cpp::serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b5a3c6284d5ab11e232db053f443f102";
  }

  static const char* value(const ::client_service_cpp::serviceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb5a3c6284d5ab11eULL;
  static const uint64_t static_value2 = 0x232db053f443f102ULL;
};

template<class ContainerAllocator>
struct DataType< ::client_service_cpp::serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "client_service_cpp/serviceResponse";
  }

  static const char* value(const ::client_service_cpp::serviceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::client_service_cpp::serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
int64 b\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::client_service_cpp::serviceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::client_service_cpp::serviceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.b);
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
struct Printer< ::client_service_cpp::serviceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::client_service_cpp::serviceResponse_<ContainerAllocator>& v)
  {
    s << indent << "b: ";
    Printer<int64_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CLIENT_SERVICE_CPP_MESSAGE_SERVICERESPONSE_H
