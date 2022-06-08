#include <interception_macros.h>

namespace app::methods::AkCallbackSerializer {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkCallbackSerializer * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026D52B0, void *, getCPtr, (AkCallbackSerializer * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkCallbackSerializer * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026D5340, void, Finalize, (AkCallbackSerializer * __this));
IL2CPP_REGISTER_METHOD(0x026D53C0, void, Dispose, (AkCallbackSerializer * __this));
IL2CPP_REGISTER_METHOD(0x026D55D0, AKRESULT__Enum, Init, (void * in_pMemory, uint32_t in_uSize));
IL2CPP_REGISTER_METHOD(0x026D5700, void, Term, ());
IL2CPP_REGISTER_METHOD(0x026D5810, void *, Lock, ());
IL2CPP_REGISTER_METHOD(0x026D5920, void, SetLocalOutput, (uint32_t in_uErrorLevel));
IL2CPP_REGISTER_METHOD(0x026D5A40, void, Unlock, ());
IL2CPP_REGISTER_METHOD(0x026D5B50, AKRESULT__Enum, AudioSourceChangeCallbackFunc, (bool in_bOtherAudioPlaying, Object * in_pCookie));
IL2CPP_REGISTER_METHOD(0x026D5CA0, void, __ctor, (AkCallbackSerializer * __this));
}
