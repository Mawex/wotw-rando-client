#include <interception_macros.h>

namespace app::methods::Moon::Timeline::StaticEventDescriptor {
IL2CPP_REGISTER_METHOD(0x01E83110, void, __ctor, (StaticEventDescriptor * __this, int32_t eventId, float staticTime, String * name, bool isConstrainable, bool isDeletable));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_EventId, (StaticEventDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsStatic, (StaticEventDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_StaticTime, (StaticEventDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (StaticEventDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_VolatilePreviewTime, (StaticEventDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00A64050, void, set_VolatilePreviewTime, (StaticEventDescriptor * __this, float value));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_IsConstrainable, (StaticEventDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x0185DFF0, bool, get_IsDeletable, (StaticEventDescriptor * __this));
}
