using namespace app;

namespace app::methods::System::Threading::Tasks::TaskFactory_1_System::Boolean_ {
IL2CPP_REGISTER_METHOD(0x02778BD0, void, __ctor, (TaskFactory_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHOD(0x02778C10, void, __ctor, (TaskFactory_1_System_Boolean_ * __this, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskContinuationOptions__Enum continuationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x02778C80, Task_1_System_Boolean_ *, StartNew, (TaskFactory_1_System_Boolean_ * __this, Func_1_Boolean_ * function, CancellationToken cancellationToken, TaskCreationOptions__Enum creationOptions, TaskScheduler * scheduler));
IL2CPP_REGISTER_METHOD(0x02778E10, void, FromAsyncCoreLogic, (IAsyncResult * iar, Func_2_IAsyncResult_Boolean_ * endFunction, Action_1_IAsyncResult_ * endAction, Task_1_System_Boolean_ * promise, bool requiresSynchronization));
IL2CPP_REGISTER_METHOD(0x027792C0, Task_1_System_Boolean_ *, FromAsync, (TaskFactory_1_System_Boolean_ * __this, Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Boolean_ * endMethod, Object * state));
IL2CPP_REGISTER_METHOD(0x02779310, Task_1_System_Boolean_ *, FromAsyncImpl, (Func_3_AsyncCallback_Object_IAsyncResult_ * beginMethod, Func_2_IAsyncResult_Boolean_ * endFunction, Action_1_IAsyncResult_ * endAction, Object * state, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHODINFO(0x0475BEF0, TaskFactory_1_System_Boolean__FromAsyncImpl__MethodInfo);
}
