using namespace app;

namespace app::methods::ScaleStateModifier {
IL2CPP_REGISTER_METHOD(0x01B7A5D0, Vector3, get_Scale, (ScaleStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B7A690, void, set_Scale, (ScaleStateModifier * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01B7A770, void, Apply, (ScaleStateModifier * __this, MoonReference_1_UnityEngine_GameObject_ * target, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B7A9A0, void, __ctor, (ScaleStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B7AA90, void, OnTargetChange, (ScaleStateModifier * __this, GameObject * oldTarget, GameObject * newTarget));
IL2CPP_REGISTER_METHOD(0x01B7AB90, void, CaptureCurrentTargetState, (ScaleStateModifier * __this, GameObject * target));
}
