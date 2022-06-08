using namespace app;

namespace app::methods::Moon::Timeline::RecordingContext {
IL2CPP_REGISTER_METHOD(0x0010E100, RecordableType__Enum, get_RecordableType, (RecordingContext__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010E9A0, bool, get_ShouldRecord, (RecordingContext__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00107C10, Component_1 *, get_Puppet, (RecordingContext__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D7760, void, __ctor, (RecordingContext__Boxed * __this, RecordableType__Enum recordableType, bool shouldRecord));
IL2CPP_REGISTER_METHOD(0x001D7770, void, __ctor, (RecordingContext__Boxed * __this, bool shouldRecord, Component_1 * puppet));
}
