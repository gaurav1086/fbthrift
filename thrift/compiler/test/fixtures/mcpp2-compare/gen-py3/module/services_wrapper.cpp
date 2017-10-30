/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/services_wrapper.h>
#include <src/gen-py3/module/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace some {
namespace valid {
namespace ns {

EmptyServiceWrapper::EmptyServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
    Py_XINCREF(this->if_object);
  }

EmptyServiceWrapper::~EmptyServiceWrapper() {
    Py_XDECREF(this->if_object);
}

std::shared_ptr<apache::thrift::ServerInterface> EmptyServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<EmptyServiceWrapper>(if_object, exc);
}


ReturnServiceWrapper::ReturnServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
    Py_XINCREF(this->if_object);
  }

ReturnServiceWrapper::~ReturnServiceWrapper() {
    Py_XDECREF(this->if_object);
}

folly::Future<folly::Unit> ReturnServiceWrapper::future_noReturn() {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_noReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<bool> ReturnServiceWrapper::future_boolReturn() {
  folly::Promise<bool> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_boolReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<int16_t> ReturnServiceWrapper::future_i16Return() {
  folly::Promise<int16_t> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_i16Return(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<int32_t> ReturnServiceWrapper::future_i32Return() {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_i32Return(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<int64_t> ReturnServiceWrapper::future_i64Return() {
  folly::Promise<int64_t> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_i64Return(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<float> ReturnServiceWrapper::future_floatReturn() {
  folly::Promise<float> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_floatReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<double> ReturnServiceWrapper::future_doubleReturn() {
  folly::Promise<double> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_doubleReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::string>> ReturnServiceWrapper::future_stringReturn() {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_stringReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::string>> ReturnServiceWrapper::future_binaryReturn() {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_binaryReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::map<std::string,int64_t>>> ReturnServiceWrapper::future_mapReturn() {
  folly::Promise<std::unique_ptr<std::map<std::string,int64_t>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_mapReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<int32_t> ReturnServiceWrapper::future_simpleTypedefReturn() {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_simpleTypedefReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::vector<std::map<some::valid::ns::Empty,some::valid::ns::MyStruct>>>> ReturnServiceWrapper::future_complexTypedefReturn() {
  folly::Promise<std::unique_ptr<std::vector<std::map<some::valid::ns::Empty,some::valid::ns::MyStruct>>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_complexTypedefReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::vector<std::vector<std::vector<std::map<some::valid::ns::Empty,some::valid::ns::MyStruct>>>>>> ReturnServiceWrapper::future_list_mostComplexTypedefReturn() {
  folly::Promise<std::unique_ptr<std::vector<std::vector<std::vector<std::map<some::valid::ns::Empty,some::valid::ns::MyStruct>>>>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_list_mostComplexTypedefReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<some::valid::ns::MyEnumA> ReturnServiceWrapper::future_enumReturn() {
  folly::Promise<some::valid::ns::MyEnumA> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_enumReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::vector<some::valid::ns::MyEnumA>>> ReturnServiceWrapper::future_list_EnumReturn() {
  folly::Promise<std::unique_ptr<std::vector<some::valid::ns::MyEnumA>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_list_EnumReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<some::valid::ns::MyStruct>> ReturnServiceWrapper::future_structReturn() {
  folly::Promise<std::unique_ptr<some::valid::ns::MyStruct>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_structReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::set<some::valid::ns::MyStruct>>> ReturnServiceWrapper::future_set_StructReturn() {
  folly::Promise<std::unique_ptr<std::set<some::valid::ns::MyStruct>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_set_StructReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<some::valid::ns::ComplexUnion>> ReturnServiceWrapper::future_unionReturn() {
  folly::Promise<std::unique_ptr<some::valid::ns::ComplexUnion>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_unionReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::vector<some::valid::ns::ComplexUnion>>> ReturnServiceWrapper::future_list_UnionReturn() {
  folly::Promise<std::unique_ptr<std::vector<some::valid::ns::ComplexUnion>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise)    ]() mutable {
        call_cy_ReturnService_list_UnionReturn(
            this->if_object,
            ctx,
            std::move(promise)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::string>> ReturnServiceWrapper::future_readDataEb(
  int64_t size
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
size    ]() mutable {
        call_cy_ReturnService_readDataEb(
            this->if_object,
            ctx,
            std::move(promise),
            size        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::string>> ReturnServiceWrapper::future_readData(
  int64_t size
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
size    ]() mutable {
        call_cy_ReturnService_readData(
            this->if_object,
            ctx,
            std::move(promise),
            size        );
    });

  return future;
}

std::shared_ptr<apache::thrift::ServerInterface> ReturnServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<ReturnServiceWrapper>(if_object, exc);
}


ParamServiceWrapper::ParamServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
    Py_XINCREF(this->if_object);
  }

ParamServiceWrapper::~ParamServiceWrapper() {
    Py_XDECREF(this->if_object);
}

folly::Future<folly::Unit> ParamServiceWrapper::future_void_ret_i16_param(
  int16_t param1
) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1    ]() mutable {
        call_cy_ParamService_void_ret_i16_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1        );
    });

  return future;
}

folly::Future<folly::Unit> ParamServiceWrapper::future_void_ret_byte_i16_param(
  int8_t param1,
  int16_t param2
) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1,
param2    ]() mutable {
        call_cy_ParamService_void_ret_byte_i16_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1,
            param2        );
    });

  return future;
}

folly::Future<folly::Unit> ParamServiceWrapper::future_void_ret_map_param(
  std::unique_ptr<std::map<std::string,int64_t>> param1
) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_void_ret_map_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<folly::Unit> ParamServiceWrapper::future_void_ret_map_setlist_param(
  std::unique_ptr<std::map<std::string,int64_t>> param1,
  std::unique_ptr<std::set<std::vector<std::string>>> param2
) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1),
param2 = std::move(param2)    ]() mutable {
        call_cy_ParamService_void_ret_map_setlist_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1),
            std::move(param2)        );
    });

  return future;
}

folly::Future<folly::Unit> ParamServiceWrapper::future_void_ret_map_typedef_param(
  int32_t param1
) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1    ]() mutable {
        call_cy_ParamService_void_ret_map_typedef_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1        );
    });

  return future;
}

folly::Future<folly::Unit> ParamServiceWrapper::future_void_ret_enum_param(
  some::valid::ns::MyEnumA param1
) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1    ]() mutable {
        call_cy_ParamService_void_ret_enum_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1        );
    });

  return future;
}

folly::Future<folly::Unit> ParamServiceWrapper::future_void_ret_struct_param(
  std::unique_ptr<some::valid::ns::MyStruct> param1
) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_void_ret_struct_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<folly::Unit> ParamServiceWrapper::future_void_ret_listunion_param(
  std::unique_ptr<std::vector<some::valid::ns::ComplexUnion>> param1
) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_void_ret_listunion_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<bool> ParamServiceWrapper::future_bool_ret_i32_i64_param(
  int32_t param1,
  int64_t param2
) {
  folly::Promise<bool> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1,
param2    ]() mutable {
        call_cy_ParamService_bool_ret_i32_i64_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1,
            param2        );
    });

  return future;
}

folly::Future<bool> ParamServiceWrapper::future_bool_ret_map_param(
  std::unique_ptr<std::map<std::string,int64_t>> param1
) {
  folly::Promise<bool> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_bool_ret_map_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<bool> ParamServiceWrapper::future_bool_ret_union_param(
  std::unique_ptr<some::valid::ns::ComplexUnion> param1
) {
  folly::Promise<bool> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_bool_ret_union_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<int64_t> ParamServiceWrapper::future_i64_ret_float_double_param(
  float param1,
  double param2
) {
  folly::Promise<int64_t> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1,
param2    ]() mutable {
        call_cy_ParamService_i64_ret_float_double_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1,
            param2        );
    });

  return future;
}

folly::Future<int64_t> ParamServiceWrapper::future_i64_ret_string_typedef_param(
  std::unique_ptr<std::string> param1,
  std::unique_ptr<std::set<std::vector<std::vector<std::map<some::valid::ns::Empty,some::valid::ns::MyStruct>>>>> param2
) {
  folly::Promise<int64_t> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1),
param2 = std::move(param2)    ]() mutable {
        call_cy_ParamService_i64_ret_string_typedef_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1),
            std::move(param2)        );
    });

  return future;
}

folly::Future<int64_t> ParamServiceWrapper::future_i64_ret_i32_i32_i32_i32_i32_param(
  int32_t param1,
  int32_t param2,
  int32_t param3,
  int32_t param4,
  int32_t param5
) {
  folly::Promise<int64_t> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1,
param2,
param3,
param4,
param5    ]() mutable {
        call_cy_ParamService_i64_ret_i32_i32_i32_i32_i32_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1,
            param2,
            param3,
            param4,
            param5        );
    });

  return future;
}

folly::Future<double> ParamServiceWrapper::future_double_ret_setstruct_param(
  std::unique_ptr<std::set<some::valid::ns::MyStruct>> param1
) {
  folly::Promise<double> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_double_ret_setstruct_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::string>> ParamServiceWrapper::future_string_ret_string_param(
  std::unique_ptr<std::string> param1
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_string_ret_string_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::string>> ParamServiceWrapper::future_binary_ret_binary_param(
  std::unique_ptr<std::string> param1
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_binary_ret_binary_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::map<std::string,int64_t>>> ParamServiceWrapper::future_map_ret_bool_param(
  bool param1
) {
  folly::Promise<std::unique_ptr<std::map<std::string,int64_t>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1    ]() mutable {
        call_cy_ParamService_map_ret_bool_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::vector<bool>>> ParamServiceWrapper::future_list_ret_map_setlist_param(
  std::unique_ptr<std::map<int32_t,std::vector<std::string>>> param1,
  std::unique_ptr<std::vector<std::string>> param2
) {
  folly::Promise<std::unique_ptr<std::vector<bool>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1),
param2 = std::move(param2)    ]() mutable {
        call_cy_ParamService_list_ret_map_setlist_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1),
            std::move(param2)        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::map<std::set<std::vector<int32_t>>,std::map<std::vector<std::set<std::string>>,std::string>>>> ParamServiceWrapper::future_mapsetlistmapliststring_ret_listlistlist_param(
  std::unique_ptr<std::vector<std::vector<std::vector<std::vector<int32_t>>>>> param1
) {
  folly::Promise<std::unique_ptr<std::map<std::set<std::vector<int32_t>>,std::map<std::vector<std::set<std::string>>,std::string>>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_mapsetlistmapliststring_ret_listlistlist_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<int32_t> ParamServiceWrapper::future_typedef_ret_i32_param(
  int32_t param1
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1    ]() mutable {
        call_cy_ParamService_typedef_ret_i32_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::vector<int32_t>>> ParamServiceWrapper::future_listtypedef_ret_typedef_param(
  std::unique_ptr<std::vector<std::map<some::valid::ns::Empty,some::valid::ns::MyStruct>>> param1
) {
  folly::Promise<std::unique_ptr<std::vector<int32_t>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_listtypedef_ret_typedef_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<some::valid::ns::MyEnumA> ParamServiceWrapper::future_enum_ret_double_param(
  double param1
) {
  folly::Promise<some::valid::ns::MyEnumA> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1    ]() mutable {
        call_cy_ParamService_enum_ret_double_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1        );
    });

  return future;
}

folly::Future<some::valid::ns::MyEnumA> ParamServiceWrapper::future_enum_ret_double_enum_param(
  double param1,
  some::valid::ns::MyEnumA param2
) {
  folly::Promise<some::valid::ns::MyEnumA> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1,
param2    ]() mutable {
        call_cy_ParamService_enum_ret_double_enum_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1,
            param2        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::vector<some::valid::ns::MyEnumA>>> ParamServiceWrapper::future_listenum_ret_map_param(
  std::unique_ptr<std::map<std::string,int64_t>> param1
) {
  folly::Promise<std::unique_ptr<std::vector<some::valid::ns::MyEnumA>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_listenum_ret_map_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<std::unique_ptr<some::valid::ns::MyStruct>> ParamServiceWrapper::future_struct_ret_i16_param(
  int16_t param1
) {
  folly::Promise<std::unique_ptr<some::valid::ns::MyStruct>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1    ]() mutable {
        call_cy_ParamService_struct_ret_i16_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::set<some::valid::ns::MyStruct>>> ParamServiceWrapper::future_setstruct_ret_set_param(
  std::unique_ptr<std::set<std::string>> param1
) {
  folly::Promise<std::unique_ptr<std::set<some::valid::ns::MyStruct>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_setstruct_ret_set_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

folly::Future<std::unique_ptr<some::valid::ns::ComplexUnion>> ParamServiceWrapper::future_union_ret_i32_i32_param(
  int32_t param1,
  int32_t param2
) {
  folly::Promise<std::unique_ptr<some::valid::ns::ComplexUnion>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1,
param2    ]() mutable {
        call_cy_ParamService_union_ret_i32_i32_param(
            this->if_object,
            ctx,
            std::move(promise),
            param1,
            param2        );
    });

  return future;
}

folly::Future<std::unique_ptr<std::vector<some::valid::ns::ComplexUnion>>> ParamServiceWrapper::future_listunion_string_param(
  std::unique_ptr<std::string> param1
) {
  folly::Promise<std::unique_ptr<std::vector<some::valid::ns::ComplexUnion>>> promise;
  auto future = promise.getFuture();
  auto ctx = getConnectionContext();
  folly::via(
    this->executor,
    [this, ctx,
     promise = std::move(promise),
param1 = std::move(param1)    ]() mutable {
        call_cy_ParamService_listunion_string_param(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(param1)        );
    });

  return future;
}

std::shared_ptr<apache::thrift::ServerInterface> ParamServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<ParamServiceWrapper>(if_object, exc);
}
} // namespace some
} // namespace valid
} // namespace ns
