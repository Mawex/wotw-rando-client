#include <interception_macros.h>

namespace app::methods::EndGameTrigger {
IL2CPP_REGISTER_METHOD(0x00BFD600, void, OnValidate, (EndGameTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00BFD6E0, void, Awake, (EndGameTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00BFD8F0, void, OnDestroy, (EndGameTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00BFDAD0, void, CallEndGame, (EndGameTrigger * __this));
IL2CPP_REGISTER_METHODINFO(0x047057A8, EndGameTrigger_CallEndGame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (EndGameTrigger * __this));
}
