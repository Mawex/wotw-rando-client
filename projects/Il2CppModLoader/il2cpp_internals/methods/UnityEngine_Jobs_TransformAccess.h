#include <interception_macros.h>

namespace app::methods::UnityEngine::Jobs::TransformAccess {
IL2CPP_REGISTER_METHOD(0x001F2360, Vector3, get_position, (TransformAccess__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F23F0, void, set_position, (TransformAccess__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001F2460, Quaternion, get_rotation, (TransformAccess__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F24E0, void, set_rotation, (TransformAccess__Boxed * __this, Quaternion value));
IL2CPP_REGISTER_METHOD(0x001F2540, Vector3, get_localScale, (TransformAccess__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F25D0, void, set_localScale, (TransformAccess__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001F2640, Vector3, get_up, (TransformAccess__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0252DD40, void, GetPosition, (TransformAccess * access, Vector3 * p));
IL2CPP_REGISTER_METHOD(0x0252DDA0, void, SetPosition, (TransformAccess * access, Vector3 * p));
IL2CPP_REGISTER_METHOD(0x0252DE00, void, GetRotation, (TransformAccess * access, Quaternion * r));
IL2CPP_REGISTER_METHOD(0x0252DE60, void, SetRotation, (TransformAccess * access, Quaternion * r));
IL2CPP_REGISTER_METHOD(0x0252DEC0, void, GetLocalScale, (TransformAccess * access, Vector3 * s));
IL2CPP_REGISTER_METHOD(0x0252DF20, void, SetLocalScale, (TransformAccess * access, Vector3 * s));
IL2CPP_REGISTER_METHOD(0x001F2670, Vector3, TransformPoint, (TransformAccess__Boxed * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x001F2710, void, SetPositionAndRotation, (TransformAccess__Boxed * __this, Vector3 position, Quaternion rotation));
IL2CPP_REGISTER_METHOD(0x0252DF80, void, TransformPoint_Injected, (TransformAccess * _unity_self, Vector3 * point, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0252DFF0, void, SetPositionAndRotation_Injected, (TransformAccess * _unity_self, Vector3 * position, Quaternion * rotation));
}
