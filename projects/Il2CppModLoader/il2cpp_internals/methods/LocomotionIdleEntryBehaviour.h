#include <interception_macros.h>

namespace app::methods::LocomotionIdleEntryBehaviour {
IL2CPP_REGISTER_METHOD(0x00FC77B0, void, OnInitializeTask, (LocomotionIdleEntryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC78A0, void, OnEnterTask, (LocomotionIdleEntryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (LocomotionIdleEntryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00FC79B0, void, OnExitTask, (LocomotionIdleEntryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (LocomotionIdleEntryBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (LocomotionIdleEntryBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (LocomotionIdleEntryBehaviour * __this));
}
