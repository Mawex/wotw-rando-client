#include <interception_macros.h>

namespace app::methods::Moon::Wwise::WwiseEventSystem_SoundHandleProtected {
IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_Version, (WwiseEventSystem_SoundHandleProtected * __this));
IL2CPP_REGISTER_METHOD(0x02713DE0, bool, get_IsActive, (WwiseEventSystem_SoundHandleProtected * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, WwiseEventSystem_EventState *, get_State, (WwiseEventSystem_SoundHandleProtected * __this));
IL2CPP_REGISTER_METHOD(0x02713E20, void, Play, (WwiseEventSystem_SoundHandleProtected * __this));
IL2CPP_REGISTER_METHOD(0x027141A0, void, Stop, (WwiseEventSystem_SoundHandleProtected * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x027141E0, void, Pause, (WwiseEventSystem_SoundHandleProtected * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x02714220, void, Resume, (WwiseEventSystem_SoundHandleProtected * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x02714260, void, Break, (WwiseEventSystem_SoundHandleProtected * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x027142A0, void, ReleaseEnvelope, (WwiseEventSystem_SoundHandleProtected * __this, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x027142D0, void, RegisterCallback, (WwiseEventSystem_SoundHandleProtected * __this, AkCallbackType__Enum flags, AkCallbackManager_EventCallback * callback));
IL2CPP_REGISTER_METHOD(0x027142E0, void, DispatchAction, (WwiseEventSystem_SoundHandleProtected * __this, AkActionOnEventType__Enum action, int32_t transitTimeMs, AkCurveInterpolation__Enum curve));
IL2CPP_REGISTER_METHOD(0x02714660, void, CallbackInvoked, (WwiseEventSystem_SoundHandleProtected * __this, Object * cookie, AkCallbackType__Enum type, AkCallbackInfo * info));
IL2CPP_REGISTER_METHODINFO(0x0472CCB8, WwiseEventSystem_SoundHandleProtected_CallbackInvoked__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02714840, void, ProcessCallback, (WwiseEventSystem_SoundHandleProtected * __this, Object * cookie, AkCallbackType__Enum type, AkCallbackInfo * info));
IL2CPP_REGISTER_METHOD(0x02714C00, void, ProcessedQueuedCallbacks, ());
IL2CPP_REGISTER_METHOD(0x02714EB0, int64_t, Bind, (WwiseEventSystem_SoundHandleProtected * __this, Event_1 * wiseEvent, ISoundHost * host));
IL2CPP_REGISTER_METHOD(0x02714F20, void, Reset, (WwiseEventSystem_SoundHandleProtected * __this));
IL2CPP_REGISTER_METHOD(0x02714F60, void, __ctor, (WwiseEventSystem_SoundHandleProtected * __this));
IL2CPP_REGISTER_METHOD(0x027150A0, void, __cctor, ());
}
