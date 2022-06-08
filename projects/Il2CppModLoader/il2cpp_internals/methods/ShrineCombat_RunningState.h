#include <interception_macros.h>

namespace app::methods::ShrineCombat_RunningState {
IL2CPP_REGISTER_METHOD(0x0073CAB0, void, __ctor, (ShrineCombat_RunningState * __this, ShrineCombat * combatShrine));
IL2CPP_REGISTER_METHOD(0x0073D140, void, OnEnter, (ShrineCombat_RunningState * __this));
IL2CPP_REGISTER_METHOD(0x0073D390, void, UpdateState, (ShrineCombat_RunningState * __this));
IL2CPP_REGISTER_METHOD(0x0073D600, void, OnExit, (ShrineCombat_RunningState * __this));
IL2CPP_REGISTER_METHOD(0x0073D720, void, CancelArena, (ShrineCombat_RunningState * __this));
IL2CPP_REGISTER_METHOD(0x0073D850, void, CompleteShrine, (ShrineCombat_RunningState * __this));
IL2CPP_REGISTER_METHOD(0x0073DA20, void, NotifyArenaCompleted, (ShrineCombat_RunningState * __this));
}
