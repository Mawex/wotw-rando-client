using namespace app;

namespace app::methods::AsyncRaycast {
IL2CPP_REGISTER_METHOD(0x00842A00, void, __ctor, (AsyncRaycast * __this));
IL2CPP_REGISTER_METHOD(0x00842A40, void, Dispose, (AsyncRaycast * __this));
IL2CPP_REGISTER_METHOD(0x00842A80, void, RequestCast, (AsyncRaycast * __this, Vector3 from, Vector3 to, LayerMask mask));
IL2CPP_REGISTER_METHOD(0x00842CC0, void, Cancel, (AsyncRaycast * __this));
}
