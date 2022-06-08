using namespace app;

namespace app::methods::System::Runtime::Remoting::Channels::CADSerializer {
IL2CPP_REGISTER_METHOD(0x01A9AC40, IMessage *, DeserializeMessage, (MemoryStream * mem, IMethodCallMessage * msg));
IL2CPP_REGISTER_METHODINFO(0x04779058, CADSerializer_DeserializeMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A9AC90, MemoryStream *, SerializeMessage, (IMessage * msg));
IL2CPP_REGISTER_METHOD(0x01A9AFD0, Object *, DeserializeObjectSafe, (Byte__Array * mem));
IL2CPP_REGISTER_METHOD(0x01A9B160, MemoryStream *, SerializeObject, (Object * obj));
IL2CPP_REGISTER_METHOD(0x01A9B4A0, Object *, DeserializeObject, (MemoryStream * mem));
}
