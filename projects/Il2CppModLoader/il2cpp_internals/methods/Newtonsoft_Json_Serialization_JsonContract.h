using namespace app;

namespace app::methods::Newtonsoft::Json::Serialization::JsonContract {
IL2CPP_REGISTER_METHOD(0x002FBB80, Type *, get_UnderlyingType, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, Type *, get_CreatedType, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x0186DF20, void, set_CreatedType, (JsonContract * __this, Type * value));
IL2CPP_REGISTER_METHOD(0x0186DFC0, Nullable_1_Boolean_, get_IsReference, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x0186DFD0, void, set_IsReference, (JsonContract * __this, Nullable_1_Boolean_ value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, JsonConverter *, get_Converter, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_Converter, (JsonContract * __this, JsonConverter * value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, JsonConverter *, get_InternalConverter, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_InternalConverter, (JsonContract * __this, JsonConverter * value));
IL2CPP_REGISTER_METHOD(0x0186DFE0, IList_1_Newtonsoft_Json_Serialization_SerializationCallback_ *, get_OnDeserializedCallbacks, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x0186E140, IList_1_Newtonsoft_Json_Serialization_SerializationCallback_ *, get_OnDeserializingCallbacks, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x0186E2A0, IList_1_Newtonsoft_Json_Serialization_SerializationCallback_ *, get_OnSerializedCallbacks, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x0186E400, IList_1_Newtonsoft_Json_Serialization_SerializationCallback_ *, get_OnSerializingCallbacks, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x0186E560, IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_ *, get_OnErrorCallbacks, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBC00, Func_1_Object_ *, get_DefaultCreator, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_DefaultCreator, (JsonContract * __this, Func_1_Object_ * value));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_DefaultCreatorNonPublic, (JsonContract * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_DefaultCreatorNonPublic, (JsonContract * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0186E6C0, void, __ctor, (JsonContract * __this, Type * underlyingType));
IL2CPP_REGISTER_METHOD(0x0186E880, void, InvokeOnSerializing, (JsonContract * __this, Object * o, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0186EA80, void, InvokeOnSerialized, (JsonContract * __this, Object * o, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0186EC80, void, InvokeOnDeserializing, (JsonContract * __this, Object * o, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0186EE80, void, InvokeOnDeserialized, (JsonContract * __this, Object * o, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0186EFF0, void, InvokeOnError, (JsonContract * __this, Object * o, StreamingContext context, ErrorContext * errorContext));
IL2CPP_REGISTER_METHOD(0x0186F210, SerializationCallback *, CreateSerializationCallback, (MethodInfo_1 * callbackMethodInfo));
IL2CPP_REGISTER_METHOD(0x0186F430, SerializationErrorCallback *, CreateSerializationErrorCallback, (MethodInfo_1 * callbackMethodInfo));
}
