#include <interception_macros.h>

namespace app::methods::Moon::Timeline::VerltPathAnimator {
IL2CPP_REGISTER_METHOD(0x002FBC20, MoonReference_1_UnityEngine_Transform_ *, GetTransformTarget, (VerltPathAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1D2E0, Transform *, get_EffectiveTransform, (VerltPathAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00D1D3B0, void, InitJointNumbers, (VerltPathAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00778590, void, OnStartPlayback, (VerltPathAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00778590, void, OnStopPlayback, (VerltPathAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (VerltPathAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnUpdateEntity, (VerltPathAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, HasFinished, (VerltPathAnimator * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x00D1D480, void, __ctor, (VerltPathAnimator * __this));
}
