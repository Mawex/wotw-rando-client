using namespace app;

namespace app::methods::TimelineActionTrigger {
IL2CPP_REGISTER_METHOD(0x010F4900, void, OnStartPlay, (TimelineActionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (TimelineActionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (TimelineActionTrigger * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (TimelineActionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_Duration, (TimelineActionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (TimelineActionTrigger * __this));
IL2CPP_REGISTER_METHOD(0x005A4BA0, void, __ctor, (TimelineActionTrigger * __this));
}
