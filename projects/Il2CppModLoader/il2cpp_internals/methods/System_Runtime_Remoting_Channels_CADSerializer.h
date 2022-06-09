#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Channels::CADSerializer {
IL2CPP_REGISTER_METHOD(0x01A9AC40, IMessage *, DeserializeMessage, (app::MemoryStream * mem, app::IMethodCallMessage * msg));
IL2CPP_REGISTER_METHODINFO(0x04779058, CADSerializer_DeserializeMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A9AC90, MemoryStream *, SerializeMessage, (app::IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01A9AFD0, Object *, DeserializeObjectSafe, (app::Byte__Array * mem));
IL2CPP_REGISTER_METHOD(0x01A9B160, MemoryStream *, SerializeObject, (app::Object * obj));
IL2CPP_REGISTER_METHOD(0x01A9B4A0, Object *, DeserializeObject, (app::MemoryStream * mem));
}
