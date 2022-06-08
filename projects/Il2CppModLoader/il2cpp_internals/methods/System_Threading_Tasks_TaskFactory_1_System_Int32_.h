#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskFactory_1_System::Int32_ {
IL2CPP_REGISTER_METHOD(0x01544C70, Task_1_System_Int32_ *, FromAsyncTrim, (Stream * thisRef, Stream_ReadWriteParameters args, Func_5_System_IO_Stream_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_3_System_IO_Stream_IAsyncResult_Int32_ * endMethod));
IL2CPP_REGISTER_METHODINFO(0x04705518, TaskFactory_1_System_Int32__FromAsyncTrim__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01544C70, Task_1_System_Int32_ *, FromAsyncTrim, (Object * thisRef, Stream_ReadWriteParameters args, Func_5_Object_System_IO_Stream_ReadWriteParameters_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_3_Object_IAsyncResult_Int32_ * endMethod));
IL2CPP_REGISTER_METHOD(0x02778BD0, void, __ctor, (TaskFactory_1_System_Int32_ * __this));
IL2CPP_REGISTER_METHOD(0x02778C10, void, __ctor, (TaskFactory_1_System_Int32_ * __this, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskContinuationOptions__Enum continuationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x02779D50, Task_1_System_Int32_ *, StartNew, (TaskFactory_1_System_Int32_ * __this, Func_1_Int32_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x02779EE0, void, FromAsyncCoreLogic, (IAsyncResult * iar, Func_2_IAsyncResult_Int32_ * endFunction, Action_1_IAsyncResult_ * endAction, Task_1_System_Int32_ * promise, bool requiresSynchronization));
IL2CPP_REGISTER_METHOD(0x027792C0, Task_1_System_Int32_ *, FromAsync, (TaskFactory_1_System_Int32_ * __this, Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Int32_ * endMethod, Object * state));
IL2CPP_REGISTER_METHOD(0x0277A390, Task_1_System_Int32_ *, FromAsyncImpl, (Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Int32_ * endFunction, Action_1_IAsyncResult_ * endAction, Object * state, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHODINFO(0x04702278, TaskFactory_1_System_Int32__FromAsyncImpl__MethodInfo);
}
