#include <interception_macros.h>

namespace app::methods::AkAudioSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor_1, (app::AkAudioSettings * this_ptr, app::void * c_ptr, bool c_memory_own));
IL2CPP_REGISTER_METHOD(0x026C9350, void *, getCPtr, (app::AkAudioSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkAudioSettings * this_ptr, app::void * c_ptr));
IL2CPP_REGISTER_METHOD(0x026C93E0, void, Finalize, (app::AkAudioSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026C9460, void, Dispose, (app::AkAudioSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026C9670, void, set_uNumSamplesPerFrame, (app::AkAudioSettings * this_ptr, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C97A0, uint32_t, get_uNumSamplesPerFrame, (app::AkAudioSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026C98C0, void, set_uNumSamplesPerSecond, (app::AkAudioSettings * this_ptr, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C99F0, uint32_t, get_uNumSamplesPerSecond, (app::AkAudioSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026C9B10, void, __ctor_2, (app::AkAudioSettings * this_ptr));
}
