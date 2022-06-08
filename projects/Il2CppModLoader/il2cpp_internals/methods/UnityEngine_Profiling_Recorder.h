#include <interception_macros.h>

namespace app::methods::UnityEngine::Profiling::Recorder {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Recorder * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (Recorder * __this, void * ptr));
IL2CPP_REGISTER_METHOD(0x029697E0, void, Finalize, (Recorder * __this));
IL2CPP_REGISTER_METHOD(0x02969920, bool, get_isValid, (Recorder * __this));
IL2CPP_REGISTER_METHOD(0x029699A0, void, DisposeNative, (void * ptr));
IL2CPP_REGISTER_METHOD(0x029699F0, int64_t, get_elapsedNanoseconds, (Recorder * __this));
IL2CPP_REGISTER_METHOD(0x02969A60, int64_t, GetElapsedNanoseconds, (Recorder * __this));
IL2CPP_REGISTER_METHOD(0x02969AB0, int32_t, get_sampleBlockCount, (Recorder * __this));
IL2CPP_REGISTER_METHOD(0x02969B20, int32_t, GetSampleBlockCount, (Recorder * __this));
IL2CPP_REGISTER_METHOD(0x02969B70, void, __cctor, ());
}
