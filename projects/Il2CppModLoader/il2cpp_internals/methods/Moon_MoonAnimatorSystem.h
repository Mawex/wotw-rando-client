#include <interception_macros.h>

namespace app::methods::Moon::MoonAnimatorSystem {
IL2CPP_REGISTER_METHOD(0x0211D880, void, RegisterAnimatorForPreview, (MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0211D9A0, void, UnregisterAnimatorForPreview, (MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0211DA60, void, UpdateMoonAnimatorPreviews, (float currentTime));
IL2CPP_REGISTER_METHOD(0x0211DBA0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0211DD10, void, RuntimeInitializeOnLoad, ());
IL2CPP_REGISTER_METHOD(0x0211DDA0, void, ClearAll, ());
IL2CPP_REGISTER_METHODINFO(0x04774AC0, MoonAnimatorSystem_ClearAll__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0211DF60, bool, HasInstance, ());
IL2CPP_REGISTER_METHOD(0x0211E030, MoonAnimatorSystem *, GetInstance, ());
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (MoonAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x005C3FE0, PlayableGraph, get_PlayableGraph, (MoonAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0060A8A0, void, set_PlayableGraph, (MoonAnimatorSystem * __this, PlayableGraph value));
IL2CPP_REGISTER_METHOD(0x0211E2C0, void, OnUpdate, (MoonAnimatorSystem * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0211E650, void, RegisterAnimator, (MoonAnimatorSystem * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0211E750, void, UnregisterAnimator, (MoonAnimatorSystem * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x0211EA50, void, ClearAllAnimators, (MoonAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0211EB80, void, ProcessUnregisterQueue, (MoonAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0211ECA0, void, Awake, (MoonAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0211ED80, void, OnEnable, (MoonAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0211EE20, void, OnDisable, (MoonAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0211EEC0, void, OnDestroy, (MoonAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0211EF70, void, __ctor, (MoonAnimatorSystem * __this));
IL2CPP_REGISTER_METHOD(0x0211F1B0, void, __cctor, ());
}
