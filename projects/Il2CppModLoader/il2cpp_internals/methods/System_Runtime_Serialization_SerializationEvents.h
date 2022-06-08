#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::SerializationEvents {
IL2CPP_REGISTER_METHOD(0x01EDCB70, List_1_System_Reflection_MethodInfo_ *, GetMethodsWithAttribute, (SerializationEvents * __this, Type * attribute, Type * t));
IL2CPP_REGISTER_METHOD(0x01EDCE50, void, __ctor, (SerializationEvents * __this, Type * t));
IL2CPP_REGISTER_METHOD(0x01EDCF90, bool, get_HasOnSerializingEvents, (SerializationEvents * __this));
IL2CPP_REGISTER_METHOD(0x01EDCFB0, void, InvokeOnSerializing, (SerializationEvents * __this, Object * obj, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01EDD210, void, InvokeOnDeserializing, (SerializationEvents * __this, Object * obj, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01EDD470, void, InvokeOnDeserialized, (SerializationEvents * __this, Object * obj, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01EDD6D0, SerializationEventHandler *, AddOnSerialized, (SerializationEvents * __this, Object * obj, SerializationEventHandler * handler));
IL2CPP_REGISTER_METHOD(0x01EDD8F0, SerializationEventHandler *, AddOnDeserialized, (SerializationEvents * __this, Object * obj, SerializationEventHandler * handler));
}
