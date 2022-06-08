#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskFactory {
IL2CPP_REGISTER_METHOD(0x0233DEB0, void, __ctor, (TaskFactory * __this));
IL2CPP_REGISTER_METHOD(0x0233DEE0, void, __ctor, (TaskFactory * __this, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskContinuationOptions__Enum continuationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0233DF40, void, CheckCreationOptions, (TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHODINFO(0x0471E7E8, TaskFactory_CheckCreationOptions__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0233DFF0, Task *, StartNew, (TaskFactory * __this, Action * action, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0233E0F0, Task *, StartNew, (TaskFactory * __this, Action_1_Object_ * action, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0233E1F0, void, CheckFromAsyncOptions, (TaskCreationOptions__Enum creationOptions, bool hasBeginMethod));
IL2CPP_REGISTER_METHODINFO(0x0478F548, TaskFactory_CheckFromAsyncOptions__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0233E350, Task_1_Task_ *, CommonCWAnyLogic, (IList_1_System_Threading_Tasks_Task_ * tasks));
IL2CPP_REGISTER_METHODINFO(0x0472BFC8, TaskFactory_CommonCWAnyLogic__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0233E6F0, void, CheckMultiTaskContinuationOptions, (TaskContinuationOptions__Enum continuationOptions));
IL2CPP_REGISTER_METHODINFO(0x04798668, TaskFactory_CheckMultiTaskContinuationOptions__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01544AE0, Task_1_System_Object_ *, StartNew, (TaskFactory * __this, Func_2_Object_Object_ * function, Object * state, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskScheduler * scheduler));
}
