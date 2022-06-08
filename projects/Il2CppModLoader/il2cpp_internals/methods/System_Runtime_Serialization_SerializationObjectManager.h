#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::SerializationObjectManager {
IL2CPP_REGISTER_METHOD(0x01EE1730, void, __ctor, (SerializationObjectManager * __this, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01EE1960, void, RegisterObject, (SerializationObjectManager * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01EE1BA0, void, RaiseOnSerializedEvent, (SerializationObjectManager * __this));
IL2CPP_REGISTER_METHOD(0x01EE1BD0, void, AddOnSerialized, (SerializationObjectManager * __this, Object * obj));
}
