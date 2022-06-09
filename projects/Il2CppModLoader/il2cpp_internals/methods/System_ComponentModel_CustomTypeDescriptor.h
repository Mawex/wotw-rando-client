#include <interception_macros.h>

namespace app::methods::System_ComponentModel::CustomTypeDescriptor {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::CustomTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor_2, (app::CustomTypeDescriptor * this_ptr, app::ICustomTypeDescriptor * parent));
IL2CPP_REGISTER_METHOD(0x01FDD960, AttributeCollection *, GetAttributes, (app::CustomTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDDA20, String *, GetClassName, (app::CustomTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDDAC0, String *, GetComponentName, (app::CustomTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDDB60, TypeConverter *, GetConverter, (app::CustomTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDDCC0, EventDescriptor_1 *, GetDefaultEvent, (app::CustomTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDDD50, PropertyDescriptor *, GetDefaultProperty, (app::CustomTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDDDE0, Object *, GetEditor, (app::CustomTypeDescriptor * this_ptr, app::Type * editor_base_type));
IL2CPP_REGISTER_METHOD(0x01FDDE90, EventDescriptorCollection *, GetEvents_1, (app::CustomTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDDF50, EventDescriptorCollection *, GetEvents_2, (app::CustomTypeDescriptor * this_ptr, app::Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x01FDE020, PropertyDescriptorCollection *, GetProperties_1, (app::CustomTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01FDE0E0, PropertyDescriptorCollection *, GetProperties_2, (app::CustomTypeDescriptor * this_ptr, app::Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x01FDE1B0, Object *, GetPropertyOwner, (app::CustomTypeDescriptor * this_ptr, app::PropertyDescriptor * pd));
}
