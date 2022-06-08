using namespace app;

namespace app::methods::System::ComponentModel::DataObjectFieldAttribute {
IL2CPP_REGISTER_METHOD(0x01FDE6D0, void, __ctor, (DataObjectFieldAttribute * __this, bool primaryKey));
IL2CPP_REGISTER_METHOD(0x01FDE6F0, void, __ctor, (DataObjectFieldAttribute * __this, bool primaryKey, bool isIdentity));
IL2CPP_REGISTER_METHOD(0x01FDE710, void, __ctor, (DataObjectFieldAttribute * __this, bool primaryKey, bool isIdentity, bool isNullable));
IL2CPP_REGISTER_METHOD(0x01FDE730, void, __ctor, (DataObjectFieldAttribute * __this, bool primaryKey, bool isIdentity, bool isNullable, int32_t length));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_IsIdentity, (DataObjectFieldAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01BFB750, bool, get_IsNullable, (DataObjectFieldAttribute * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Length, (DataObjectFieldAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_PrimaryKey, (DataObjectFieldAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FDE750, bool, Equals, (DataObjectFieldAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (DataObjectFieldAttribute * __this));
}
