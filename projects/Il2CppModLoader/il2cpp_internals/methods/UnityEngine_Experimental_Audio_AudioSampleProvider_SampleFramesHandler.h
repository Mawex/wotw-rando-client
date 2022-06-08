using namespace app;

namespace app::methods::UnityEngine::Experimental::Audio::AudioSampleProvider_SampleFramesHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AudioSampleProvider_SampleFramesHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, (AudioSampleProvider_SampleFramesHandler * __this, AudioSampleProvider * provider, uint32_t sampleFrameCount));
IL2CPP_REGISTER_METHOD(0x03144BF0, IAsyncResult *, BeginInvoke, (AudioSampleProvider_SampleFramesHandler * __this, AudioSampleProvider * provider, uint32_t sampleFrameCount, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AudioSampleProvider_SampleFramesHandler * __this, IAsyncResult * result));
}
