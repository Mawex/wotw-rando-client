using namespace app;

namespace app::methods::System::Threading::Tasks::TaskFactory_1_VoidTaskResult_ {
IL2CPP_REGISTER_METHOD(0x01545B70, Task_1_VoidTaskResult_ *, FromAsyncTrim, (Stream * thisRef, Stream_ReadWriteParameters args, Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_3_System_IO_Stream_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * endMethod));
IL2CPP_REGISTER_METHODINFO(0x04787B00, TaskFactory_1_VoidTaskResult__FromAsyncTrim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01545B70, Task_1_VoidTaskResult_ *, FromAsyncTrim, (Object * thisRef, Stream_ReadWriteParameters args, Func_5_Object_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_3_Object_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * endMethod));
IL2CPP_REGISTER_METHOD(0x02778BD0, void, __ctor, (TaskFactory_1_VoidTaskResult_ * __this));
IL2CPP_REGISTER_METHOD(0x02778C10, void, __ctor, (TaskFactory_1_VoidTaskResult_ * __this, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskContinuationOptions__Enum continuationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0277CED0, Task_1_VoidTaskResult_ *, StartNew, (TaskFactory_1_VoidTaskResult_ * __this, Func_1_System_Threading_Tasks_VoidTaskResult_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x0277D060, void, FromAsyncCoreLogic, (IAsyncResult * iar, Func_2_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * endFunction, Action_1_IAsyncResult_ * endAction, Task_1_VoidTaskResult_ * promise, bool requiresSynchronization));
IL2CPP_REGISTER_METHOD(0x027792C0, Task_1_VoidTaskResult_ *, FromAsync, (TaskFactory_1_VoidTaskResult_ * __this, Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * endMethod, Object * state));
IL2CPP_REGISTER_METHOD(0x0277D500, Task_1_VoidTaskResult_ *, FromAsyncImpl, (Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_System_Threading_Tasks_VoidTaskResult_ * endFunction, Action_1_IAsyncResult_ * endAction, Object * state, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHODINFO(0x047374C0, TaskFactory_1_VoidTaskResult__FromAsyncImpl__MethodInfo);
}
