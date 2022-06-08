#include <interception_macros.h>

namespace app::methods::CameraShake {
IL2CPP_REGISTER_METHOD(0x00B1C3B0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00B1C480, void, OnPoolSpawned, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1C4D0, Vector3, get_CurrentOffset, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1C6A0, Vector3, get_CurrentRotation, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1C880, bool, get_IsLooping, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1C9B0, void, Awake, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1C9C0, void, SampleValue, (CameraShake * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00B1CA10, float, get_Duration, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00A3CF90, void, PerformTheShake, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1CB00, float, get_ModifiedStrength, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1CFA0, void, OnEnable, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1D080, void, OnDisable, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1D170, TimelineEntity *, Convert, (CameraShake * __this, Transform * target));
IL2CPP_REGISTER_METHOD(0x00B1D310, void, __ctor, (CameraShake * __this));
IL2CPP_REGISTER_METHOD(0x00B1D340, void, __cctor, ());
}
