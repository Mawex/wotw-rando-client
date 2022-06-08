#include <interception_macros.h>

namespace app::methods::P3D_Triangle {
IL2CPP_REGISTER_METHOD(0x0309C9B0, P3D_Triangle *, Spawn, ());
IL2CPP_REGISTER_METHOD(0x0309CBA0, P3D_Triangle *, Despawn, (P3D_Triangle * triangle));
IL2CPP_REGISTER_METHOD(0x0309CC60, Vector3, get_Edge1, (P3D_Triangle * __this));
IL2CPP_REGISTER_METHOD(0x0309CD60, Vector3, get_Edge2, (P3D_Triangle * __this));
IL2CPP_REGISTER_METHOD(0x0309CE60, Vector3, get_Min, (P3D_Triangle * __this));
IL2CPP_REGISTER_METHOD(0x0309D0B0, Vector3, get_Max, (P3D_Triangle * __this));
IL2CPP_REGISTER_METHOD(0x0309D300, float, get_MidX, (P3D_Triangle * __this));
IL2CPP_REGISTER_METHOD(0x0309D320, float, get_MidY, (P3D_Triangle * __this));
IL2CPP_REGISTER_METHOD(0x0309D340, float, get_MidZ, (P3D_Triangle * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (P3D_Triangle * __this));
IL2CPP_REGISTER_METHOD(0x0309D360, void, __cctor, ());
}
