using namespace app;

namespace app::methods::System::Threading::Tasks::TaskCompletionSource_1_System::Boolean_ {
IL2CPP_REGISTER_METHOD(0x02776BF0, void, __ctor, (TaskCompletionSource_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04793660, TaskCompletionSource_1_System_Boolean___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02776F70, bool, TrySetException, (TaskCompletionSource_1_System_Boolean_ * __this, Exception * exception));
IL2CPP_REGISTER_METHODINFO(0x0477C960, TaskCompletionSource_1_System_Boolean__TrySetException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Task_1_System_Boolean_ *, get_Task, (TaskCompletionSource_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047958F0, TaskCompletionSource_1_System_Boolean__get_Task__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02777250, void, SetResult, (TaskCompletionSource_1_System_Boolean_ * __this, bool result));
IL2CPP_REGISTER_METHODINFO(0x04752F88, TaskCompletionSource_1_System_Boolean__SetResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027771C0, bool, TrySetResult, (TaskCompletionSource_1_System_Boolean_ * __this, bool result));
IL2CPP_REGISTER_METHODINFO(0x04778E18, TaskCompletionSource_1_System_Boolean__TrySetResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02776D20, void, __ctor, (TaskCompletionSource_1_System_Boolean_ * __this, Object * state));
IL2CPP_REGISTER_METHOD(0x02776D50, void, __ctor, (TaskCompletionSource_1_System_Boolean_ * __this, Object * state, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHOD(0x02776E90, void, SpinUntilCompleted, (TaskCompletionSource_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHOD(0x02777090, void, SetException, (TaskCompletionSource_1_System_Boolean_ * __this, Exception * exception));
IL2CPP_REGISTER_METHODINFO(0x0475FCC0, TaskCompletionSource_1_System_Boolean__SetException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02777340, bool, TrySetCanceled, (TaskCompletionSource_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHOD(0x02777370, bool, TrySetCanceled, (TaskCompletionSource_1_System_Boolean_ * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x02777400, void, SetCanceled, (TaskCompletionSource_1_System_Boolean_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04796EE0, TaskCompletionSource_1_System_Boolean__SetCanceled__MethodInfo);
}
