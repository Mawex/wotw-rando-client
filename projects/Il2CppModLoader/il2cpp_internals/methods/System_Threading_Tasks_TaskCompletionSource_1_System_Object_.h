#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskCompletionSource_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x002FA280, Task_1_System_Object_ *, get_Task, (TaskCompletionSource_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047936C0, TaskCompletionSource_1_System_Object__get_Task__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02776BF0, void, __ctor, (TaskCompletionSource_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04737768, TaskCompletionSource_1_System_Object___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02776D20, void, __ctor, (TaskCompletionSource_1_System_Object_ * __this, Object * state));
IL2CPP_REGISTER_METHODINFO(0x04712B28, TaskCompletionSource_1_System_Object___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02776D50, void, __ctor, (TaskCompletionSource_1_System_Object_ * __this, Object * state, TaskCreationOptions__Enum creationOptions));
IL2CPP_REGISTER_METHOD(0x02776E90, void, SpinUntilCompleted, (TaskCompletionSource_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x027774F0, bool, TrySetException, (TaskCompletionSource_1_System_Object_ * __this, Exception * exception));
IL2CPP_REGISTER_METHODINFO(0x04715410, TaskCompletionSource_1_System_Object__TrySetException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02777610, void, SetException, (TaskCompletionSource_1_System_Object_ * __this, Exception * exception));
IL2CPP_REGISTER_METHODINFO(0x0474C998, TaskCompletionSource_1_System_Object__SetException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027771C0, bool, TrySetResult, (TaskCompletionSource_1_System_Object_ * __this, Object * result));
IL2CPP_REGISTER_METHOD(0x02777740, void, SetResult, (TaskCompletionSource_1_System_Object_ * __this, Object * result));
IL2CPP_REGISTER_METHODINFO(0x04718060, TaskCompletionSource_1_System_Object__SetResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02777340, bool, TrySetCanceled, (TaskCompletionSource_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02777370, bool, TrySetCanceled, (TaskCompletionSource_1_System_Object_ * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x02777830, void, SetCanceled, (TaskCompletionSource_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04761D50, TaskCompletionSource_1_System_Object__SetCanceled__MethodInfo);
}
