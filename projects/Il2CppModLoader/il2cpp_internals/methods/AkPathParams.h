#include <interception_macros.h>

namespace app::methods::AkPathParams {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkPathParams * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x01887AE0, void *, getCPtr, (AkPathParams * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkPathParams * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01887B70, void, Finalize, (AkPathParams * __this));
IL2CPP_REGISTER_METHOD(0x01887BF0, void, Dispose, (AkPathParams * __this));
IL2CPP_REGISTER_METHOD(0x01887E00, void, set_listenerPos, (AkPathParams * __this, AkVector * value));
IL2CPP_REGISTER_METHOD(0x01887F40, AkVector *, get_listenerPos, (AkPathParams * __this));
IL2CPP_REGISTER_METHOD(0x01888150, void, set_emitterPos, (AkPathParams * __this, AkVector * value));
IL2CPP_REGISTER_METHOD(0x01888290, AkVector *, get_emitterPos, (AkPathParams * __this));
IL2CPP_REGISTER_METHOD(0x018884A0, void, set_numValidPaths, (AkPathParams * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x018885D0, uint32_t, get_numValidPaths, (AkPathParams * __this));
IL2CPP_REGISTER_METHOD(0x018886F0, void, __ctor, (AkPathParams * __this));
}
