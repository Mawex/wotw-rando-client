using namespace app;

namespace app::methods::InstantiateAnimatorB {
IL2CPP_REGISTER_METHOD(0x0062C500, int32_t, get_ServerID, (InstantiateAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x0062C510, void, set_ServerID, (InstantiateAnimatorB * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0062C520, float, get_Duration, (InstantiateAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (InstantiateAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x0062C600, void, OnStartPlay, (InstantiateAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (InstantiateAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (InstantiateAnimatorB * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (InstantiateAnimatorB * __this));
IL2CPP_REGISTER_METHOD(0x0062C8C0, void, __ctor, (InstantiateAnimatorB * __this));
}
