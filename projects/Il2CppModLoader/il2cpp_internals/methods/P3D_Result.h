#include <interception_macros.h>

namespace app::methods::P3D_Result {
IL2CPP_REGISTER_METHOD(0x03096DF0, P3D_Result *, Spawn, ());
IL2CPP_REGISTER_METHOD(0x03096FE0, P3D_Result *, Despawn, (P3D_Result * result));
IL2CPP_REGISTER_METHOD(0x030970A0, Vector2, get_UV1, (P3D_Result * __this));
IL2CPP_REGISTER_METHOD(0x030971D0, Vector2, get_UV2, (P3D_Result * __this));
IL2CPP_REGISTER_METHOD(0x03097300, Vector2, get_Point, (P3D_Result * __this));
IL2CPP_REGISTER_METHOD(0x03097450, Vector3, get_Point3, (P3D_Result * __this));
IL2CPP_REGISTER_METHOD(0x03097600, Vector2, GetUV, (P3D_Result * __this, P3D_CoordType__Enum coord));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (P3D_Result * __this));
IL2CPP_REGISTER_METHOD(0x03097850, void, __cctor, ());
}
