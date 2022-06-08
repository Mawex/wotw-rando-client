#include <interception_macros.h>

namespace app::methods::EnvironmentLight {
IL2CPP_REGISTER_METHOD(0x00CA6810, bool, get_IsSceneLight, (EnvironmentLight * __this));
IL2CPP_REGISTER_METHOD(0x00CA68C0, void, OnEnable, (EnvironmentLight * __this));
IL2CPP_REGISTER_METHOD(0x00CA69B0, void, OnDisable, (EnvironmentLight * __this));
IL2CPP_REGISTER_METHOD(0x00CA6B60, void, Update, (EnvironmentLight * __this));
IL2CPP_REGISTER_METHOD(0x00CA6F20, Color, GetColorForChannel, (EnvironmentLight * __this, EnvironmentLight_Channel__Enum channel));
IL2CPP_REGISTER_METHOD(0x00CA6F80, void, ClearBind, (Material * bindMaterial, int32_t num));
IL2CPP_REGISTER_METHOD(0x00CA71F0, void, BindLightToMaterial, (EnvironmentLight * __this, Material * bindMaterial, float randomOffset, int32_t num));
IL2CPP_REGISTER_METHOD(0x00CA7280, void, __ctor, (EnvironmentLight * __this));
IL2CPP_REGISTER_METHOD(0x00CA74D0, void, __cctor, ());
}
