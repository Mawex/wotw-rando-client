using namespace app;

namespace app::methods::System::ComponentModel::ReflectTypeDescriptionProvider {
IL2CPP_REGISTER_METHOD(0x029A1850, Guid, get_ExtenderProviderKey, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ReflectTypeDescriptionProvider * __this));
IL2CPP_REGISTER_METHOD(0x029A1900, Hashtable *, get_IntrinsicTypeConverters, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x029A2100, void, AddEditorTable, (Type * editorBaseType, Hashtable * table));
IL2CPP_REGISTER_METHODINFO(0x04723CB0, ReflectTypeDescriptionProvider_AddEditorTable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029A24E0, Object *, CreateInstance, (ReflectTypeDescriptionProvider * __this, IServiceProvider * provider, Type * objectType, Type__Array * argTypes, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x029A2750, Object *, CreateInstance, (Type * objectType, Type * callingType));
IL2CPP_REGISTER_METHOD(0x029A28F0, AttributeCollection *, GetAttributes, (ReflectTypeDescriptionProvider * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x029A2920, IDictionary *, GetCache, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A2BF0, String *, GetClassName, (ReflectTypeDescriptionProvider * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x029A2C30, String *, GetComponentName, (ReflectTypeDescriptionProvider * __this, Type * type, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A2D30, TypeConverter *, GetConverter, (ReflectTypeDescriptionProvider * __this, Type * type, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A2D70, EventDescriptor_1 *, GetDefaultEvent, (ReflectTypeDescriptionProvider * __this, Type * type, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A2DB0, PropertyDescriptor *, GetDefaultProperty, (ReflectTypeDescriptionProvider * __this, Type * type, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A2DF0, Object *, GetEditor, (ReflectTypeDescriptionProvider * __this, Type * type, Object * instance, Type * editorBaseType));
IL2CPP_REGISTER_METHOD(0x029A2E40, Hashtable *, GetEditorTable, (Type * editorBaseType));
IL2CPP_REGISTER_METHOD(0x029A3560, EventDescriptorCollection *, GetEvents, (ReflectTypeDescriptionProvider * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x029A3590, AttributeCollection *, GetExtendedAttributes, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A3630, String *, GetExtendedClassName, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A36A0, String *, GetExtendedComponentName, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A36F0, TypeConverter *, GetExtendedConverter, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x00420EE0, EventDescriptor_1 *, GetExtendedDefaultEvent, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x00420EE0, PropertyDescriptor *, GetExtendedDefaultProperty, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A3750, Object *, GetExtendedEditor, (ReflectTypeDescriptionProvider * __this, Object * instance, Type * editorBaseType));
IL2CPP_REGISTER_METHOD(0x029A37C0, EventDescriptorCollection *, GetExtendedEvents, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A3860, PropertyDescriptorCollection *, GetExtendedProperties, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A3EC0, IExtenderProvider__Array *, GetExtenderProviders, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHODINFO(0x047809F8, ReflectTypeDescriptionProvider_GetExtenderProviders__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029A4160, IExtenderProvider__Array *, GetExtenders, (ICollection * components, Object * instance, IDictionary * cache));
IL2CPP_REGISTER_METHOD(0x029A49F0, Object *, GetExtendedPropertyOwner, (ReflectTypeDescriptionProvider * __this, Object * instance, PropertyDescriptor * pd));
IL2CPP_REGISTER_METHOD(0x00420EE0, ICustomTypeDescriptor *, GetExtendedTypeDescriptor, (ReflectTypeDescriptionProvider * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A4A50, String *, GetFullComponentName, (ReflectTypeDescriptionProvider * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x029A4C60, Type__Array *, GetPopulatedTypes, (ReflectTypeDescriptionProvider * __this, Module * module));
IL2CPP_REGISTER_METHOD(0x029A5100, PropertyDescriptorCollection *, GetProperties, (ReflectTypeDescriptionProvider * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x029A5130, Object *, GetPropertyOwner, (ReflectTypeDescriptionProvider * __this, Type * type, Object * instance, PropertyDescriptor * pd));
IL2CPP_REGISTER_METHOD(0x00502220, Type *, GetReflectionType, (ReflectTypeDescriptionProvider * __this, Type * objectType, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A51E0, ReflectTypeDescriptionProvider_ReflectedTypeData *, GetTypeData, (ReflectTypeDescriptionProvider * __this, Type * type, bool createIfNeeded));
IL2CPP_REGISTER_METHOD(0x00420EE0, ICustomTypeDescriptor *, GetTypeDescriptor, (ReflectTypeDescriptionProvider * __this, Type * objectType, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A5610, Type *, GetTypeFromName, (String * typeName));
IL2CPP_REGISTER_METHOD(0x029A5770, bool, IsPopulated, (ReflectTypeDescriptionProvider * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x029A57C0, Attribute__Array *, ReflectGetAttributes, (Type * type));
IL2CPP_REGISTER_METHOD(0x029A5E10, Attribute__Array *, ReflectGetAttributes, (MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x029A6460, EventDescriptor_1__Array *, ReflectGetEvents, (Type * type));
IL2CPP_REGISTER_METHOD(0x029A6DB0, PropertyDescriptor__Array *, ReflectGetExtendedProperties, (IExtenderProvider * provider));
IL2CPP_REGISTER_METHOD(0x029A7D90, PropertyDescriptor__Array *, ReflectGetProperties, (Type * type));
IL2CPP_REGISTER_METHOD(0x029A8640, void, Refresh, (ReflectTypeDescriptionProvider * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x029A8680, Object *, SearchIntrinsicTable, (Hashtable * table, Type * callingType));
IL2CPP_REGISTER_METHOD(0x029A8EA0, void, __cctor, (MethodInfo * method));
}
