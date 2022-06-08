using namespace app;

namespace app::methods::System::ComponentModel::CustomTypeDescriptor {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CustomTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (CustomTypeDescriptor * __this, ICustomTypeDescriptor * parent));
IL2CPP_REGISTER_METHOD(0x01FDD960, AttributeCollection *, GetAttributes, (CustomTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FDDA20, String *, GetClassName, (CustomTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FDDAC0, String *, GetComponentName, (CustomTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FDDB60, TypeConverter *, GetConverter, (CustomTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FDDCC0, EventDescriptor_1 *, GetDefaultEvent, (CustomTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FDDD50, PropertyDescriptor *, GetDefaultProperty, (CustomTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FDDDE0, Object *, GetEditor, (CustomTypeDescriptor * __this, Type * editorBaseType));
IL2CPP_REGISTER_METHOD(0x01FDDE90, EventDescriptorCollection *, GetEvents, (CustomTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FDDF50, EventDescriptorCollection *, GetEvents, (CustomTypeDescriptor * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x01FDE020, PropertyDescriptorCollection *, GetProperties, (CustomTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01FDE0E0, PropertyDescriptorCollection *, GetProperties, (CustomTypeDescriptor * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x01FDE1B0, Object *, GetPropertyOwner, (CustomTypeDescriptor * __this, PropertyDescriptor * pd));
}
