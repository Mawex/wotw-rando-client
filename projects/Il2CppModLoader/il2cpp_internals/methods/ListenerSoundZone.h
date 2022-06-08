using namespace app;

namespace app::methods::ListenerSoundZone {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnListenerEnteredZone, (ListenerSoundZone * __this, ISoundListener * listener));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnListenerExitsZone, (ListenerSoundZone * __this, ISoundListener * listener, bool forceReset));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnListenerUpdateZone, (ListenerSoundZone * __this, ISoundListener * listener, Vector2 distances, bool hasPositionChanged));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetAdditionalTracking, (ListenerSoundZone * __this));
IL2CPP_REGISTER_METHOD(0x00FA9280, void, OnDrawGizmos, (ListenerSoundZone * __this));
IL2CPP_REGISTER_METHOD(0x00FA9290, void, DrawGizmoCircle, (ListenerSoundZone * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ListenerSoundZone * __this));
}
