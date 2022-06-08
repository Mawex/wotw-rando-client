using namespace app;

namespace app::methods::Moon::Timeline::ExternalTimelineRecord {
IL2CPP_REGISTER_METHOD(0x01BBF7A0, void, __ctor, (ExternalTimelineRecord * __this, EntityId id));
IL2CPP_REGISTER_METHOD(0x002FC6D0, EntityId, get_Id, (ExternalTimelineRecord * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_Entity, (ExternalTimelineRecord * __this));
IL2CPP_REGISTER_METHOD(0x01BBF900, bool, HasFinished, (ExternalTimelineRecord * __this, int32_t eventId));
IL2CPP_REGISTER_METHODINFO(0x04733668, ExternalTimelineRecord_HasFinished__MethodInfo);
}
