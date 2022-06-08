using namespace app;

namespace app::methods::System::ComponentModel::ToolboxItemAttribute {
IL2CPP_REGISTER_METHOD(0x029ADF90, bool, IsDefaultAttribute, (ToolboxItemAttribute * __this));
IL2CPP_REGISTER_METHOD(0x029AE050, void, __ctor, (ToolboxItemAttribute * __this, bool defaultType));
IL2CPP_REGISTER_METHOD(0x029AE0E0, void, __ctor, (ToolboxItemAttribute * __this, String * toolboxItemTypeName));
IL2CPP_REGISTER_METHOD(0x029AE1B0, void, __ctor, (ToolboxItemAttribute * __this, Type * toolboxItemType));
IL2CPP_REGISTER_METHOD(0x029AE1F0, Type *, get_ToolboxItemType, (ToolboxItemAttribute * __this));
IL2CPP_REGISTER_METHODINFO(0x0473CAE8, ToolboxItemAttribute_get_ToolboxItemType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029AE390, String *, get_ToolboxItemTypeName, (ToolboxItemAttribute * __this));
IL2CPP_REGISTER_METHOD(0x029AE420, bool, Equals, (ToolboxItemAttribute * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x029AE550, int32_t, GetHashCode, (ToolboxItemAttribute * __this));
IL2CPP_REGISTER_METHOD(0x029AE580, void, __cctor, (MethodInfo * method));
}
