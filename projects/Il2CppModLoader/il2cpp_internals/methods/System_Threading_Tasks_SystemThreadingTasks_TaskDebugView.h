#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::SystemThreadingTasks_TaskDebugView {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (SystemThreadingTasks_TaskDebugView * __this, Task * task));
IL2CPP_REGISTER_METHOD(0x00571730, Object *, get_AsyncState, (SystemThreadingTasks_TaskDebugView * __this));
IL2CPP_REGISTER_METHOD(0x02330660, TaskCreationOptions__Enum, get_CreationOptions, (SystemThreadingTasks_TaskDebugView * __this));
IL2CPP_REGISTER_METHOD(0x02330690, Exception *, get_Exception, (SystemThreadingTasks_TaskDebugView * __this));
IL2CPP_REGISTER_METHOD(0x023306D0, int32_t, get_Id, (SystemThreadingTasks_TaskDebugView * __this));
IL2CPP_REGISTER_METHOD(0x023306F0, bool, get_CancellationPending, (SystemThreadingTasks_TaskDebugView * __this));
IL2CPP_REGISTER_METHOD(0x02330770, TaskStatus__Enum, get_Status, (SystemThreadingTasks_TaskDebugView * __this));
}
