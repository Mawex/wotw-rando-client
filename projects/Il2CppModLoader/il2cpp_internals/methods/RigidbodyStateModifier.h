#include <interception_macros.h>

namespace app::methods::RigidbodyStateModifier {
IL2CPP_REGISTER_METHOD(0x01B789A0, Vector3, get_Position, (RigidbodyStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B78A60, void, set_Position, (RigidbodyStateModifier * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01B78B40, Vector3, get_RotationEuler, (RigidbodyStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B78C00, void, set_RotationEuler, (RigidbodyStateModifier * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01B78CE0, Quaternion, get_RotationQuaternion, (RigidbodyStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B78DE0, void, set_RotationQuaternion, (RigidbodyStateModifier * __this, Quaternion value));
IL2CPP_REGISTER_METHOD(0x01B78ED0, float, get_RotationEulerZ, (RigidbodyStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B78F70, void, set_RotationEulerZ, (RigidbodyStateModifier * __this, float value));
IL2CPP_REGISTER_METHOD(0x01B79070, void, Apply, (RigidbodyStateModifier * __this, MoonReference_1_UnityEngine_GameObject_ * target, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x01B794E0, void, __ctor, (RigidbodyStateModifier * __this));
IL2CPP_REGISTER_METHOD(0x01B79600, void, CaptureCurrentTargetState, (RigidbodyStateModifier * __this, GameObject * target));
}
