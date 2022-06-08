using namespace app;

namespace app::methods::CreditsTextPosition {
IL2CPP_REGISTER_METHOD(0x00DB7970, bool, get_IsLooping, (CreditsTextPosition * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (CreditsTextPosition * __this));
IL2CPP_REGISTER_METHOD(0x00DB7980, void, SampleValue, (CreditsTextPosition * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00DB82C0, float, get_Duration, (CreditsTextPosition * __this));
IL2CPP_REGISTER_METHOD(0x00DB82D0, void, RestoreToOriginalState, (CreditsTextPosition * __this));
IL2CPP_REGISTER_METHOD(0x00DB8440, void, __ctor, (CreditsTextPosition * __this));
}
