#include <interception_macros.h>

namespace app::methods::AkSourceSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkSourceSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026F9CD0, void *, getCPtr, (AkSourceSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkSourceSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026F9D60, void, Finalize, (AkSourceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026F9DE0, void, Dispose, (AkSourceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026F9FF0, void, set_sourceID, (AkSourceSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026FA120, uint32_t, get_sourceID, (AkSourceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FA240, void, set_pMediaMemory, (AkSourceSettings * __this, void * value));
IL2CPP_REGISTER_METHOD(0x026FA370, void *, get_pMediaMemory, (AkSourceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FA490, void, set_uMediaSize, (AkSourceSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026FA5C0, uint32_t, get_uMediaSize, (AkSourceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FA6E0, void, Clear, (AkSourceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026FA780, int32_t, GetSizeOf, ());
IL2CPP_REGISTER_METHOD(0x026FA810, void, Clone, (AkSourceSettings * __this, AkSourceSettings * other));
IL2CPP_REGISTER_METHOD(0x026FA930, void, __ctor, (AkSourceSettings * __this));
}
