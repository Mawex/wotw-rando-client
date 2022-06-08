using namespace app;

namespace app::methods::PlaymodeEnteredEvent {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_TimeTaken, (PlaymodeEnteredEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_TimeTaken, (PlaymodeEnteredEvent * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Scene, (PlaymodeEnteredEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Scene, (PlaymodeEnteredEvent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02EA0730, DatadogEvent *, GetCompatibleEvent, (PlaymodeEnteredEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlaymodeEnteredEvent * __this));
}
