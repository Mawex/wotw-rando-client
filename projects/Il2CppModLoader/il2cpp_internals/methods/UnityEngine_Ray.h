using namespace app;

namespace app::methods::UnityEngine::Ray {
IL2CPP_REGISTER_METHOD(0x00217910, void, __ctor, (Ray__Boxed * __this, Vector3 origin, Vector3 direction));
IL2CPP_REGISTER_METHOD(0x001EB5F0, Vector3, get_origin, (Ray__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001EB610, void, set_origin, (Ray__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x001EB680, Vector3, get_direction, (Ray__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002179F0, void, set_direction, (Ray__Boxed * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00217AC0, Vector3, GetPoint, (Ray__Boxed * __this, float distance));
IL2CPP_REGISTER_METHOD(0x00217AF0, String *, ToString, (Ray__Boxed * __this));
}
