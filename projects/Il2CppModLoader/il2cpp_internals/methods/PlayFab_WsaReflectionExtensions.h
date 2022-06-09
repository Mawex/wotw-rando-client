#include <interception_macros.h>

namespace app::methods::PlayFab::WsaReflectionExtensions {
IL2CPP_REGISTER_METHOD(0x01AD43A0, Delegate *, CreateDelegate, (app::MethodInfo_1 * method_info, app::Type * delegate_type, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x004C50A0, Type *, GetTypeInfo, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x004C50A0, Type *, AsType, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x01AD43D0, String *, GetDelegateName, (app::Delegate * delegate_instance));
}
