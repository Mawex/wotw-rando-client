using namespace app;

namespace app::methods::Moon::AxisAlignedBox {
IL2CPP_REGISTER_METHOD(0x00CB5430, void, __ctor, (AxisAlignedBox * __this));
IL2CPP_REGISTER_METHOD(0x00CB5480, void, __ctor, (AxisAlignedBox * __this, float size));
IL2CPP_REGISTER_METHOD(0x00CB5620, void, __ctor, (AxisAlignedBox * __this, AxisAlignedBox * boxToCopy));
IL2CPP_REGISTER_METHOD(0x00CB56A0, Vector3, get_Size, (AxisAlignedBox * __this));
IL2CPP_REGISTER_METHOD(0x00CB57A0, Vector3, get_Center, (AxisAlignedBox * __this));
IL2CPP_REGISTER_METHOD(0x00CB58C0, void, set_Center, (AxisAlignedBox * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00CB5A20, bool, Equals, (AxisAlignedBox * __this, AxisAlignedBox * other));
IL2CPP_REGISTER_METHOD(0x00CB5A90, bool, Equals, (AxisAlignedBox * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00CB5BE0, int32_t, GetHashCode, (AxisAlignedBox * __this));
}
