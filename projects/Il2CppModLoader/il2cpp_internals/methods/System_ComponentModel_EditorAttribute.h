using namespace app;

namespace app::methods::System::ComponentModel::EditorAttribute {
IL2CPP_REGISTER_METHOD(0x01FE7CE0, void, __ctor, (EditorAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FE7D80, void, __ctor, (EditorAttribute * __this, String * typeName, String * baseTypeName));
IL2CPP_REGISTER_METHOD(0x01FE7DD0, void, __ctor, (EditorAttribute * __this, String * typeName, Type * baseType));
IL2CPP_REGISTER_METHOD(0x01FE7E40, void, __ctor, (EditorAttribute * __this, Type * type, Type * baseType));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_EditorBaseTypeName, (EditorAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_EditorTypeName, (EditorAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FE7EB0, Object *, get_TypeId, (EditorAttribute * __this));
IL2CPP_REGISTER_METHOD(0x01FE7F50, bool, Equals, (EditorAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (EditorAttribute * __this));
}
