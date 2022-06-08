using namespace app;

namespace app::methods::RootMotion::FinalIK::InteractionTrigger_CameraPosition {
IL2CPP_REGISTER_METHOD(0x02A163D0, Quaternion, GetRotation, (InteractionTrigger_CameraPosition * __this));
IL2CPP_REGISTER_METHOD(0x02A16750, bool, IsInRange, (InteractionTrigger_CameraPosition * __this, Transform * raycastFrom, RaycastHit hit, Transform * trigger, float * error));
IL2CPP_REGISTER_METHOD(0x02A16A80, void, __ctor, (InteractionTrigger_CameraPosition * __this));
}
