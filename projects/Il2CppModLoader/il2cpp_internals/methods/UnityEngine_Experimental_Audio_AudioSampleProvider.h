#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Audio::AudioSampleProvider {
IL2CPP_REGISTER_METHOD(0x03144810, void, Finalize, (AudioSampleProvider * __this));
IL2CPP_REGISTER_METHOD(0x03144960, void, Dispose, (AudioSampleProvider * __this));
IL2CPP_REGISTER_METHOD(0x024AD170, uint32_t, get_id, (AudioSampleProvider * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_id, (AudioSampleProvider * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x03144A60, void, InvokeSampleFramesAvailable, (AudioSampleProvider * __this, int32_t sampleFrameCount));
IL2CPP_REGISTER_METHOD(0x03144A80, void, InvokeSampleFramesOverflow, (AudioSampleProvider * __this, int32_t droppedSampleFrameCount));
IL2CPP_REGISTER_METHOD(0x03144AA0, void, InternalSetScriptingPtr, (uint32_t providerId, AudioSampleProvider * provider));
}
