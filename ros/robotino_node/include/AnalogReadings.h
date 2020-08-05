// Generated by gencpp from file robotino_msgs/AnalogReadings.msg
// DO NOT EDIT!


#ifndef ROBOTINO_MSGS_MESSAGE_ANALOGREADINGS_H
#define ROBOTINO_MSGS_MESSAGE_ANALOGREADINGS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotino_msgs
{
template <class ContainerAllocator>
struct AnalogReadings_
{
  typedef AnalogReadings_<ContainerAllocator> Type;

  AnalogReadings_()
    : stamp()
    , values()  {
    }
  AnalogReadings_(const ContainerAllocator& _alloc)
    : stamp()
    , values(_alloc)  {
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _values_type;
  _values_type values;




  typedef boost::shared_ptr< ::robotino_msgs::AnalogReadings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_msgs::AnalogReadings_<ContainerAllocator> const> ConstPtr;

}; // struct AnalogReadings_

typedef ::robotino_msgs::AnalogReadings_<std::allocator<void> > AnalogReadings;

typedef boost::shared_ptr< ::robotino_msgs::AnalogReadings > AnalogReadingsPtr;
typedef boost::shared_ptr< ::robotino_msgs::AnalogReadings const> AnalogReadingsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotino_msgs::AnalogReadings_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotino_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'robotino_msgs': ['/home/simon/catkin_ws/src/robotino-ros-pkg/robotino_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotino_msgs::AnalogReadings_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_msgs::AnalogReadings_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_msgs::AnalogReadings_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b18badc07ef45644f603212cc1654669";
  }

  static const char* value(const ::robotino_msgs::AnalogReadings_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb18badc07ef45644ULL;
  static const uint64_t static_value2 = 0xf603212cc1654669ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotino_msgs/AnalogReadings";
  }

  static const char* value(const ::robotino_msgs::AnalogReadings_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n\
float32[] values\n\
";
  }

  static const char* value(const ::robotino_msgs::AnalogReadings_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.values);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct AnalogReadings_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_msgs::AnalogReadings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotino_msgs::AnalogReadings_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.values[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_ANALOGREADINGS_H
