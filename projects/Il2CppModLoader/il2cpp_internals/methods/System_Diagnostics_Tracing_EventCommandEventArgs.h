#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventCommandEventArgs {
IL2CPP_REGISTER_METHOD(0x002FC6D0, EventCommand__Enum, get_Command, (EventCommandEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Command, (EventCommandEventArgs * __this, EventCommand__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB930, IDictionary_2_System_String_System_String_ *, get_Arguments, (EventCommandEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Arguments, (EventCommandEventArgs * __this, IDictionary_2_System_String_System_String_ * value));
IL2CPP_REGISTER_METHOD(0x0174A9F0, void, __ctor, (EventCommandEventArgs * __this, EventCommand__Enum command, IDictionary_2_System_String_System_String_ * arguments, EventSource * eventSource, EventListener * listener, int32_t perEventSourceSessionId, int32_t etwSessionId, bool enable, EventLevel__Enum level, EventKeywords__Enum matchAnyKeyword));
}
