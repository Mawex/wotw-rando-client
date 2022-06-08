#include <interception_macros.h>

namespace app::methods::AkRamp {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkRamp * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x018929E0, void *, getCPtr, (AkRamp * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkRamp * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01892A70, void, Finalize, (AkRamp * __this));
IL2CPP_REGISTER_METHOD(0x01892AF0, void, Dispose, (AkRamp * __this));
IL2CPP_REGISTER_METHOD(0x01892D00, void, __ctor, (AkRamp * __this));
IL2CPP_REGISTER_METHOD(0x01892E20, void, __ctor, (AkRamp * __this, float in_fPrev, float in_fNext));
IL2CPP_REGISTER_METHOD(0x01892F70, void, set_fPrev, (AkRamp * __this, float value));
IL2CPP_REGISTER_METHOD(0x018930A0, float, get_fPrev, (AkRamp * __this));
IL2CPP_REGISTER_METHOD(0x018931C0, void, set_fNext, (AkRamp * __this, float value));
IL2CPP_REGISTER_METHOD(0x018932F0, float, get_fNext, (AkRamp * __this));
}
