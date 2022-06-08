#include <interception_macros.h>

namespace app::methods::DesiredUberStateFloat {
IL2CPP_REGISTER_METHOD(0x01B59780, void, WriteDesiredStates, (DesiredUberStateFloat * __this));
IL2CPP_REGISTER_METHODINFO(0x04727980, DesiredUberStateFloat_WriteDesiredStates__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B598B0, void, Revert, (DesiredUberStateFloat * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, IUberState *, get_UberState, (DesiredUberStateFloat * __this));
IL2CPP_REGISTER_METHOD(0x01B59900, bool, IsFulfilled, (DesiredUberStateFloat * __this));
IL2CPP_REGISTER_METHOD(0x01B599E0, String *, get_NiceName, (DesiredUberStateFloat * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DesiredUberStateFloat * __this));
}
