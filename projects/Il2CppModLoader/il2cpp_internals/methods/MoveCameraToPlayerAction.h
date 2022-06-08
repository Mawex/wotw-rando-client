#include <interception_macros.h>

namespace app::methods::MoveCameraToPlayerAction {
IL2CPP_REGISTER_METHOD(0x008682E0, void, Perform, (MoveCameraToPlayerAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00868510, void, Stop, (MoveCameraToPlayerAction * __this));
IL2CPP_REGISTER_METHODINFO(0x04782EB0, MoveCameraToPlayerAction_Stop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00868560, bool, get_IsPerforming, (MoveCameraToPlayerAction * __this));
IL2CPP_REGISTER_METHODINFO(0x04795B98, MoveCameraToPlayerAction_get_IsPerforming__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Duration, (MoveCameraToPlayerAction * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Duration, (MoveCameraToPlayerAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x008685B0, String *, GetNiceName, (MoveCameraToPlayerAction * __this));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (MoveCameraToPlayerAction * __this));
}
