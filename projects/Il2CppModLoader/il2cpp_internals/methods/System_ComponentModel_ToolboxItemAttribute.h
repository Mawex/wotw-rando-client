#include <interception_macros.h>

namespace app::methods::System_ComponentModel::ToolboxItemAttribute {
IL2CPP_REGISTER_METHOD(0x029ADF90, bool, IsDefaultAttribute, (app::ToolboxItemAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x029AE050, void, __ctor_1, (app::ToolboxItemAttribute * this_ptr, bool default_type));
IL2CPP_REGISTER_METHOD(0x029AE0E0, void, __ctor_2, (app::ToolboxItemAttribute * this_ptr, app::String * toolbox_item_type_name));
IL2CPP_REGISTER_METHOD(0x029AE1B0, void, __ctor_3, (app::ToolboxItemAttribute * this_ptr, app::Type * toolbox_item_type));
IL2CPP_REGISTER_METHOD(0x029AE1F0, Type *, get_ToolboxItemType, (app::ToolboxItemAttribute * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473CAE8, ToolboxItemAttribute_get_ToolboxItemType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029AE390, String *, get_ToolboxItemTypeName, (app::ToolboxItemAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x029AE420, bool, Equals, (app::ToolboxItemAttribute * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x029AE550, int32_t, GetHashCode, (app::ToolboxItemAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x029AE580, void, __cctor, ());
}
