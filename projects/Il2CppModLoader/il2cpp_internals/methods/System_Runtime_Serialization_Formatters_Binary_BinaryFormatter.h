#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter {
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_AssemblyFormat, (BinaryFormatter * __this, FormatterAssemblyStyle__Enum value));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_SurrogateSelector, (BinaryFormatter * __this, ISurrogateSelector * value));
IL2CPP_REGISTER_METHOD(0x01D8D4A0, void, __ctor, (BinaryFormatter * __this));
IL2CPP_REGISTER_METHOD(0x01D8D4E0, void, __ctor, (BinaryFormatter * __this, ISurrogateSelector * selector, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01D8D500, Object *, Deserialize, (BinaryFormatter * __this, Stream * serializationStream));
IL2CPP_REGISTER_METHOD(0x01D8D520, Object *, Deserialize, (BinaryFormatter * __this, Stream * serializationStream, HeaderHandler * handler, bool fCheck));
IL2CPP_REGISTER_METHODINFO(0x04748850, BinaryFormatter_Deserialize_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8D9A0, Object *, Deserialize, (BinaryFormatter * __this, Stream * serializationStream, HeaderHandler * handler));
IL2CPP_REGISTER_METHOD(0x01D8D9C0, void, Serialize, (BinaryFormatter * __this, Stream * serializationStream, Object * graph));
IL2CPP_REGISTER_METHOD(0x01D8D9E0, void, Serialize, (BinaryFormatter * __this, Stream * serializationStream, Object * graph, Header__Array * headers));
IL2CPP_REGISTER_METHOD(0x01D8DA00, void, Serialize, (BinaryFormatter * __this, Stream * serializationStream, Object * graph, Header__Array * headers, bool fCheck));
IL2CPP_REGISTER_METHODINFO(0x04747CE0, BinaryFormatter_Serialize_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D8DF50, TypeInformation *, GetTypeInformation, (Type * type));
IL2CPP_REGISTER_METHOD(0x01D8E300, void, __cctor, ());
}
