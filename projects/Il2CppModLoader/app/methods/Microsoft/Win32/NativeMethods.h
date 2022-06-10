#pragma once
#include <interception_macros.h>

namespace app::methods::Microsoft::Win32::NativeMethods {
    IL2CPP_REGISTER_METHOD(0x02171B50, bool, DuplicateHandle_1, (app::HandleRef h_source_process_handle, app::SafeHandle * h_source_handle, app::HandleRef h_target_process, app::SafeWaitHandle * * target_handle, int32_t dw_desired_access, bool b_inherit_handle, int32_t dw_options))
    IL2CPP_REGISTER_METHODINFO(0x0470CAA0, NativeMethods_DuplicateHandle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02171E30, bool, DuplicateHandle_2, (app::HandleRef h_source_process_handle, app::HandleRef h_source_handle, app::HandleRef h_target_process, app::SafeProcessHandle * * target_handle, int32_t dw_desired_access, bool b_inherit_handle, int32_t dw_options))
    IL2CPP_REGISTER_METHODINFO(0x047519F8, NativeMethods_DuplicateHandle_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02172050, void *, GetCurrentProcess, ())
    IL2CPP_REGISTER_METHOD(0x02172060, bool, GetExitCodeProcess_1, (void * process_handle, int32_t * exit_code))
    IL2CPP_REGISTER_METHOD(0x02172080, bool, GetExitCodeProcess_2, (app::SafeProcessHandle * process_handle, int32_t * exit_code))
    IL2CPP_REGISTER_METHOD(0x0173D7D0, bool, TerminateProcess_1, (void * process_handle, int32_t exit_code))
    IL2CPP_REGISTER_METHOD(0x02172180, bool, TerminateProcess_2, (app::SafeProcessHandle * process_handle, int32_t exit_code))
    IL2CPP_REGISTER_METHOD(0x02172250, int32_t, GetCurrentProcessId, ())
    IL2CPP_REGISTER_METHOD(0x02172260, bool, CloseProcess, (void * handle))
}
