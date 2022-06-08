using namespace app;

namespace app::methods::PositionStateModifier {
IL2CPP_REGISTER_METHOD(0x01B781A0, Vector3, get_Position, (PositionStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B78260, void, set_Position, (PositionStateModifier * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01B78340, void, Apply, (PositionStateModifier * __this, MoonReference_1_UnityEngine_GameObject_ * target, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B78580, void, __ctor, (PositionStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B78670, void, OnTargetChange, (PositionStateModifier * __this, GameObject * oldTarget, GameObject * newTarget));
IL2CPP_REGISTER_METHOD(0x01B78770, void, CaptureCurrentTargetState, (PositionStateModifier * __this, GameObject * target));
}
