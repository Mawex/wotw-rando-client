#include <interception_macros.h>

namespace app::methods::Moon::Wwise::ArtificialSoundHostReference {
IL2CPP_REGISTER_METHOD(0x001FE1E0, void, __ctor, (ArtificialSoundHostReference__Boxed * __this, ArtificialSoundHost * host));
IL2CPP_REGISTER_METHOD(0x001FE200, bool, get_IsValid, (ArtificialSoundHostReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FE220, bool, Equals, (ArtificialSoundHostReference__Boxed * __this, ArtificialSoundHostReference other));
IL2CPP_REGISTER_METHOD(0x001FE290, bool, Equals, (ArtificialSoundHostReference__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001FE3A0, int32_t, GetHashCode, (ArtificialSoundHostReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FE3F0, void, Release, (ArtificialSoundHostReference__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001FE420, WwiseEventSystem_SoundHandle, PlayAndReleaseWith, (ArtificialSoundHostReference__Boxed * __this, Event_1 * evt));
IL2CPP_REGISTER_METHOD(0x001FE3F0, void, OnControllingEventComplete, (ArtificialSoundHostReference__Boxed * __this, Object * in_cookie, AkCallbackType__Enum in_type, AkCallbackInfo * in_info));
IL2CPP_REGISTER_METHODINFO(0x04707BF8, ArtificialSoundHostReference_OnControllingEventComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001FE450, ArtificialSoundHostReference, Place, (ArtificialSoundHostReference__Boxed * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x001FE4B0, ArtificialSoundHostReference, AttachTo, (ArtificialSoundHostReference__Boxed * __this, Transform * transform));
}
