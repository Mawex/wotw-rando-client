#include <interception_macros.h>

namespace app::methods::Moon::DrivenZRotation {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_ShouldUpdate, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_ShouldUpdate, (DrivenZRotation * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9280, ITweenLerpInputProvider *, get_ResolvedInputProvider, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9340, Transform *, get_EffectiveTranform, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9440, float, get_ResolvedInitialRotation, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9540, float, get_ResolvedEndRotation, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9640, void, Awake, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9740, void, OnEnable, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA97E0, void, OnDisable, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9640, void, Init, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9880, bool, UpdateTweenValue, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9980, float, EvaluateRotZ, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9B00, void, UpdateTarget, (DrivenZRotation * __this));
IL2CPP_REGISTER_METHOD(0x01BA9ED0, void, OnUpdate, (DrivenZRotation * __this, float delta));
IL2CPP_REGISTER_METHOD(0x01BA9EE0, void, __ctor, (DrivenZRotation * __this));
}
