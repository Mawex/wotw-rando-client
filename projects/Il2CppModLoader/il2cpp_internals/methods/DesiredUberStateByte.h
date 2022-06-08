#include <interception_macros.h>

namespace app::methods::DesiredUberStateByte {
IL2CPP_REGISTER_METHOD(0x01B57E00, void, WriteDesiredStates, (DesiredUberStateByte * __this));
IL2CPP_REGISTER_METHOD(0x01B57F00, void, Revert, (DesiredUberStateByte * __this));
IL2CPP_REGISTER_METHOD(0x01B57FF0, IUberState *, get_UberState, (DesiredUberStateByte * __this));
IL2CPP_REGISTER_METHOD(0x01B580B0, bool, IsFulfilled, (DesiredUberStateByte * __this));
IL2CPP_REGISTER_METHOD(0x01B58190, String *, get_NiceName, (DesiredUberStateByte * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DesiredUberStateByte * __this));
}
