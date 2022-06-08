#include <interception_macros.h>

namespace app::methods::Moon::Wwise::AudioEmitterZone {
IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_Version, (AudioEmitterZone * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Version, (AudioEmitterZone * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsActive, (AudioEmitterZone * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsActive, (AudioEmitterZone * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02709650, String *, get_GizmoText, (AudioEmitterZone * __this));
IL2CPP_REGISTER_METHOD(0x027096E0, void, OnEnable, (AudioEmitterZone * __this));
IL2CPP_REGISTER_METHOD(0x00447380, void, OnDisable, (AudioEmitterZone * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (AudioEmitterZone * __this));
}
