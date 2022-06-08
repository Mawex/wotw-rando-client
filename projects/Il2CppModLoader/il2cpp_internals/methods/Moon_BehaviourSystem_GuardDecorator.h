#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::GuardDecorator {
IL2CPP_REGISTER_METHOD(0x0300DE30, List_1_Moon_BehaviourSystem_GuardDecorator_ *, AgentGuards, (Component_1 * agent));
IL2CPP_REGISTER_METHOD(0x0300DF60, String *, get_TokenString, (GuardDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300DF90, BehaviourStatus__Enum, OnExecute, (GuardDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00BB4E90, void, OnReset, (GuardDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300E2C0, void, SetGuards, (GuardDecorator * __this, Component_1 * guardAgent));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (GuardDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300E620, void, __cctor, ());
}
