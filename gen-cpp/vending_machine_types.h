/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef vending_machine_TYPES_H
#define vending_machine_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>


namespace vending_machine {

struct WeatherType {
  enum type {
    WARM = 0,
    COLD = 1
  };
};

extern const std::map<int, const char*> _WeatherType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const WeatherType::type& val);

std::string to_string(const WeatherType::type& val);

struct BeverageType {
  enum type {
    HOT = 0,
    COLD = 1
  };
};

extern const std::map<int, const char*> _BeverageType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const BeverageType::type& val);

std::string to_string(const BeverageType::type& val);

class location;

typedef struct _location__isset {
  _location__isset() : location_id(false), city(false) {}
  bool location_id :1;
  bool city :1;
} _location__isset;

class location : public virtual ::apache::thrift::TBase {
 public:

  location(const location&);
  location& operator=(const location&);
  location() : location_id(0), city(0) {
  }

  virtual ~location() noexcept;
  int64_t location_id;
  int64_t city;

  _location__isset __isset;

  void __set_location_id(const int64_t val);

  void __set_city(const int64_t val);

  bool operator == (const location & rhs) const
  {
    if (!(location_id == rhs.location_id))
      return false;
    if (!(city == rhs.city))
      return false;
    return true;
  }
  bool operator != (const location &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const location & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(location &a, location &b);

std::ostream& operator<<(std::ostream& out, const location& obj);

} // namespace

#endif
