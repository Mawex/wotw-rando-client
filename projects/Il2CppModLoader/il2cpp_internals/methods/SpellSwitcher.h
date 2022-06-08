#include <interception_macros.h>

namespace app::methods::SpellSwitcher {
IL2CPP_REGISTER_METHOD(0x00944270, void, Start, (SpellSwitcher * __this));
IL2CPP_REGISTER_METHOD(0x00944420, void, OnDestroy, (SpellSwitcher * __this));
IL2CPP_REGISTER_METHOD(0x009445C0, void, Update, (SpellSwitcher * __this));
IL2CPP_REGISTER_METHOD(0x00944960, void, SetSpell, (SpellSwitcher * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00944A90, void, OnGUI, (SpellSwitcher * __this));
IL2CPP_REGISTER_METHOD(0x00617EB0, void, OnRestoreCheckpoint, (SpellSwitcher * __this));
IL2CPP_REGISTER_METHODINFO(0x04781810, SpellSwitcher_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SpellSwitcher * __this));
}
