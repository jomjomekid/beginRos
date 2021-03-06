// Generated by gencpp from file client_service_cpp/service.msg
// DO NOT EDIT!


#ifndef CLIENT_SERVICE_CPP_MESSAGE_SERVICE_H
#define CLIENT_SERVICE_CPP_MESSAGE_SERVICE_H

#include <ros/service_traits.h>


#include <client_service_cpp/serviceRequest.h>
#include <client_service_cpp/serviceResponse.h>


namespace client_service_cpp
{

struct service
{

typedef serviceRequest Request;
typedef serviceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct service
} // namespace client_service_cpp


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::client_service_cpp::service > {
  static const char* value()
  {
    return "f16097f93022db785b2cc9436c158893";
  }

  static const char* value(const ::client_service_cpp::service&) { return value(); }
};

template<>
struct DataType< ::client_service_cpp::service > {
  static const char* value()
  {
    return "client_service_cpp/service";
  }

  static const char* value(const ::client_service_cpp::service&) { return value(); }
};


// service_traits::MD5Sum< ::client_service_cpp::serviceRequest> should match 
// service_traits::MD5Sum< ::client_service_cpp::service > 
template<>
struct MD5Sum< ::client_service_cpp::serviceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::client_service_cpp::service >::value();
  }
  static const char* value(const ::client_service_cpp::serviceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::client_service_cpp::serviceRequest> should match 
// service_traits::DataType< ::client_service_cpp::service > 
template<>
struct DataType< ::client_service_cpp::serviceRequest>
{
  static const char* value()
  {
    return DataType< ::client_service_cpp::service >::value();
  }
  static const char* value(const ::client_service_cpp::serviceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::client_service_cpp::serviceResponse> should match 
// service_traits::MD5Sum< ::client_service_cpp::service > 
template<>
struct MD5Sum< ::client_service_cpp::serviceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::client_service_cpp::service >::value();
  }
  static const char* value(const ::client_service_cpp::serviceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::client_service_cpp::serviceResponse> should match 
// service_traits::DataType< ::client_service_cpp::service > 
template<>
struct DataType< ::client_service_cpp::serviceResponse>
{
  static const char* value()
  {
    return DataType< ::client_service_cpp::service >::value();
  }
  static const char* value(const ::client_service_cpp::serviceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CLIENT_SERVICE_CPP_MESSAGE_SERVICE_H
