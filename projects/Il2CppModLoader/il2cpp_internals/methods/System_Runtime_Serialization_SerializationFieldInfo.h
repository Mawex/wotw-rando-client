using namespace app;

namespace app::methods::System::Runtime::Serialization::SerializationFieldInfo {
IL2CPP_REGISTER_METHOD(0x017171B0, Module *, get_Module, (SerializationFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x01717180, int32_t, get_MetadataToken, (SerializationFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x01EDE320, void, __ctor, (SerializationFieldInfo * __this, RuntimeFieldInfo * field, String * namePrefix));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (SerializationFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x01717090, Type *, get_DeclaringType, (SerializationFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x00442880, Type *, get_ReflectedType, (SerializationFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x01EDE3F0, Object__Array *, GetCustomAttributes, (SerializationFieldInfo * __this, bool inherit));
IL2CPP_REGISTER_METHOD(0x01EDE420, Object__Array *, GetCustomAttributes, (SerializationFieldInfo * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x01EDE450, bool, IsDefined, (SerializationFieldInfo * __this, Type * attributeType, bool inherit));
IL2CPP_REGISTER_METHOD(0x01EDE480, Type *, get_FieldType, (SerializationFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x01852620, Object *, GetValue, (SerializationFieldInfo * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01EDE4B0, Object *, InternalGetValue, (SerializationFieldInfo * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01EDE5F0, void, SetValue, (SerializationFieldInfo * __this, Object * obj, Object * value, BindingFlags__Enum invokeAttr, Binder * binder, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x01EDE620, void, InternalSetValue, (SerializationFieldInfo * __this, Object * obj, Object * value, BindingFlags__Enum invokeAttr, Binder * binder, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x002FA280, RuntimeFieldInfo *, get_FieldInfo, (SerializationFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x01717210, RuntimeFieldHandle, get_FieldHandle, (SerializationFieldInfo * __this));
IL2CPP_REGISTER_METHOD(0x017171E0, FieldAttributes__Enum, get_Attributes, (SerializationFieldInfo * __this));
}
