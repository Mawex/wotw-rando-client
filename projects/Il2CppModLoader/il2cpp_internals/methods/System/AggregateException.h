#include <interception_macros.h>

namespace app::methods::System::AggregateException {
    IL2CPP_REGISTER_METHOD(0x0228B2B0, void, __ctor_1, (app::AggregateException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0228B460, void, __ctor_2, (app::AggregateException * this_ptr, app::IEnumerable_1_System_Exception_ * inner_exceptions));
    IL2CPP_REGISTER_METHOD(0x0228B500, void, __ctor_3, (app::AggregateException * this_ptr, app::Exception__Array * inner_exceptions));
    IL2CPP_REGISTER_METHOD(0x0228B5A0, void, __ctor_4, (app::AggregateException * this_ptr, app::String * message, app::IEnumerable_1_System_Exception_ * inner_exceptions));
    IL2CPP_REGISTER_METHOD(0x0228B740, void, __ctor_5, (app::AggregateException * this_ptr, app::String * message, app::Exception__Array * inner_exceptions));
    IL2CPP_REGISTER_METHOD(0x0228B750, void, __ctor_6, (app::AggregateException * this_ptr, app::String * message, app::IList_1_System_Exception_ * inner_exceptions));
    IL2CPP_REGISTER_METHODINFO(0x04789488, AggregateException__ctor_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0228BA60, void, __ctor_7, (app::AggregateException * this_ptr, app::IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * inner_exception_infos));
    IL2CPP_REGISTER_METHOD(0x0228BB00, void, __ctor_8, (app::AggregateException * this_ptr, app::String * message, app::IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * inner_exception_infos));
    IL2CPP_REGISTER_METHOD(0x0228BCA0, void, __ctor_9, (app::AggregateException * this_ptr, app::String * message, app::IList_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * inner_exception_infos));
    IL2CPP_REGISTER_METHODINFO(0x0472F600, AggregateException__ctor_8__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0228BFC0, void, __ctor_10, (app::AggregateException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04767708, AggregateException__ctor_9__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0228C230, void, GetObjectData, (app::AggregateException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x04705038, AggregateException_GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::ReadOnlyCollection_1_System_Exception_ *, get_InnerExceptions, (app::AggregateException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0228C440, app::AggregateException *, Flatten, (app::AggregateException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0228C860, app::String *, ToString, (app::AggregateException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0228CB70, int32_t, get_InnerExceptionCount, (app::AggregateException * this_ptr));
}
