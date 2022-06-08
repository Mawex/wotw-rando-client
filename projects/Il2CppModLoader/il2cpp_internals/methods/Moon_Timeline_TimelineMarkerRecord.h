using namespace app;

namespace app::methods::Moon::Timeline::TimelineMarkerRecord {
IL2CPP_REGISTER_METHOD(0x01E8CB90, void, __ctor, (TimelineMarkerRecord * __this, EntityId id));
IL2CPP_REGISTER_METHOD(0x002FC6D0, EntityId, get_Id, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConstrainedToEventId, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_ConstrainedToEventId, (TimelineMarkerRecord * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_EventId, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_StaticTime, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x01E8CBB0, String *, get_Name, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_VolatilePreviewTime, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x012219F0, void, set_VolatilePreviewTime, (TimelineMarkerRecord * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsConstrainable, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsDeletable, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, EntityId, get_ConstrainedTo, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_ConstrainedTo, (TimelineMarkerRecord * __this, EntityId value));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_PreviewTime, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_PreviewTime, (TimelineMarkerRecord * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, EntityId, get_EntityToDrawOn, (TimelineMarkerRecord * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_EntityToDrawOn, (TimelineMarkerRecord * __this, EntityId value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasFinished, (TimelineMarkerRecord * __this, int32_t eventId));
}
