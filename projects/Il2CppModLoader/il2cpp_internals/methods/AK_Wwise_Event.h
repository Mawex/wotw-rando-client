using namespace app;

namespace app::methods::AK::Wwise::Event {
IL2CPP_REGISTER_METHOD(0x00420230, WwiseObjectType__Enum, get_WwiseObjectType, (Event_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, VerifyPlayingID, (Event_1 * __this, uint32_t playingId));
IL2CPP_REGISTER_METHOD(0x026C1E20, uint32_t, Post, (Event_1 * __this, uint64_t gameObject));
IL2CPP_REGISTER_METHOD(0x026C1F00, uint32_t, Post, (Event_1 * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x026C20C0, uint32_t, Post, (Event_1 * __this, GameObject * gameObject, CallbackFlags * flags, AkCallbackManager_EventCallback * callback, Object * cookie));
IL2CPP_REGISTER_METHOD(0x026C21E0, uint32_t, Post, (Event_1 * __this, uint64_t gameObject, CallbackFlags * flags, AkCallbackManager_EventCallback * callback, Object * cookie));
IL2CPP_REGISTER_METHOD(0x026C2300, uint32_t, Post, (Event_1 * __this, GameObject * gameObject, uint32_t flags, AkCallbackManager_EventCallback * callback, Object * cookie));
IL2CPP_REGISTER_METHOD(0x026C2410, uint32_t, Post, (Event_1 * __this, uint64_t gameObject, uint32_t flags, AkCallbackManager_EventCallback * callback, Object * cookie));
IL2CPP_REGISTER_METHOD(0x026C2520, void, Stop, (Event_1 * __this, GameObject * gameObject, int32_t transitionDuration, AkCurveInterpolation__Enum curveInterpolation));
IL2CPP_REGISTER_METHOD(0x026C2550, void, ExecuteAction, (Event_1 * __this, GameObject * gameObject, AkActionOnEventType__Enum actionOnEventType, int32_t transitionDuration, AkCurveInterpolation__Enum curveInterpolation));
IL2CPP_REGISTER_METHOD(0x026C2780, void, PostMIDI, (Event_1 * __this, GameObject * gameObject, AkMIDIPostArray * array));
IL2CPP_REGISTER_METHOD(0x026C28C0, void, PostMIDI, (Event_1 * __this, GameObject * gameObject, AkMIDIPostArray * array, int32_t count));
IL2CPP_REGISTER_METHOD(0x026C2A30, void, StopMIDI, (Event_1 * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x026C2C30, void, StopMIDI, (Event_1 * __this));
IL2CPP_REGISTER_METHOD(0x026C1170, void, __ctor, (Event_1 * __this));
}
