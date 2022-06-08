#include <interception_macros.h>

namespace app::methods::AkAudioSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkAudioSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026C9350, void *, getCPtr, (AkAudioSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkAudioSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026C93E0, void, Finalize, (AkAudioSettings * __this));
IL2CPP_REGISTER_METHOD(0x026C9460, void, Dispose, (AkAudioSettings * __this));
IL2CPP_REGISTER_METHOD(0x026C9670, void, set_uNumSamplesPerFrame, (AkAudioSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C97A0, uint32_t, get_uNumSamplesPerFrame, (AkAudioSettings * __this));
IL2CPP_REGISTER_METHOD(0x026C98C0, void, set_uNumSamplesPerSecond, (AkAudioSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C99F0, uint32_t, get_uNumSamplesPerSecond, (AkAudioSettings * __this));
IL2CPP_REGISTER_METHOD(0x026C9B10, void, __ctor, (AkAudioSettings * __this));
}
