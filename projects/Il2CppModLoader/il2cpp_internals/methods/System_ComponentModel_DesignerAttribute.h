#include <interception_macros.h>

namespace app::methods::System_ComponentModel::DesignerAttribute {
IL2CPP_REGISTER_METHOD(0x01FE6280, void, __ctor_1, (app::DesignerAttribute * this_ptr, app::String * designer_type_name));
IL2CPP_REGISTER_METHOD(0x01FE63A0, void, __ctor_2, (app::DesignerAttribute * this_ptr, app::Type * designer_type));
IL2CPP_REGISTER_METHOD(0x01FE64A0, void, __ctor_3, (app::DesignerAttribute * this_ptr, app::String * designer_type_name, app::String * designer_base_type_name));
IL2CPP_REGISTER_METHOD(0x01FE6570, void, __ctor_4, (app::DesignerAttribute * this_ptr, app::String * designer_type_name, app::Type * designer_base_type));
IL2CPP_REGISTER_METHOD(0x01FE6660, void, __ctor_5, (app::DesignerAttribute * this_ptr, app::Type * designer_type, app::Type * designer_base_type));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_DesignerBaseTypeName, (app::DesignerAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_DesignerTypeName, (app::DesignerAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE4CC0, Object *, get_TypeId, (app::DesignerAttribute * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FE66D0, bool, Equals, (app::DesignerAttribute * this_ptr, app::Object * obj));
IL2CPP_REGISTER_METHOD(0x01FE67F0, int32_t, GetHashCode, (app::DesignerAttribute * this_ptr));
}
