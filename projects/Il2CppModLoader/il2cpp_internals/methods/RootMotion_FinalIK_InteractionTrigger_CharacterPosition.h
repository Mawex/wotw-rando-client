using namespace app;

namespace app::methods::RootMotion::FinalIK::InteractionTrigger_CharacterPosition {
IL2CPP_REGISTER_METHOD(0x02A16B70, Vector3, get_offset3D, (InteractionTrigger_CharacterPosition * __this));
IL2CPP_REGISTER_METHOD(0x02A16B90, Vector3, get_direction3D, (InteractionTrigger_CharacterPosition * __this));
IL2CPP_REGISTER_METHOD(0x02A16CF0, bool, IsInRange, (InteractionTrigger_CharacterPosition * __this, Transform * character, Transform * trigger, float * error));
IL2CPP_REGISTER_METHOD(0x02A176C0, void, __ctor, (InteractionTrigger_CharacterPosition * __this));
}
