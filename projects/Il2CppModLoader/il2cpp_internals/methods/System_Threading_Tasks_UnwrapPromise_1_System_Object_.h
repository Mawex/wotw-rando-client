#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::UnwrapPromise_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02A5DA30, void, __ctor, (UnwrapPromise_1_System_Object_ * __this, Task * outerTask, bool lookForOce));
IL2CPP_REGISTER_METHOD(0x02A5DC30, void, Invoke, (UnwrapPromise_1_System_Object_ * __this, Task * completingTask));
IL2CPP_REGISTER_METHOD(0x02A5DDE0, void, InvokeCore, (UnwrapPromise_1_System_Object_ * __this, Task * completingTask));
IL2CPP_REGISTER_METHOD(0x02A5DE40, void, InvokeCoreAsync, (UnwrapPromise_1_System_Object_ * __this, Task * completingTask));
IL2CPP_REGISTER_METHOD(0x02A5E150, void, ProcessCompletedOuterTask, (UnwrapPromise_1_System_Object_ * __this, Task * task));
IL2CPP_REGISTER_METHOD(0x02A5E380, bool, TrySetFromTask, (UnwrapPromise_1_System_Object_ * __this, Task * task, bool lookForOce));
IL2CPP_REGISTER_METHOD(0x02A5E740, void, ProcessInnerTask, (UnwrapPromise_1_System_Object_ * __this, Task * task));
}
