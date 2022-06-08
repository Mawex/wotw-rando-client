#include <interception_macros.h>

namespace app::methods::SeinOnGroundCondition {
IL2CPP_REGISTER_METHOD(0x008AF4D0, bool, Validate, (SeinOnGroundCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008AF590, bool, IsValid, (SeinOnGroundCondition_Characters__Enum characterToCheck, bool requireGrounded, bool requireSafe));
IL2CPP_REGISTER_METHOD(0x008AF810, bool, CheckOri, (bool requireGrounded, bool requireSafe));
IL2CPP_REGISTER_METHOD(0x008AFB60, bool, CheckKu, (bool requireGrounded, bool requireSafe));
IL2CPP_REGISTER_METHOD(0x008AFCA0, bool, IsSafeTestPassed, (PlatformBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x008AFD70, void, __ctor, (SeinOnGroundCondition * __this));
}
