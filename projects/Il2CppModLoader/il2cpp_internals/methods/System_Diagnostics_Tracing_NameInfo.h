#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::NameInfo {
IL2CPP_REGISTER_METHOD(0x01A06D30, void, ReserveEventIDsBelow, (int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01A06E30, void, __ctor, (NameInfo_1 * __this, String * name, EventTags__Enum tags, int32_t typeMetadataSize));
IL2CPP_REGISTER_METHOD(0x01A06FF0, int32_t, Compare, (NameInfo_1 * __this, NameInfo_1 * other));
IL2CPP_REGISTER_METHOD(0x01A07020, int32_t, Compare, (NameInfo_1 * __this, KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags_ key));
IL2CPP_REGISTER_METHOD(0x01A070C0, int32_t, Compare, (NameInfo_1 * __this, String * otherName, EventTags__Enum otherTags));
IL2CPP_REGISTER_METHOD(0x01A071B0, void, __cctor, ());
}
