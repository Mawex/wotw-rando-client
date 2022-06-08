using namespace app;

namespace app::methods::OverlapPlatform {
IL2CPP_REGISTER_METHOD(0x00442AD0, void, FixedUpdate, (OverlapPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00442BF0, void, Awake, (OverlapPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00442CB0, void, Start, (OverlapPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00442CC0, void, Serialize, (OverlapPlatform * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00442CE0, void, OnTriggerEnter, (OverlapPlatform * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00442DB0, void, OnTriggerStay, (OverlapPlatform * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x00442E80, void, set_Activated, (OverlapPlatform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Activated, (OverlapPlatform * __this));
IL2CPP_REGISTER_METHOD(0x004430C0, void, __ctor, (OverlapPlatform * __this));
}
