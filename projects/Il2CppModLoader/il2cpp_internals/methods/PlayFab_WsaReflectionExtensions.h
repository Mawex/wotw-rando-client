#include <interception_macros.h>

namespace app::methods::PlayFab::WsaReflectionExtensions {
IL2CPP_REGISTER_METHOD(0x01AD43A0, Delegate *, CreateDelegate, (MethodInfo_1 * methodInfo, Type * delegateType, Object * instance));
IL2CPP_REGISTER_METHOD(0x004C50A0, Type *, GetTypeInfo, (Type * type));
IL2CPP_REGISTER_METHOD(0x004C50A0, Type *, AsType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01AD43D0, String *, GetDelegateName, (Delegate * delegateInstance));
}
