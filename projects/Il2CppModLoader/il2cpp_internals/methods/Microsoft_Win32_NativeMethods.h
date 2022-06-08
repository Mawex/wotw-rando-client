using namespace app;

namespace app::methods::Microsoft::Win32::NativeMethods {
IL2CPP_REGISTER_METHOD(0x02171B50, bool, DuplicateHandle, (HandleRef hSourceProcessHandle, SafeHandle * hSourceHandle, HandleRef hTargetProcess, SafeWaitHandle * * targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions));
IL2CPP_REGISTER_METHODINFO(0x0470CAA0, NativeMethods_DuplicateHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02171E30, bool, DuplicateHandle, (HandleRef hSourceProcessHandle, HandleRef hSourceHandle, HandleRef hTargetProcess, SafeProcessHandle * * targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions));
IL2CPP_REGISTER_METHODINFO(0x047519F8, NativeMethods_DuplicateHandle_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02172050, void *, GetCurrentProcess, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02172060, bool, GetExitCodeProcess, (void * processHandle, int32_t * exitCode));
IL2CPP_REGISTER_METHOD(0x02172080, bool, GetExitCodeProcess, (SafeProcessHandle * processHandle, int32_t * exitCode));
IL2CPP_REGISTER_METHOD(0x0173D7D0, bool, TerminateProcess, (void * processHandle, int32_t exitCode));
IL2CPP_REGISTER_METHOD(0x02172180, bool, TerminateProcess, (SafeProcessHandle * processHandle, int32_t exitCode));
IL2CPP_REGISTER_METHOD(0x02172250, int32_t, GetCurrentProcessId, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02172260, bool, CloseProcess, (void * handle));
}
