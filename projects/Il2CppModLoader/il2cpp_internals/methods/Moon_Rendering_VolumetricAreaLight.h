#include <interception_macros.h>

namespace app::methods::Moon::Rendering::VolumetricAreaLight {
IL2CPP_REGISTER_METHOD(0x00EBFC50, Vector3, get_WorldPos, (VolumetricAreaLight * __this));
IL2CPP_REGISTER_METHOD(0x00EBFFC0, Vector3, get_Size, (VolumetricAreaLight * __this));
IL2CPP_REGISTER_METHOD(0x00EC00E0, void, Awake, (VolumetricAreaLight * __this));
IL2CPP_REGISTER_METHOD(0x00EC01D0, void, OnEnable, (VolumetricAreaLight * __this));
IL2CPP_REGISTER_METHOD(0x00EC0370, void, OnDisable, (VolumetricAreaLight * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (VolumetricAreaLight * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (VolumetricAreaLight * __this));
IL2CPP_REGISTER_METHOD(0x00EC04C0, void, __ctor, (VolumetricAreaLight * __this));
}
