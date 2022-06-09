#include <interception_macros.h>

namespace app::methods::RootMotion_FinalIK::InteractionTrigger_CharacterPosition {
IL2CPP_REGISTER_METHOD(0x02A16B70, Vector3, get_offset3D, (app::InteractionTrigger_CharacterPosition * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A16B90, Vector3, get_direction3D, (app::InteractionTrigger_CharacterPosition * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A16CF0, bool, IsInRange, (app::InteractionTrigger_CharacterPosition * this_ptr, app::Transform * character, app::Transform * trigger, app::float * error));
IL2CPP_REGISTER_METHOD(0x02A176C0, void, __ctor, (app::InteractionTrigger_CharacterPosition * this_ptr));
}
