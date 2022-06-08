#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Audio::AudioSampleProvider_ConsumeSampleFramesNativeFunction {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AudioSampleProvider_ConsumeSampleFramesNativeFunction * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CE3D50, uint32_t, Invoke, (AudioSampleProvider_ConsumeSampleFramesNativeFunction * __this, uint32_t providerId, void * interleavedSampleFrames, uint32_t sampleFrameCount));
IL2CPP_REGISTER_METHOD(0x03144B00, IAsyncResult *, BeginInvoke, (AudioSampleProvider_ConsumeSampleFramesNativeFunction * __this, uint32_t providerId, void * interleavedSampleFrames, uint32_t sampleFrameCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (AudioSampleProvider_ConsumeSampleFramesNativeFunction * __this, IAsyncResult * result));
}
