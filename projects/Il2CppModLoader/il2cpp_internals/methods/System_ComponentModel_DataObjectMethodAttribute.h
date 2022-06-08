using namespace app;

namespace app::methods::System::ComponentModel::DataObjectMethodAttribute {
IL2CPP_REGISTER_METHOD(0x01FDE850, void, __ctor, (DataObjectMethodAttribute * __this, DataObjectMethodType__Enum methodType));
IL2CPP_REGISTER_METHOD(0x01FDE860, void, __ctor, (DataObjectMethodAttribute * __this, DataObjectMethodType__Enum methodType, bool isDefault));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDefault, (DataObjectMethodAttribute * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, DataObjectMethodType__Enum, get_MethodType, (DataObjectMethodAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FDE870, bool, Equals, (DataObjectMethodAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01FDE950, int32_t, GetHashCode, (DataObjectMethodAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FDE960, bool, Match, (DataObjectMethodAttribute * __this, Object * obj));
}
