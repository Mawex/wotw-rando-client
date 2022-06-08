#include <interception_macros.h>

namespace app::methods::InstantiateCharacterAction {
IL2CPP_REGISTER_METHOD(0x0062C8D0, void, Perform, (InstantiateCharacterAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0062CB40, void, AfterLoad, (InstantiateCharacterAction * __this));
IL2CPP_REGISTER_METHODINFO(0x0476BE48, InstantiateCharacterAction_AfterLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0062CCE0, String *, GetNiceName, (InstantiateCharacterAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (InstantiateCharacterAction * __this));
}
