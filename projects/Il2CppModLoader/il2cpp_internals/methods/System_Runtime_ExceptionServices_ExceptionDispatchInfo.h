using namespace app;

namespace app::methods::System::Runtime::ExceptionServices::ExceptionDispatchInfo {
IL2CPP_REGISTER_METHOD(0x01A93870, void, __ctor, (ExceptionDispatchInfo * __this, Exception * exception));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, get_BinaryStackTraceArray, (ExceptionDispatchInfo * __this));
IL2CPP_REGISTER_METHOD(0x01A93A90, ExceptionDispatchInfo *, Capture, (Exception * source));
IL2CPP_REGISTER_METHODINFO(0x0476B5F0, ExceptionDispatchInfo_Capture__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Exception *, get_SourceException, (ExceptionDispatchInfo * __this));
IL2CPP_REGISTER_METHOD(0x01A93C30, void, Throw, (ExceptionDispatchInfo * __this));
IL2CPP_REGISTER_METHODINFO(0x04734A00, ExceptionDispatchInfo_Throw__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A93C90, void, Throw, (Exception * source));
}
