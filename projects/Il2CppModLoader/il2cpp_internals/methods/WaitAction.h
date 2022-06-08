#include <interception_macros.h>

namespace app::methods::WaitAction {
IL2CPP_REGISTER_METHOD(0x008C4680, void, Awake, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x008C4740, void, OnDestroy, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x008C4800, void, Perform, (WaitAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008C48F0, String *, GetNiceName, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x008C5360, bool, get_OtherStuff, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x008C5480, bool, get_IsPerforming, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlocking, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x008C54A0, void, OnUpdate, (WaitAction * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (WaitAction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00608710, SuspendableMask__Enum, get_Mask, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x00608720, void, set_Mask, (WaitAction * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00420EE0, UpdateType__Enum, get_UpdateType, (WaitAction * __this));
IL2CPP_REGISTER_METHOD(0x008C5500, void, __ctor, (WaitAction * __this));
}
