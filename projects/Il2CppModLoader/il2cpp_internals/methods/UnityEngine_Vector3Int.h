#include <interception_macros.h>

namespace app::methods::UnityEngine::Vector3Int {
IL2CPP_REGISTER_METHOD(0x0013D2C0, void, __ctor, (Vector3Int__Boxed * __this, int32_t x, int32_t y, int32_t z));
IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_x, (Vector3Int__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_x, (Vector3Int__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00218130, int32_t, get_y, (Vector3Int__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00113CF0, void, set_y, (Vector3Int__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_z, (Vector3Int__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00127510, void, set_z, (Vector3Int__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02C77F50, Vector3Int, operator__, (Vector3Int a, Vector3Int b));
IL2CPP_REGISTER_METHOD(0x02C77F90, bool, operator___, (Vector3Int lhs, Vector3Int rhs));
IL2CPP_REGISTER_METHOD(0x002296F0, bool, Equals, (Vector3Int__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x002297E0, bool, Equals, (Vector3Int__Boxed * __this, Vector3Int other));
IL2CPP_REGISTER_METHOD(0x00229810, int32_t, GetHashCode, (Vector3Int__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00229840, String *, ToString, (Vector3Int__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02C782B0, void, __cctor, ());
}
