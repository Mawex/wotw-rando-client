#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::SafeSerializationManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SafeSerializationManager * __this));
IL2CPP_REGISTER_METHOD(0x01EDBCD0, void, __ctor, (SafeSerializationManager * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x00519290, bool, get_IsActive, (SafeSerializationManager * __this));
IL2CPP_REGISTER_METHOD(0x01EDBEC0, void, CompleteSerialization, (SafeSerializationManager * __this, Object * serializedObject, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01EDC230, void, CompleteDeserialization, (SafeSerializationManager * __this, Object * deserializedObject));
IL2CPP_REGISTER_METHOD(0x01EDC4E0, void, ISerializable_GetObjectData, (SafeSerializationManager * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01EDC5D0, Object *, IObjectReference_GetRealObject, (SafeSerializationManager * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01EDC990, void, OnDeserialized, (SafeSerializationManager * __this, StreamingContext context));
}
