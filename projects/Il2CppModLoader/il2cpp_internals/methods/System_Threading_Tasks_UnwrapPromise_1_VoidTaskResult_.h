#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::UnwrapPromise_1_VoidTaskResult_ {
IL2CPP_REGISTER_METHOD(0x02A5E7F0, void, __ctor, (UnwrapPromise_1_VoidTaskResult_ * __this, Task * outerTask, bool lookForOce));
IL2CPP_REGISTER_METHODINFO(0x04791548, UnwrapPromise_1_VoidTaskResult___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A5E9F0, void, Invoke, (UnwrapPromise_1_VoidTaskResult_ * __this, Task * completingTask));
IL2CPP_REGISTER_METHOD(0x02A5DDE0, void, InvokeCore, (UnwrapPromise_1_VoidTaskResult_ * __this, Task * completingTask));
IL2CPP_REGISTER_METHOD(0x02A5EBA0, void, InvokeCoreAsync, (UnwrapPromise_1_VoidTaskResult_ * __this, Task * completingTask));
IL2CPP_REGISTER_METHOD(0x02A5EEB0, void, ProcessCompletedOuterTask, (UnwrapPromise_1_VoidTaskResult_ * __this, Task * task));
IL2CPP_REGISTER_METHOD(0x02A5F0E0, bool, TrySetFromTask, (UnwrapPromise_1_VoidTaskResult_ * __this, Task * task, bool lookForOce));
IL2CPP_REGISTER_METHOD(0x02A5E740, void, ProcessInnerTask, (UnwrapPromise_1_VoidTaskResult_ * __this, Task * task));
}
