using namespace app;

namespace app::methods::System::AggregateException {
IL2CPP_REGISTER_METHOD(0x0228B2B0, void, __ctor, (AggregateException * __this));
IL2CPP_REGISTER_METHOD(0x0228B460, void, __ctor, (AggregateException * __this, IEnumerable_1_System_Exception_ * innerExceptions));
IL2CPP_REGISTER_METHOD(0x0228B500, void, __ctor, (AggregateException * __this, Exception__Array * innerExceptions));
IL2CPP_REGISTER_METHOD(0x0228B5A0, void, __ctor, (AggregateException * __this, String * message, IEnumerable_1_System_Exception_ * innerExceptions));
IL2CPP_REGISTER_METHOD(0x0228B740, void, __ctor, (AggregateException * __this, String * message, Exception__Array * innerExceptions));
IL2CPP_REGISTER_METHOD(0x0228B750, void, __ctor, (AggregateException * __this, String * message, IList_1_System_Exception_ * innerExceptions));
IL2CPP_REGISTER_METHODINFO(0x04789488, AggregateException__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0228BA60, void, __ctor, (AggregateException * __this, IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * innerExceptionInfos));
IL2CPP_REGISTER_METHOD(0x0228BB00, void, __ctor, (AggregateException * __this, String * message, IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * innerExceptionInfos));
IL2CPP_REGISTER_METHOD(0x0228BCA0, void, __ctor, (AggregateException * __this, String * message, IList_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * innerExceptionInfos));
IL2CPP_REGISTER_METHODINFO(0x0472F600, AggregateException__ctor_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0228BFC0, void, __ctor, (AggregateException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04767708, AggregateException__ctor_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0228C230, void, GetObjectData, (AggregateException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04705038, AggregateException_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBC20, ReadOnlyCollection_1_System_Exception_ *, get_InnerExceptions, (AggregateException * __this));
IL2CPP_REGISTER_METHOD(0x0228C440, AggregateException *, Flatten, (AggregateException * __this));
IL2CPP_REGISTER_METHOD(0x0228C860, String *, ToString, (AggregateException * __this));
IL2CPP_REGISTER_METHOD(0x0228CB70, int32_t, get_InnerExceptionCount, (AggregateException * __this));
}
