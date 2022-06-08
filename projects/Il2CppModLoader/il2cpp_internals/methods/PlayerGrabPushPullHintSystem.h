using namespace app;

namespace app::methods::PlayerGrabPushPullHintSystem {
IL2CPP_REGISTER_METHOD(0x0140ECE0, void, OnEnterRange, (PlayerGrabPushPullHintSystem * __this, bool bash));
IL2CPP_REGISTER_METHOD(0x0140EEE0, void, OnGrabBlock, (PlayerGrabPushPullHintSystem * __this));
IL2CPP_REGISTER_METHOD(0x0140F120, void, HidePressToPushOrPull, (PlayerGrabPushPullHintSystem * __this));
IL2CPP_REGISTER_METHOD(0x0140F1F0, void, HidePressToGrab, (PlayerGrabPushPullHintSystem * __this));
IL2CPP_REGISTER_METHOD(0x0140F2C0, void, FixedUpdate, (PlayerGrabPushPullHintSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetReferenceToSein, (PlayerGrabPushPullHintSystem * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (PlayerGrabPushPullHintSystem * __this));
}
