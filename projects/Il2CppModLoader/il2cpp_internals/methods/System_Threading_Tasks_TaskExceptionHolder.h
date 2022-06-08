#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskExceptionHolder {
IL2CPP_REGISTER_METHOD(0x0233C210, void, __ctor, (TaskExceptionHolder * __this, Task * task));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldFailFastOnUnobservedException, ());
IL2CPP_REGISTER_METHOD(0x0233C2C0, void, EnsureADUnloadCallbackRegistered, ());
IL2CPP_REGISTER_METHOD(0x0233C5C0, void, AppDomainUnloadCallback, (Object * sender, EventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x0473EC98, TaskExceptionHolder_AppDomainUnloadCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0233C660, void, Finalize, (TaskExceptionHolder * __this));
IL2CPP_REGISTER_METHODINFO(0x047120E0, TaskExceptionHolder_Finalize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0233CE60, bool, get_ContainsFaultList, (TaskExceptionHolder * __this));
IL2CPP_REGISTER_METHOD(0x0233CE70, void, Add, (TaskExceptionHolder * __this, Object * exceptionObject, bool representsCancellation));
IL2CPP_REGISTER_METHOD(0x0233CF80, void, SetCancellationException, (TaskExceptionHolder * __this, Object * exceptionObject));
IL2CPP_REGISTER_METHOD(0x0233D070, void, AddFaultException, (TaskExceptionHolder * __this, Object * exceptionObject));
IL2CPP_REGISTER_METHODINFO(0x047916E8, TaskExceptionHolder_AddFaultException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0233D5A0, void, MarkAsUnhandled, (TaskExceptionHolder * __this));
IL2CPP_REGISTER_METHOD(0x0233D790, void, MarkAsHandled, (TaskExceptionHolder * __this, bool calledFromFinalizer));
IL2CPP_REGISTER_METHOD(0x0233D860, AggregateException *, CreateExceptionObject, (TaskExceptionHolder * __this, bool calledFromFinalizer, Exception * includeThisException));
IL2CPP_REGISTER_METHOD(0x0233DCC0, ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ *, GetExceptionDispatchInfos, (TaskExceptionHolder * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, ExceptionDispatchInfo *, GetCancellationExceptionDispatchInfo, (TaskExceptionHolder * __this));
IL2CPP_REGISTER_METHOD(0x0233DE30, void, __cctor, ());
}
