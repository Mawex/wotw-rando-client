#include <interception_macros.h>

namespace app::methods::HeatUpPlatform {
IL2CPP_REGISTER_METHOD(0x010A2630, void, Awake, (HeatUpPlatform * __this));
IL2CPP_REGISTER_METHOD(0x010A26A0, void, Start, (HeatUpPlatform * __this));
IL2CPP_REGISTER_METHOD(0x010A26B0, void, OnCollisionEnter, (HeatUpPlatform * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x010A26B0, void, OnCollisionStay, (HeatUpPlatform * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x010A26C0, void, OnCollision, (HeatUpPlatform * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x010A2B30, void, FixedUpdate, (HeatUpPlatform * __this));
IL2CPP_REGISTER_METHOD(0x010A2B50, void, Trigger, (HeatUpPlatform * __this));
IL2CPP_REGISTER_METHOD(0x010A2B60, void, ChangeState, (HeatUpPlatform * __this, HeatUpPlatform_State__Enum state));
IL2CPP_REGISTER_METHOD(0x010A2B70, void, UpdateState, (HeatUpPlatform * __this));
IL2CPP_REGISTER_METHOD(0x010A2F60, void, UpdateMaterial, (HeatUpPlatform * __this));
IL2CPP_REGISTER_METHOD(0x010A3140, void, Serialize, (HeatUpPlatform * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x005A4CC0, void, __ctor, (HeatUpPlatform * __this));
}
