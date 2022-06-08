#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventWrittenEventArgs {
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_EventName, (EventWrittenEventArgs * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_EventId, (EventWrittenEventArgs * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x019FD840, void, set_RelatedActivityId, (EventWrittenEventArgs * __this, Guid value));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Payload, (EventWrittenEventArgs * __this, ReadOnlyCollection_1_System_Object_ * value));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_PayloadNames, (EventWrittenEventArgs * __this, ReadOnlyCollection_1_System_String_ * value));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Message, (EventWrittenEventArgs * __this, String * value));
IL2CPP_REGISTER_METHOD(0x019FD850, void, __ctor, (EventWrittenEventArgs * __this, EventSource * eventSource));
}
