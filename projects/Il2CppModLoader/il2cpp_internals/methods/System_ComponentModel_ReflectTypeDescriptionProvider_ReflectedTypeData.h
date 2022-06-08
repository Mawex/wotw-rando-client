using namespace app;

namespace app::methods::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x029A94D0, bool, get_IsPopulated, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this));
IL2CPP_REGISTER_METHOD(0x029A9500, AttributeCollection *, GetAttributes, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this));
IL2CPP_REGISTER_METHOD(0x01717360, String *, GetClassName, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A9C80, String *, GetComponentName, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029A9D60, TypeConverter *, GetConverter, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029AA1F0, EventDescriptor_1 *, GetDefaultEvent, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029AA480, PropertyDescriptor *, GetDefaultProperty, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029AA680, Object *, GetEditor, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this, Object * instance, Type * editorBaseType));
IL2CPP_REGISTER_METHOD(0x029AAD10, EditorAttribute *, GetEditorAttribute, (AttributeCollection * attributes, Type * editorBaseType));
IL2CPP_REGISTER_METHOD(0x029AAFE0, EventDescriptorCollection *, GetEvents, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this));
IL2CPP_REGISTER_METHOD(0x029AB4C0, PropertyDescriptorCollection *, GetProperties, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this));
IL2CPP_REGISTER_METHOD(0x029AB9A0, Type *, GetTypeFromName, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this, String * typeName));
IL2CPP_REGISTER_METHOD(0x029ABBB0, void, Refresh, (ReflectTypeDescriptionProvider_ReflectedTypeData * __this));
}
