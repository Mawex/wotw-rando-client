#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult {
IL2CPP_REGISTER_METHOD(0x010415E0, void, __ctor, (TaskToApm_TaskWrapperAsyncResult * __this, Task * task, Object * state, bool completedSynchronously));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, IAsyncResult_get_AsyncState, (TaskToApm_TaskWrapperAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, IAsyncResult_get_CompletedSynchronously, (TaskToApm_TaskWrapperAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x023407D0, bool, IAsyncResult_get_IsCompleted, (TaskToApm_TaskWrapperAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x023407F0, WaitHandle *, IAsyncResult_get_AsyncWaitHandle, (TaskToApm_TaskWrapperAsyncResult * __this));
}
