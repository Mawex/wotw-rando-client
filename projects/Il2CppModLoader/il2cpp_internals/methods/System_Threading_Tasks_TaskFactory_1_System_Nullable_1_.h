#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskFactory_1_System::Nullable_1_ {
IL2CPP_REGISTER_METHOD(0x02778BD0, void, __ctor, (TaskFactory_1_System_Nullable_1_ * __this));
IL2CPP_REGISTER_METHOD(0x02778C10, void, __ctor, (TaskFactory_1_System_Nullable_1_ * __this, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskContinuationOptions__Enum continuationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0277ADD0, Task_1_System_Nullable_1_ *, StartNew, (TaskFactory_1_System_Nullable_1_ * __this, Func_1_Nullable_1_Int32_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0277AF60, void, FromAsyncCoreLogic, (IAsyncResult * iar, Func_2_IAsyncResult_Nullable_1_Int32_ * endFunction, Action_1_IAsyncResult_ * endAction, Task_1_System_Nullable_1_ * promise, bool requiresSynchronization));
IL2CPP_REGISTER_METHOD(0x027792C0, Task_1_System_Nullable_1_ *, FromAsync, (TaskFactory_1_System_Nullable_1_ * __this, Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Nullable_1_Int32_ * endMethod, Object * state));
IL2CPP_REGISTER_METHOD(0x0277B410, Task_1_System_Nullable_1_ *, FromAsyncImpl, (Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Nullable_1_Int32_ * endFunction, Action_1_IAsyncResult_ * endAction, Object * state, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHODINFO(0x047561E0, TaskFactory_1_System_Nullable_1__FromAsyncImpl__MethodInfo);
}
