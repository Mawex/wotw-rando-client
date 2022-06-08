#include <interception_macros.h>

namespace app::methods::UnityEngine::Gradient {
IL2CPP_REGISTER_METHOD(0x02529FC0, void, __ctor, (Gradient * __this));
IL2CPP_REGISTER_METHOD(0x0252A020, void *, Init, ());
IL2CPP_REGISTER_METHOD(0x0252A070, void, Cleanup, (Gradient * __this));
IL2CPP_REGISTER_METHOD(0x0252A0C0, bool, Internal_Equals, (Gradient * __this, void * other));
IL2CPP_REGISTER_METHOD(0x0252A120, void, Finalize, (Gradient * __this));
IL2CPP_REGISTER_METHOD(0x0252A1E0, Color, Evaluate, (Gradient * __this, float time));
IL2CPP_REGISTER_METHOD(0x0252A270, GradientColorKey__Array *, get_colorKeys, (Gradient * __this));
IL2CPP_REGISTER_METHOD(0x0252A2C0, void, set_colorKeys, (Gradient * __this, GradientColorKey__Array * value));
IL2CPP_REGISTER_METHOD(0x0252A320, GradientAlphaKey__Array *, get_alphaKeys, (Gradient * __this));
IL2CPP_REGISTER_METHOD(0x0252A370, void, set_alphaKeys, (Gradient * __this, GradientAlphaKey__Array * value));
IL2CPP_REGISTER_METHOD(0x0252A3D0, void, SetKeys, (Gradient * __this, GradientColorKey__Array * colorKeys, GradientAlphaKey__Array * alphaKeys));
IL2CPP_REGISTER_METHOD(0x0252A440, bool, Equals, (Gradient * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x0252A600, bool, Equals, (Gradient * __this, Gradient * other));
IL2CPP_REGISTER_METHOD(0x01F25890, int32_t, GetHashCode, (Gradient * __this));
IL2CPP_REGISTER_METHOD(0x0252A720, void, Evaluate_Injected, (Gradient * __this, float time, Color * ret));
}
