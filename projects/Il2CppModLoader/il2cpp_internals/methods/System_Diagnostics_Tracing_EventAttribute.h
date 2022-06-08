using namespace app;

namespace app::methods::System::Diagnostics::Tracing::EventAttribute {
IL2CPP_REGISTER_METHOD(0x0174A9D0, void, __ctor, (EventAttribute * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_EventId, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_EventId, (EventAttribute * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, EventLevel__Enum, get_Level, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Level, (EventAttribute * __this, EventLevel__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB930, EventKeywords__Enum, get_Keywords, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Keywords, (EventAttribute * __this, EventKeywords__Enum value));
IL2CPP_REGISTER_METHOD(0x003FC7F0, EventOpcode__Enum, get_Opcode, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x0174A9E0, void, set_Opcode, (EventAttribute * __this, EventOpcode__Enum value));
IL2CPP_REGISTER_METHOD(0x004E5A00, bool, get_IsOpcodeSet, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, EventTask__Enum, get_Task, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Task, (EventAttribute * __this, EventTask__Enum value));
IL2CPP_REGISTER_METHOD(0x007EC400, uint8_t, get_Version, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_Message, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Message, (EventAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00654950, EventTags__Enum, get_Tags, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x00998570, EventActivityOptions__Enum, get_ActivityOptions, (EventAttribute * __this));
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_ActivityOptions, (EventAttribute * __this, EventActivityOptions__Enum value));
}
