#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskFactory_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02778BD0, void, __ctor, (TaskFactory_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02778C10, void, __ctor, (TaskFactory_1_System_Object_ * __this, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskContinuationOptions__Enum continuationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0277BE50, Task_1_System_Object_ *, StartNew, (TaskFactory_1_System_Object_ * __this, Func_1_Object_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0277BFE0, void, FromAsyncCoreLogic, (IAsyncResult * iar, Func_2_IAsyncResult_Object_ * endFunction, Action_1_IAsyncResult_ * endAction, Task_1_System_Object_ * promise, bool requiresSynchronization));
IL2CPP_REGISTER_METHOD(0x027792C0, Task_1_System_Object_ *, FromAsync, (TaskFactory_1_System_Object_ * __this, Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Object_ * endMethod, Object * state));
IL2CPP_REGISTER_METHOD(0x0277C490, Task_1_System_Object_ *, FromAsyncImpl, (Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Object_ * endFunction, Action_1_IAsyncResult_ * endAction, Object * state, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHODINFO(0x04758318, TaskFactory_1_System_Object__FromAsyncImpl__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01544F10, Task_1_System_Object_ *, FromAsync, (TaskFactory_1_System_Object_ * __this, Func_4_Object_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Object_ * endMethod, Object * arg1, Object * state));
IL2CPP_REGISTER_METHOD(0x01544F60, Task_1_System_Object_ *, FromAsyncImpl, (Func_4_Object_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Object_ * endFunction, Action_1_IAsyncResult_ * endAction, Object * arg1, Object * state, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHODINFO(0x0470BBA0, TaskFactory_1_System_Object__FromAsyncImpl_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015458E0, Task_1_System_Object_ *, FromAsyncTrim, (Object * thisRef, Object * args, Func_5_Object_Object_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_3_Object_IAsyncResult_Object_ * endMethod));
}
