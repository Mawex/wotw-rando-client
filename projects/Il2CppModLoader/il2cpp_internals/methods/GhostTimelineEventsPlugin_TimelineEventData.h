#include <interception_macros.h>

namespace app::methods::GhostTimelineEventsPlugin_TimelineEventData {
IL2CPP_REGISTER_METHOD(0x007EC140, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostTimelineEventsPlugin_TimelineEventData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (GhostTimelineEventsPlugin_TimelineEventData * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (GhostTimelineEventsPlugin_TimelineEventData * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (GhostTimelineEventsPlugin_TimelineEventData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x007EC150, void, Load, (GhostTimelineEventsPlugin_TimelineEventData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x007EC1C0, void, Save, (GhostTimelineEventsPlugin_TimelineEventData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GhostTimelineEventsPlugin_TimelineEventData * __this));
}
