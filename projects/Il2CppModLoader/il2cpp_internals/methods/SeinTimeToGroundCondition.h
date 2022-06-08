#include <interception_macros.h>

namespace app::methods::SeinTimeToGroundCondition {
IL2CPP_REGISTER_METHOD(0x00A9E010, bool, Validate, (SeinTimeToGroundCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00A9E0D0, bool, IsValid, (SeinTimeToGroundCondition_Characters__Enum characterToCheck, float anticipationTime));
IL2CPP_REGISTER_METHOD(0x00A9E2A0, bool, IsAnticipatingLanding, (CharacterPlatformMovement * platformMovement, float anticipationTime));
IL2CPP_REGISTER_METHOD(0x00A9E5F0, bool, CheckOri, (float anticipationTime));
IL2CPP_REGISTER_METHOD(0x00A9E8A0, bool, CheckKu, (float anticipationTime));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (SeinTimeToGroundCondition * __this));
}
