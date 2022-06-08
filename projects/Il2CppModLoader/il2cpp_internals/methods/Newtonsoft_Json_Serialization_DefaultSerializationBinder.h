using namespace app;

namespace app::methods::Newtonsoft::Json::Serialization::DefaultSerializationBinder {
IL2CPP_REGISTER_METHOD(0x0186AAF0, void, __ctor, (DefaultSerializationBinder * __this));
IL2CPP_REGISTER_METHOD(0x0186AD20, Type *, GetTypeFromTypeNameKey, (DefaultSerializationBinder * __this, StructMultiKey_2_System_String_System_String_ typeNameKey));
IL2CPP_REGISTER_METHODINFO(0x04715558, DefaultSerializationBinder_GetTypeFromTypeNameKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0186B290, Type *, GetGenericTypeFromTypeName, (DefaultSerializationBinder * __this, String * typeName, Assembly * assembly));
IL2CPP_REGISTER_METHOD(0x0186B5A0, Type *, GetTypeByName, (DefaultSerializationBinder * __this, StructMultiKey_2_System_String_System_String_ typeNameKey));
IL2CPP_REGISTER_METHOD(0x0186B670, Type *, BindToType, (DefaultSerializationBinder * __this, String * assemblyName, String * typeName));
IL2CPP_REGISTER_METHOD(0x0186B720, void, BindToName, (DefaultSerializationBinder * __this, Type * serializedType, String * * assemblyName, String * * typeName));
IL2CPP_REGISTER_METHOD(0x0186B7A0, void, __cctor, (MethodInfo * method));
}
