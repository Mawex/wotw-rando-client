#include <interception_macros.h>

namespace app::methods::UnityEngine::Joint {
IL2CPP_REGISTER_METHOD(0x030A2DB0, Rigidbody *, get_connectedBody, (Joint * __this));
IL2CPP_REGISTER_METHOD(0x030A2E00, void, set_connectedBody, (Joint * __this, Rigidbody * value));
IL2CPP_REGISTER_METHOD(0x030A2E60, Vector3, get_axis, (Joint * __this));
IL2CPP_REGISTER_METHOD(0x030A2EE0, void, set_axis, (Joint * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x030A2F40, Vector3, get_anchor, (Joint * __this));
IL2CPP_REGISTER_METHOD(0x030A2FC0, void, set_anchor, (Joint * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x030A3020, Vector3, get_connectedAnchor, (Joint * __this));
IL2CPP_REGISTER_METHOD(0x030A30A0, void, set_connectedAnchor, (Joint * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x030A3100, bool, get_autoConfigureConnectedAnchor, (Joint * __this));
IL2CPP_REGISTER_METHOD(0x030A3150, void, set_autoConfigureConnectedAnchor, (Joint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x030A31B0, float, get_breakForce, (Joint * __this));
IL2CPP_REGISTER_METHOD(0x030A3200, void, set_breakForce, (Joint * __this, float value));
IL2CPP_REGISTER_METHOD(0x030A3260, float, get_breakTorque, (Joint * __this));
IL2CPP_REGISTER_METHOD(0x030A32B0, void, set_breakTorque, (Joint * __this, float value));
IL2CPP_REGISTER_METHOD(0x030A3310, bool, get_enableCollision, (Joint * __this));
IL2CPP_REGISTER_METHOD(0x030A3360, void, set_enableCollision, (Joint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x030A33C0, bool, get_enablePreprocessing, (Joint * __this));
IL2CPP_REGISTER_METHOD(0x030A3410, void, set_enablePreprocessing, (Joint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x030A3470, void, set_massScale, (Joint * __this, float value));
IL2CPP_REGISTER_METHOD(0x030A34D0, void, get_axis_Injected, (Joint * __this, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x030A3530, void, set_axis_Injected, (Joint * __this, Vector3 * value));
IL2CPP_REGISTER_METHOD(0x030A3590, void, get_anchor_Injected, (Joint * __this, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x030A35F0, void, set_anchor_Injected, (Joint * __this, Vector3 * value));
IL2CPP_REGISTER_METHOD(0x030A3650, void, get_connectedAnchor_Injected, (Joint * __this, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x030A36B0, void, set_connectedAnchor_Injected, (Joint * __this, Vector3 * value));
}
