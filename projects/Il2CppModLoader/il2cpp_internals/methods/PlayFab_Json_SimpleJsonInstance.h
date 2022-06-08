#include <interception_macros.h>

namespace app::methods::PlayFab::Json::SimpleJsonInstance {
IL2CPP_REGISTER_METHOD(0x01852E30, Object *, DeserializeObject, (SimpleJsonInstance * __this, String * json));
IL2CPP_REGISTER_METHOD(0x01852F40, String *, SerializeObject, (SimpleJsonInstance * __this, Object * json));
IL2CPP_REGISTER_METHOD(0x01853020, String *, SerializeObject, (SimpleJsonInstance * __this, Object * json, Object * jsonSerializerStrategy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SimpleJsonInstance * __this));
IL2CPP_REGISTER_METHOD(0x01853130, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x016A9F40, Object *, DeserializeObject, (SimpleJsonInstance * __this, String * json));
IL2CPP_REGISTER_METHOD(0x016AA030, Object *, DeserializeObject, (SimpleJsonInstance * __this, String * json, Object * jsonSerializerStrategy));
IL2CPP_REGISTER_METHOD(0x016A9E50, bool, DeserializeObject, (SimpleJsonInstance * __this, String * json));
}
