using namespace app;

namespace app::methods::GhostStateMachineData {
IL2CPP_REGISTER_METHOD(0x002FA280, MoonGuid *, get_Guid, (GhostStateMachineData * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_State, (GhostStateMachineData * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_EventId, (GhostStateMachineData * __this));
IL2CPP_REGISTER_METHOD(0x007E9400, void, __ctor, (GhostStateMachineData * __this));
IL2CPP_REGISTER_METHOD(0x007E94D0, void, __ctor, (GhostStateMachineData * __this, StateMachine_2 * stateMachine));
IL2CPP_REGISTER_METHOD(0x007E95D0, void, __ctor, (GhostStateMachineData * __this, StateMachine_2 * stateMachine, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x007E96D0, void, Save, (GhostStateMachineData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x007E97B0, void, Load, (GhostStateMachineData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x007E9990, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostStateMachineData * __this));
IL2CPP_REGISTER_METHOD(0x007E99A0, int32_t, GetDataSize, (GhostStateMachineData * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (GhostStateMachineData * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (GhostStateMachineData * __this, bool value));
}
