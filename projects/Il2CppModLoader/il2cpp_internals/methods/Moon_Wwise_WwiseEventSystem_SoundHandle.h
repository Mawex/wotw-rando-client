using namespace app;

namespace app::methods::Moon::Wwise::WwiseEventSystem_SoundHandle {
IL2CPP_REGISTER_METHOD(0x001FEC90, void, __ctor, (WwiseEventSystem_SoundHandle__Boxed * __this, WwiseEventSystem_SoundHandleProtected * sndHandle, int64_t handleVersion));
IL2CPP_REGISTER_METHOD(0x001FECA0, void, Play, (WwiseEventSystem_SoundHandle__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0470CB48, WwiseEventSystem_SoundHandle_Play__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0011D880, bool, get_IsAllocated, (WwiseEventSystem_SoundHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FECB0, bool, get_IsValid, (WwiseEventSystem_SoundHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FECC0, void, Stop, (WwiseEventSystem_SoundHandle__Boxed * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x001FECD0, void, Pause, (WwiseEventSystem_SoundHandle__Boxed * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x001FECE0, void, Resume, (WwiseEventSystem_SoundHandle__Boxed * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x001FECF0, void, Break, (WwiseEventSystem_SoundHandle__Boxed * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x001FED60, void, ReleaseEnvelope, (WwiseEventSystem_SoundHandle__Boxed * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x001FEDC0, WwiseEventSystem_EventStatus__Enum, get_Status, (WwiseEventSystem_SoundHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FEDD0, void, ReleaseHandle, (WwiseEventSystem_SoundHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FEDE0, void, RegisterCallback, (WwiseEventSystem_SoundHandle__Boxed * __this, AkCallbackType__Enum flags, AkCallbackManager_EventCallback * callback));
IL2CPP_REGISTER_METHOD(0x001FEDF0, void, Validate, (WwiseEventSystem_SoundHandle__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04751128, WwiseEventSystem_SoundHandle_Validate__MethodInfo);
}
