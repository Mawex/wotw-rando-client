using namespace app;

namespace app::methods::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (TypeDescriptor_MergedTypeDescriptor * __this, ICustomTypeDescriptor * primary, ICustomTypeDescriptor * secondary));
IL2CPP_REGISTER_METHOD(0x029574D0, AttributeCollection *, ICustomTypeDescriptor_GetAttributes, (TypeDescriptor_MergedTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02957580, String *, ICustomTypeDescriptor_GetClassName, (TypeDescriptor_MergedTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02957640, String *, ICustomTypeDescriptor_GetComponentName, (TypeDescriptor_MergedTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02957700, TypeConverter *, ICustomTypeDescriptor_GetConverter, (TypeDescriptor_MergedTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x029577B0, EventDescriptor_1 *, ICustomTypeDescriptor_GetDefaultEvent, (TypeDescriptor_MergedTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02957860, PropertyDescriptor *, ICustomTypeDescriptor_GetDefaultProperty, (TypeDescriptor_MergedTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02957910, Object *, ICustomTypeDescriptor_GetEditor, (TypeDescriptor_MergedTypeDescriptor * __this, Type * editorBaseType));
IL2CPP_REGISTER_METHODINFO(0x047322B8, TypeDescriptor_MergedTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetEditor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02957A30, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents, (TypeDescriptor_MergedTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02957AE0, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents, (TypeDescriptor_MergedTypeDescriptor * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x02957BA0, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties, (TypeDescriptor_MergedTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02957C50, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties, (TypeDescriptor_MergedTypeDescriptor * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x02957D10, Object *, ICustomTypeDescriptor_GetPropertyOwner, (TypeDescriptor_MergedTypeDescriptor * __this, PropertyDescriptor * pd));
}
