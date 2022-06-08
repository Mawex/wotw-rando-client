using namespace app;

namespace app::methods::Microsoft::Win32::Win32Native {
IL2CPP_REGISTER_METHOD(0x023B7DC0, String *, GetMessage, (int32_t hr));
IL2CPP_REGISTER_METHOD(0x023B7E60, int32_t, MakeHRFromErrorCode, (int32_t errorCode));
IL2CPP_REGISTER_METHOD(0x023B7E70, uint32_t, GetCurrentProcessId, (MethodInfo * method));
}
