#include <interception_macros.h>

namespace app::methods::GhostStateMachinePlugin {
IL2CPP_REGISTER_METHOD(0x007E99B0, void, Register, (MoonGuid * Guid, StateMachine_2 * stateMachine));
IL2CPP_REGISTER_METHOD(0x007E9AA0, void, Unregister, (MoonGuid * Guid));
IL2CPP_REGISTER_METHOD(0x007E9B60, void, PlayCycle, (GhostStateMachinePlugin * __this, float time));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (GhostStateMachinePlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00417920, GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (GhostStateMachinePlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E9D80, void, OnStateChanged, (GhostStateMachinePlugin * __this, StateMachine_2 * stateMachine));
IL2CPP_REGISTER_METHOD(0x007E9DC0, void, OnEventTriggered, (GhostStateMachinePlugin * __this, StateMachine_2 * stateMachine, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x007E59B0, void, __ctor, (GhostStateMachinePlugin * __this));
IL2CPP_REGISTER_METHOD(0x007E9E00, void, __cctor, ());
}
