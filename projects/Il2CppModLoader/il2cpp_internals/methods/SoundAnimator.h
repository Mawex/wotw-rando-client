#include <interception_macros.h>

namespace app::methods::SoundAnimator {
IL2CPP_REGISTER_METHOD(0x00EE4F90, SoundDescriptor *, GetSoundDescriptor, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00EE5080, SoundDescriptor *, GetCachedSoundDescriptor, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00EE50B0, void, OnStartPlay, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00EE5360, void, OnStopPlay, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00EE5480, void, SampleValue, (SoundAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00EE5600, float, ConvertTimeToLoopTime, (SoundAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x00EE5670, void, OnDisable, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsLooping, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00EE5790, float, get_Duration, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00EE57C0, float, get_SoundClipLength, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00EE5A00, void, __ctor, (SoundAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00EE5A20, void, _OnStartPlay_b__14_0, (SoundAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x0474B7F0, SoundAnimator__OnStartPlay_b__14_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EE5A20, void, _SampleValue_b__17_0, (SoundAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x047766E8, SoundAnimator__SampleValue_b__17_0__MethodInfo);
}
