#include <interception_macros.h>

namespace app::methods::Trap {
IL2CPP_REGISTER_METHOD(0x00B0F370, void, Awake, (Trap * __this));
IL2CPP_REGISTER_METHOD(0x00B0F570, void, OnDestroy, (Trap * __this));
IL2CPP_REGISTER_METHOD(0x00B0F740, void, OnRestoreCheckpoint, (Trap * __this));
IL2CPP_REGISTER_METHODINFO(0x04781740, Trap_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B0F750, void, Update, (Trap * __this));
IL2CPP_REGISTER_METHOD(0x00B0FCD0, void, Trigger, (Trap * __this));
IL2CPP_REGISTER_METHOD(0x00B0FF70, void, Untrap, (Trap * __this));
IL2CPP_REGISTER_METHOD(0x00B10180, void, HandleBlinking, (Trap * __this));
IL2CPP_REGISTER_METHOD(0x00B10320, void, ChangeColor, (Trap * __this, Color color));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (Trap * __this));
IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (Trap * __this, bool value));
IL2CPP_REGISTER_METHOD(0x006DC050, SuspendableMask__Enum, get_Mask, (Trap * __this));
IL2CPP_REGISTER_METHOD(0x00B103E0, void, set_Mask, (Trap * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00B10490, void, __ctor, (Trap * __this));
}
