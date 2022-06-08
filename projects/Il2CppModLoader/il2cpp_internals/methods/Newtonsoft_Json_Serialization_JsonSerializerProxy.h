#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::JsonSerializerProxy {
IL2CPP_REGISTER_METHOD(0x01BF85F0, void, add_Error, (JsonSerializerProxy * __this, EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x01BF8620, void, remove_Error, (JsonSerializerProxy * __this, EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x01BF8650, void, set_ReferenceResolver, (JsonSerializerProxy * __this, IReferenceResolver * value));
IL2CPP_REGISTER_METHOD(0x01BF8680, ITraceWriter *, get_TraceWriter, (JsonSerializerProxy * __this));
IL2CPP_REGISTER_METHOD(0x01BF86B0, void, set_TraceWriter, (JsonSerializerProxy * __this, ITraceWriter * value));
IL2CPP_REGISTER_METHOD(0x01BF86E0, void, set_EqualityComparer, (JsonSerializerProxy * __this, IEqualityComparer * value));
IL2CPP_REGISTER_METHOD(0x01BF8710, JsonConverterCollection *, get_Converters, (JsonSerializerProxy * __this));
IL2CPP_REGISTER_METHOD(0x01BF8740, void, set_DefaultValueHandling, (JsonSerializerProxy * __this, DefaultValueHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF8770, IContractResolver *, get_ContractResolver, (JsonSerializerProxy * __this));
IL2CPP_REGISTER_METHOD(0x01BF87A0, void, set_ContractResolver, (JsonSerializerProxy * __this, IContractResolver * value));
IL2CPP_REGISTER_METHOD(0x01BF87D0, void, set_MissingMemberHandling, (JsonSerializerProxy * __this, MissingMemberHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF8800, NullValueHandling__Enum, get_NullValueHandling, (JsonSerializerProxy * __this));
IL2CPP_REGISTER_METHOD(0x01BF8830, void, set_NullValueHandling, (JsonSerializerProxy * __this, NullValueHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF8860, void, set_ObjectCreationHandling, (JsonSerializerProxy * __this, ObjectCreationHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF8890, void, set_ReferenceLoopHandling, (JsonSerializerProxy * __this, ReferenceLoopHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF88C0, void, set_PreserveReferencesHandling, (JsonSerializerProxy * __this, PreserveReferencesHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF88F0, void, set_TypeNameHandling, (JsonSerializerProxy * __this, TypeNameHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF8920, MetadataPropertyHandling__Enum, get_MetadataPropertyHandling, (JsonSerializerProxy * __this));
IL2CPP_REGISTER_METHOD(0x01BF8950, void, set_MetadataPropertyHandling, (JsonSerializerProxy * __this, MetadataPropertyHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF8980, void, set_TypeNameAssemblyFormatHandling, (JsonSerializerProxy * __this, TypeNameAssemblyFormatHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF89B0, void, set_ConstructorHandling, (JsonSerializerProxy * __this, ConstructorHandling__Enum value));
IL2CPP_REGISTER_METHOD(0x01BF89E0, void, set_SerializationBinder, (JsonSerializerProxy * __this, ISerializationBinder * value));
IL2CPP_REGISTER_METHOD(0x01BF8A10, StreamingContext, get_Context, (JsonSerializerProxy * __this));
IL2CPP_REGISTER_METHOD(0x01BF8A50, void, set_Context, (JsonSerializerProxy * __this, StreamingContext value));
IL2CPP_REGISTER_METHOD(0x01BF8A90, bool, get_CheckAdditionalContent, (JsonSerializerProxy * __this));
IL2CPP_REGISTER_METHOD(0x01BF8AC0, JsonSerializerInternalBase *, GetInternalSerializer, (JsonSerializerProxy * __this));
IL2CPP_REGISTER_METHOD(0x01BF8AE0, void, __ctor, (JsonSerializerProxy * __this, JsonSerializerInternalReader * serializerReader));
IL2CPP_REGISTER_METHOD(0x01BF8BA0, void, __ctor, (JsonSerializerProxy * __this, JsonSerializerInternalWriter * serializerWriter));
IL2CPP_REGISTER_METHOD(0x01BF8C60, Object *, DeserializeInternal, (JsonSerializerProxy * __this, JsonReader * reader, Type * objectType));
IL2CPP_REGISTER_METHOD(0x01BF8CB0, void, SerializeInternal, (JsonSerializerProxy * __this, JsonWriter * jsonWriter, Object * value, Type * rootType));
}
