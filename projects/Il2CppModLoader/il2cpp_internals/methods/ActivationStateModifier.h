using namespace app;

namespace app::methods::ActivationStateModifier {
IL2CPP_REGISTER_METHOD(0x01B54A20, bool, get_Active, (ActivationStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B54B70, void, set_Active, (ActivationStateModifier * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01B54CF0, void, Apply, (ActivationStateModifier * __this, MoonReference_1_UnityEngine_GameObject_ * target, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B54F60, void, __ctor, (ActivationStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B55070, void, CaptureCurrentTargetState, (ActivationStateModifier * __this, GameObject * target));
}
