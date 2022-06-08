#include <interception_macros.h>

namespace app::methods::PlayFab::Json::JsonWrapper {
IL2CPP_REGISTER_METHOD(0x01847F50, ISerializerPlugin *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x01847FF0, Object *, DeserializeObject, (String * json));
IL2CPP_REGISTER_METHOD(0x018480C0, String *, SerializeObject, (Object * json));
IL2CPP_REGISTER_METHOD(0x01848190, String *, SerializeObject, (Object * json, Object * jsonSerializerStrategy));
IL2CPP_REGISTER_METHOD(0x016A9A20, Object *, DeserializeObject, (String * json));
IL2CPP_REGISTER_METHOD(0x016A9AF0, Object *, DeserializeObject, (String * json, Object * jsonSerializerStrategy));
}
