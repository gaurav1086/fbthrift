/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef  _test_cpp1_cpp_reflection_service2_H
#define  _test_cpp1_cpp_reflection_service2_H

#include <thrift/lib/cpp/TDispatchProcessor.h>
#include <folly/ExceptionWrapper.h>
#include "module_types.h"

namespace test_cpp1 { namespace cpp_reflection {

class service2If {
 public:
  virtual ~service2If() {}
  virtual void methodA() = 0;
  virtual void methodB(int32_t x, const struct1& y, double z) = 0;
  virtual int32_t methodC() = 0;
  virtual int32_t methodD(int32_t i, const struct1& j, double k) = 0;
  virtual void methodE(struct2& _return) = 0;
  virtual void methodF(struct2& _return, int32_t l, const struct1& m, double n) = 0;
};

class service2IfFactory {
 public:
  typedef service2If Handler;

  virtual ~service2IfFactory() {}

  virtual service2If* getHandler(::apache::thrift::server::TConnectionContext* ctx) = 0;
  virtual void releaseHandler(service2If* /*handler*/) = 0;
};

class service2IfSingletonFactory : virtual public service2IfFactory {
 public:
  service2IfSingletonFactory(const std::shared_ptr<service2If>& iface) : iface_(iface) {}
  virtual ~service2IfSingletonFactory() {}

  virtual service2If* getHandler(::apache::thrift::server::TConnectionContext*) {
    return iface_.get();
  }
  virtual void releaseHandler(service2If* /*handler*/) {}

 protected:
  std::shared_ptr<service2If> iface_;
};

class service2Null : virtual public service2If {
 public:
  virtual ~service2Null() {}
  void methodA() {
    return;
  }
  void methodB(int32_t /* x */, const struct1& /* y */, double /* z */) {
    return;
  }
  int32_t methodC() {
    int32_t _return = 0;
    return _return;
  }
  int32_t methodD(int32_t /* i */, const struct1& /* j */, double /* k */) {
    int32_t _return = 0;
    return _return;
  }
  void methodE(struct2& /* _return */) {
    return;
  }
  void methodF(struct2& /* _return */, int32_t /* l */, const struct1& /* m */, double /* n */) {
    return;
  }
};

class service2_methodA_args : public apache::thrift::TStructType<service2_methodA_args> {
 public:

  static const uint64_t _reflection_id = 6566507961113636684U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodA_args() {
  }

  service2_methodA_args(const service2_methodA_args&) = default;
  service2_methodA_args& operator=(const service2_methodA_args& src)= default;
  service2_methodA_args(service2_methodA_args&&) = default;
  service2_methodA_args& operator=(service2_methodA_args&&) = default;

  void __clear();

  virtual ~service2_methodA_args() throw() {}


  bool operator == (const service2_methodA_args &) const;
  bool operator != (const service2_methodA_args& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const service2_methodA_args & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodA_args;
void merge(const service2_methodA_args& from, service2_methodA_args& to);
void merge(service2_methodA_args&& from, service2_methodA_args& to);
class service2_methodA_pargs : public apache::thrift::TStructType<service2_methodA_pargs> {
 public:

  static const uint64_t _reflection_id = 5719438048877717420U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodA_pargs() = default;

  virtual ~service2_methodA_pargs() throw() {}


  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodA_pargs;
void merge(const service2_methodA_pargs& from, service2_methodA_pargs& to);
void merge(service2_methodA_pargs&& from, service2_methodA_pargs& to);
class service2_methodA_presult : public apache::thrift::TStructType<service2_methodA_presult> {
 public:

  static const uint64_t _reflection_id = 3646851313577729228U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodA_presult() = default;

  virtual ~service2_methodA_presult() throw() {}


  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodA_presult;
void merge(const service2_methodA_presult& from, service2_methodA_presult& to);
void merge(service2_methodA_presult&& from, service2_methodA_presult& to);
class service2_methodB_args : public apache::thrift::TStructType<service2_methodB_args> {
 public:

  static const uint64_t _reflection_id = 16438630555754932108U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodB_args() : x(0), z(0) {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodB_args(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodB_args(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    x = arg.move();
    __isset.x = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodB_args(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodB_args(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    y = arg.move();
    __isset.y = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodB_args(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodB_args(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    z = arg.move();
    __isset.z = true;
  }

  service2_methodB_args(const service2_methodB_args&) = default;
  service2_methodB_args& operator=(const service2_methodB_args& src)= default;
  service2_methodB_args(service2_methodB_args&&) = default;
  service2_methodB_args& operator=(service2_methodB_args&&) = default;

  void __clear();

  virtual ~service2_methodB_args() throw() {}

  int32_t x;
  struct1 y;
  double z;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      x = false;
      y = false;
      z = false;
    }
    bool x;
    bool y;
    bool z;
  } __isset;

  bool operator == (const service2_methodB_args &) const;
  bool operator != (const service2_methodB_args& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const service2_methodB_args & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodB_args;
void merge(const service2_methodB_args& from, service2_methodB_args& to);
void merge(service2_methodB_args&& from, service2_methodB_args& to);
class service2_methodB_pargs : public apache::thrift::TStructType<service2_methodB_pargs> {
 public:

  static const uint64_t _reflection_id = 11827867718633991500U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodB_pargs() = default;
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodB_pargs(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodB_pargs(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    x = arg.move();
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodB_pargs(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodB_pargs(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    y = arg.move();
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodB_pargs(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodB_pargs(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    z = arg.move();
  }

  virtual ~service2_methodB_pargs() throw() {}

  const int32_t* x;
  const struct1* y;
  const double* z;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodB_pargs;
void merge(const service2_methodB_pargs& from, service2_methodB_pargs& to);
void merge(service2_methodB_pargs&& from, service2_methodB_pargs& to);
class service2_methodB_presult : public apache::thrift::TStructType<service2_methodB_presult> {
 public:

  static const uint64_t _reflection_id = 17032519182038144204U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodB_presult() = default;

  virtual ~service2_methodB_presult() throw() {}


  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodB_presult;
void merge(const service2_methodB_presult& from, service2_methodB_presult& to);
void merge(service2_methodB_presult&& from, service2_methodB_presult& to);
class service2_methodC_args : public apache::thrift::TStructType<service2_methodC_args> {
 public:

  static const uint64_t _reflection_id = 8339222530218349644U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodC_args() {
  }

  service2_methodC_args(const service2_methodC_args&) = default;
  service2_methodC_args& operator=(const service2_methodC_args& src)= default;
  service2_methodC_args(service2_methodC_args&&) = default;
  service2_methodC_args& operator=(service2_methodC_args&&) = default;

  void __clear();

  virtual ~service2_methodC_args() throw() {}


  bool operator == (const service2_methodC_args &) const;
  bool operator != (const service2_methodC_args& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const service2_methodC_args & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodC_args;
void merge(const service2_methodC_args& from, service2_methodC_args& to);
void merge(service2_methodC_args&& from, service2_methodC_args& to);
class service2_methodC_pargs : public apache::thrift::TStructType<service2_methodC_pargs> {
 public:

  static const uint64_t _reflection_id = 16786668868553556876U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodC_pargs() = default;

  virtual ~service2_methodC_pargs() throw() {}


  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodC_pargs;
void merge(const service2_methodC_pargs& from, service2_methodC_pargs& to);
void merge(service2_methodC_pargs&& from, service2_methodC_pargs& to);
class service2_methodC_presult : public apache::thrift::TStructType<service2_methodC_presult> {
 public:

  static const uint64_t _reflection_id = 520737506486567340U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodC_presult() = default;
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodC_presult(
    ::apache::thrift::detail::argument_wrapper<0, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodC_presult(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    success = arg.move();
    __isset.success = true;
  }

  virtual ~service2_methodC_presult() throw() {}

  int32_t* success;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
    }
    bool success;
  } __isset;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodC_presult;
void merge(const service2_methodC_presult& from, service2_methodC_presult& to);
void merge(service2_methodC_presult&& from, service2_methodC_presult& to);
class service2_methodD_args : public apache::thrift::TStructType<service2_methodD_args> {
 public:

  static const uint64_t _reflection_id = 13559834307911128492U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodD_args() : i(0), k(0) {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodD_args(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodD_args(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    i = arg.move();
    __isset.i = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodD_args(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodD_args(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    j = arg.move();
    __isset.j = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodD_args(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodD_args(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    k = arg.move();
    __isset.k = true;
  }

  service2_methodD_args(const service2_methodD_args&) = default;
  service2_methodD_args& operator=(const service2_methodD_args& src)= default;
  service2_methodD_args(service2_methodD_args&&) = default;
  service2_methodD_args& operator=(service2_methodD_args&&) = default;

  void __clear();

  virtual ~service2_methodD_args() throw() {}

  int32_t i;
  struct1 j;
  double k;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      i = false;
      j = false;
      k = false;
    }
    bool i;
    bool j;
    bool k;
  } __isset;

  bool operator == (const service2_methodD_args &) const;
  bool operator != (const service2_methodD_args& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const service2_methodD_args & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodD_args;
void merge(const service2_methodD_args& from, service2_methodD_args& to);
void merge(service2_methodD_args&& from, service2_methodD_args& to);
class service2_methodD_pargs : public apache::thrift::TStructType<service2_methodD_pargs> {
 public:

  static const uint64_t _reflection_id = 260116069361994860U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodD_pargs() = default;
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodD_pargs(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodD_pargs(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    i = arg.move();
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodD_pargs(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodD_pargs(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    j = arg.move();
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodD_pargs(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodD_pargs(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    k = arg.move();
  }

  virtual ~service2_methodD_pargs() throw() {}

  const int32_t* i;
  const struct1* j;
  const double* k;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodD_pargs;
void merge(const service2_methodD_pargs& from, service2_methodD_pargs& to);
void merge(service2_methodD_pargs&& from, service2_methodD_pargs& to);
class service2_methodD_presult : public apache::thrift::TStructType<service2_methodD_presult> {
 public:

  static const uint64_t _reflection_id = 15838475084814263916U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodD_presult() = default;
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodD_presult(
    ::apache::thrift::detail::argument_wrapper<0, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodD_presult(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    success = arg.move();
    __isset.success = true;
  }

  virtual ~service2_methodD_presult() throw() {}

  int32_t* success;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
    }
    bool success;
  } __isset;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodD_presult;
void merge(const service2_methodD_presult& from, service2_methodD_presult& to);
void merge(service2_methodD_presult&& from, service2_methodD_presult& to);
class service2_methodE_args : public apache::thrift::TStructType<service2_methodE_args> {
 public:

  static const uint64_t _reflection_id = 3137212161413782060U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodE_args() {
  }

  service2_methodE_args(const service2_methodE_args&) = default;
  service2_methodE_args& operator=(const service2_methodE_args& src)= default;
  service2_methodE_args(service2_methodE_args&&) = default;
  service2_methodE_args& operator=(service2_methodE_args&&) = default;

  void __clear();

  virtual ~service2_methodE_args() throw() {}


  bool operator == (const service2_methodE_args &) const;
  bool operator != (const service2_methodE_args& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const service2_methodE_args & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodE_args;
void merge(const service2_methodE_args& from, service2_methodE_args& to);
void merge(service2_methodE_args&& from, service2_methodE_args& to);
class service2_methodE_pargs : public apache::thrift::TStructType<service2_methodE_pargs> {
 public:

  static const uint64_t _reflection_id = 9568770577813299788U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodE_pargs() = default;

  virtual ~service2_methodE_pargs() throw() {}


  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodE_pargs;
void merge(const service2_methodE_pargs& from, service2_methodE_pargs& to);
void merge(service2_methodE_pargs&& from, service2_methodE_pargs& to);
class service2_methodE_presult : public apache::thrift::TStructType<service2_methodE_presult> {
 public:

  static const uint64_t _reflection_id = 12662005636544009740U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodE_presult() = default;
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodE_presult(
    ::apache::thrift::detail::argument_wrapper<0, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodE_presult(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    success = arg.move();
    __isset.success = true;
  }

  virtual ~service2_methodE_presult() throw() {}

  struct2* success;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
    }
    bool success;
  } __isset;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodE_presult;
void merge(const service2_methodE_presult& from, service2_methodE_presult& to);
void merge(service2_methodE_presult&& from, service2_methodE_presult& to);
class service2_methodF_args : public apache::thrift::TStructType<service2_methodF_args> {
 public:

  static const uint64_t _reflection_id = 9335213369860275500U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodF_args() : l(0), n(0) {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodF_args(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodF_args(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    l = arg.move();
    __isset.l = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodF_args(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodF_args(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    m = arg.move();
    __isset.m = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodF_args(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodF_args(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    n = arg.move();
    __isset.n = true;
  }

  service2_methodF_args(const service2_methodF_args&) = default;
  service2_methodF_args& operator=(const service2_methodF_args& src)= default;
  service2_methodF_args(service2_methodF_args&&) = default;
  service2_methodF_args& operator=(service2_methodF_args&&) = default;

  void __clear();

  virtual ~service2_methodF_args() throw() {}

  int32_t l;
  struct1 m;
  double n;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      l = false;
      m = false;
      n = false;
    }
    bool l;
    bool m;
    bool n;
  } __isset;

  bool operator == (const service2_methodF_args &) const;
  bool operator != (const service2_methodF_args& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const service2_methodF_args & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodF_args;
void merge(const service2_methodF_args& from, service2_methodF_args& to);
void merge(service2_methodF_args&& from, service2_methodF_args& to);
class service2_methodF_pargs : public apache::thrift::TStructType<service2_methodF_pargs> {
 public:

  static const uint64_t _reflection_id = 13653453787183033740U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodF_pargs() = default;
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodF_pargs(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodF_pargs(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    l = arg.move();
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodF_pargs(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodF_pargs(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    m = arg.move();
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodF_pargs(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodF_pargs(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    n = arg.move();
  }

  virtual ~service2_methodF_pargs() throw() {}

  const int32_t* l;
  const struct1* m;
  const double* n;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodF_pargs;
void merge(const service2_methodF_pargs& from, service2_methodF_pargs& to);
void merge(service2_methodF_pargs&& from, service2_methodF_pargs& to);
class service2_methodF_presult : public apache::thrift::TStructType<service2_methodF_presult> {
 public:

  static const uint64_t _reflection_id = 16009723004397363244U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  service2_methodF_presult() = default;
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit service2_methodF_presult(
    ::apache::thrift::detail::argument_wrapper<0, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    service2_methodF_presult(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    success = arg.move();
    __isset.success = true;
  }

  virtual ~service2_methodF_presult() throw() {}

  struct2* success;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      success = false;
    }
    bool success;
  } __isset;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class service2_methodF_presult;
void merge(const service2_methodF_presult& from, service2_methodF_presult& to);
void merge(service2_methodF_presult&& from, service2_methodF_presult& to);
class service2Client : virtual public service2If, virtual public apache::thrift::TClientBase {
 public:
  service2Client(std::shared_ptr<apache::thrift::protocol::TProtocol> prot) :
    checkSeqid_(true),
    nextSendSequenceId_(1),
    nextRecvSequenceId_(1),
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
    connectionContext_ = std::shared_ptr<TClientBase::ConnContext>(
      new TClientBase::ConnContext(piprot_, poprot_));
  }
  service2Client(std::shared_ptr<apache::thrift::protocol::TProtocol> iprot, std::shared_ptr<apache::thrift::protocol::TProtocol> oprot) :
    checkSeqid_(true),
    nextSendSequenceId_(1),
    nextRecvSequenceId_(1),
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
    connectionContext_ = std::shared_ptr<TClientBase::ConnContext>(
      new TClientBase::ConnContext(piprot_, poprot_));
  }
  std::shared_ptr<apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr<apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  virtual ~service2Client() {}
  void methodA();
  virtual void send_methodA();
  virtual void recv_methodA();
  virtual folly::exception_wrapper recv_wrapped_methodA();
  void methodB(int32_t x, const struct1& y, double z);
  virtual void send_methodB(int32_t x, const struct1& y, double z);
  virtual void recv_methodB();
  virtual folly::exception_wrapper recv_wrapped_methodB();
  int32_t methodC();
  virtual void send_methodC();
  virtual int32_t recv_methodC();
  virtual folly::exception_wrapper recv_wrapped_methodC(int32_t& _return);
  int32_t methodD(int32_t i, const struct1& j, double k);
  virtual void send_methodD(int32_t i, const struct1& j, double k);
  virtual int32_t recv_methodD();
  virtual folly::exception_wrapper recv_wrapped_methodD(int32_t& _return);
  void methodE(struct2& _return);
  virtual void send_methodE();
  virtual void recv_methodE(struct2& _return);
  virtual folly::exception_wrapper recv_wrapped_methodE(struct2& _return);
  void methodF(struct2& _return, int32_t l, const struct1& m, double n);
  virtual void send_methodF(int32_t l, const struct1& m, double n);
  virtual void recv_methodF(struct2& _return);
  virtual folly::exception_wrapper recv_wrapped_methodF(struct2& _return);
  apache::thrift::server::TConnectionContext* getConnectionContext() {
    return connectionContext_.get();
  }

  /**
   * Disable checking the seqid field in server responses.
   *
   * This should only be used with broken servers that return incorrect seqid values.
   */
  void _disableSequenceIdChecks() {
    checkSeqid_ = false;
  }

 protected:
  bool checkSeqid_;
  int32_t nextSendSequenceId_;
  int32_t nextRecvSequenceId_;
  int32_t getNextSendSequenceId();
  int32_t getNextRecvSequenceId();
  std::shared_ptr<apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr<apache::thrift::protocol::TProtocol> poprot_;
  apache::thrift::protocol::TProtocol* iprot_;
  apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<apache::thrift::server::TConnectionContext> connectionContext_;
  virtual const char* getServiceName();
};

class service2Processor : public ::apache::thrift::TDispatchProcessor {
 public:
  virtual const char* getServiceName() {
    return "service2";
  }
 protected:
  std::shared_ptr<service2If> iface_;
  virtual bool dispatchCall(apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, apache::thrift::server::TConnectionContext* connectionContext);
 private:
  typedef  void (service2Processor::*ProcessFunction)(int32_t, apache::thrift::protocol::TProtocol*, apache::thrift::protocol::TProtocol*, apache::thrift::server::TConnectionContext*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_methodA(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_methodB(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_methodC(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_methodD(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_methodE(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
  void process_methodF(int32_t seqid, apache::thrift::protocol::TProtocol* iprot, apache::thrift::protocol::TProtocol* oprot, apache::thrift::server::TConnectionContext* connectionContext);
 public:
  service2Processor(std::shared_ptr<service2If> iface) :
    iface_(iface) {
    processMap_["methodA"] = &service2Processor::process_methodA;
    processMap_["methodB"] = &service2Processor::process_methodB;
    processMap_["methodC"] = &service2Processor::process_methodC;
    processMap_["methodD"] = &service2Processor::process_methodD;
    processMap_["methodE"] = &service2Processor::process_methodE;
    processMap_["methodF"] = &service2Processor::process_methodF;
  }

  virtual ~service2Processor() {}

  std::shared_ptr<std::set<std::string> > getProcessFunctions() { 
    std::shared_ptr<std::set<std::string> > rSet(new std::set<std::string>());
    rSet->insert("service2.methodA");
    rSet->insert("service2.methodB");
    rSet->insert("service2.methodC");
    rSet->insert("service2.methodD");
    rSet->insert("service2.methodE");
    rSet->insert("service2.methodF");
    return rSet;
  }
};

class service2ProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  service2ProcessorFactory(const ::std::shared_ptr< service2IfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(::apache::thrift::server::TConnectionContext* ctx);

 protected:
  ::std::shared_ptr< service2IfFactory > handlerFactory_;
};

class service2Multiface : virtual public service2If {
 public:
  service2Multiface(std::vector<std::shared_ptr<service2If> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~service2Multiface() {}
 protected:
  std::vector<std::shared_ptr<service2If> > ifaces_;
  service2Multiface() {}
  void add(std::shared_ptr<service2If> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void methodA() {
    uint32_t thrift_multifaces_index_tmp_;
    uint32_t thrift_multifaces_size_tmp_ = ifaces_.size();
    for (thrift_multifaces_index_tmp_ = 0; thrift_multifaces_index_tmp_ < thrift_multifaces_size_tmp_; ++thrift_multifaces_index_tmp_) {
      ifaces_[thrift_multifaces_index_tmp_]->methodA();
    }
  }

  void methodB(int32_t x, const struct1& y, double z) {
    uint32_t thrift_multifaces_index_tmp_;
    uint32_t thrift_multifaces_size_tmp_ = ifaces_.size();
    for (thrift_multifaces_index_tmp_ = 0; thrift_multifaces_index_tmp_ < thrift_multifaces_size_tmp_; ++thrift_multifaces_index_tmp_) {
      ifaces_[thrift_multifaces_index_tmp_]->methodB(x, y, z);
    }
  }

  int32_t methodC() {
    uint32_t thrift_multifaces_index_tmp_;
    uint32_t thrift_multifaces_size_tmp_ = ifaces_.size();
    for (thrift_multifaces_index_tmp_ = 0; thrift_multifaces_index_tmp_ < thrift_multifaces_size_tmp_ - 1; ++thrift_multifaces_index_tmp_) {
      ifaces_[thrift_multifaces_index_tmp_]->methodC();
    }
    return ifaces_[thrift_multifaces_index_tmp_]->methodC();
  }

  int32_t methodD(int32_t i, const struct1& j, double k) {
    uint32_t thrift_multifaces_index_tmp_;
    uint32_t thrift_multifaces_size_tmp_ = ifaces_.size();
    for (thrift_multifaces_index_tmp_ = 0; thrift_multifaces_index_tmp_ < thrift_multifaces_size_tmp_ - 1; ++thrift_multifaces_index_tmp_) {
      ifaces_[thrift_multifaces_index_tmp_]->methodD(i, j, k);
    }
    return ifaces_[thrift_multifaces_index_tmp_]->methodD(i, j, k);
  }

  void methodE(struct2& _return) {
    uint32_t thrift_multifaces_index_tmp_;
    uint32_t thrift_multifaces_size_tmp_ = ifaces_.size();
    for (thrift_multifaces_index_tmp_ = 0; thrift_multifaces_index_tmp_ < thrift_multifaces_size_tmp_; ++thrift_multifaces_index_tmp_) {
      ifaces_[thrift_multifaces_index_tmp_]->methodE(_return);
    }
  }

  void methodF(struct2& _return, int32_t l, const struct1& m, double n) {
    uint32_t thrift_multifaces_index_tmp_;
    uint32_t thrift_multifaces_size_tmp_ = ifaces_.size();
    for (thrift_multifaces_index_tmp_ = 0; thrift_multifaces_index_tmp_ < thrift_multifaces_size_tmp_; ++thrift_multifaces_index_tmp_) {
      ifaces_[thrift_multifaces_index_tmp_]->methodF(_return, l, m, n);
    }
  }

};

}} // namespace

#endif
