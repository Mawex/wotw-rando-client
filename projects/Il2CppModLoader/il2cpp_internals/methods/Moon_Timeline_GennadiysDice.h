using namespace app;

namespace app::methods::Moon::Timeline::GennadiysDice {
IL2CPP_REGISTER_METHOD(0x01BC0070, Int32__Array *, GetEventsIds, (GennadiysDice * __this));
IL2CPP_REGISTER_METHOD(0x01BC0250, String__Array *, GetEventsNames, (GennadiysDice * __this));
IL2CPP_REGISTER_METHOD(0x01BC0340, String *, GetEventName, (GennadiysDice * __this, int32_t evt));
IL2CPP_REGISTER_METHOD(0x01BC03F0, void, CollectEvents, (GennadiysDice * __this, List_1_Moon_Timeline_IEventDescriptor_ * events));
IL2CPP_REGISTER_METHOD(0x01BC0560, void, OnUpdateEntity, (GennadiysDice * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01BC06D0, void, Roll, (GennadiysDice * __this));
IL2CPP_REGISTER_METHOD(0x01BC07E0, bool, HasFinished, (GennadiysDice * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01BC0860, void, OnStartPlayback, (GennadiysDice * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01BC0860, void, Reset, (GennadiysDice * __this));
IL2CPP_REGISTER_METHOD(0x01BC0870, EventDescriptorSet *, get_Events, (GennadiysDice * __this));
IL2CPP_REGISTER_METHOD(0x01BC0AA0, bool, ApproximateEvent, (GennadiysDice * __this, int32_t evt, float * time));
IL2CPP_REGISTER_METHOD(0x01BC0BE0, void, __ctor, (GennadiysDice * __this));
}
