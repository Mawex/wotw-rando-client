#include <interception_macros.h>

namespace app::methods::UnityEngine::AudioClip {
IL2CPP_REGISTER_METHOD(0x0313DB80, void, __ctor, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DC20, float, get_length, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DC70, int32_t, get_samples, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DCC0, int32_t, get_channels, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DD10, int32_t, get_frequency, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DD60, bool, get_isReadyToPlay, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DDB0, AudioClipLoadType__Enum, get_loadType, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DE00, bool, LoadAudioData, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DE50, bool, UnloadAudioData, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DEA0, bool, get_preloadAudioData, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DEF0, bool, get_ambisonic, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DF40, AudioDataLoadState__Enum, get_loadState, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DF90, bool, get_loadInBackground, (AudioClip * __this));
IL2CPP_REGISTER_METHOD(0x0313DFE0, bool, GetData, (AudioClip * __this, Single__Array * data, int32_t offsetSamples));
IL2CPP_REGISTER_METHOD(0x0313E050, bool, SetData, (AudioClip * __this, Single__Array * data, int32_t offsetSamples));
IL2CPP_REGISTER_METHOD(0x0313E0C0, AudioClip *, Create, (String * name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream));
IL2CPP_REGISTER_METHOD(0x0313E0F0, AudioClip *, Create, (String * name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream, AudioClip_PCMReaderCallback * pcmreadercallback));
IL2CPP_REGISTER_METHOD(0x0313E120, AudioClip *, Create, (String * name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream, AudioClip_PCMReaderCallback * pcmreadercallback, AudioClip_PCMSetPositionCallback * pcmsetpositioncallback));
IL2CPP_REGISTER_METHOD(0x0313E160, AudioClip *, Create, (String * name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream));
IL2CPP_REGISTER_METHOD(0x0313E190, AudioClip *, Create, (String * name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream, AudioClip_PCMReaderCallback * pcmreadercallback));
IL2CPP_REGISTER_METHOD(0x0313E1C0, AudioClip *, Create, (String * name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream, AudioClip_PCMReaderCallback * pcmreadercallback, AudioClip_PCMSetPositionCallback * pcmsetpositioncallback));
IL2CPP_REGISTER_METHODINFO(0x0470EA78, AudioClip_Create_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0313E5A0, void, add_m_PCMReaderCallback, (AudioClip * __this, AudioClip_PCMReaderCallback * value));
IL2CPP_REGISTER_METHOD(0x0313E690, void, remove_m_PCMReaderCallback, (AudioClip * __this, AudioClip_PCMReaderCallback * value));
IL2CPP_REGISTER_METHOD(0x0313E780, void, add_m_PCMSetPositionCallback, (AudioClip * __this, AudioClip_PCMSetPositionCallback * value));
IL2CPP_REGISTER_METHOD(0x0313E870, void, remove_m_PCMSetPositionCallback, (AudioClip * __this, AudioClip_PCMSetPositionCallback * value));
IL2CPP_REGISTER_METHOD(0x02C79D90, void, InvokePCMReaderCallback_Internal, (AudioClip * __this, Single__Array * data));
IL2CPP_REGISTER_METHOD(0x0313E960, void, InvokePCMSetPositionCallback_Internal, (AudioClip * __this, int32_t position));
IL2CPP_REGISTER_METHOD(0x0313E980, AudioClip *, Construct_Internal, ());
IL2CPP_REGISTER_METHOD(0x0313E9D0, void, Init_Internal, (AudioClip * __this, String * name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream));
}
