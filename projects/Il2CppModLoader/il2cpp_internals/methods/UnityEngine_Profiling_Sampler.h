using namespace app;

namespace app::methods::UnityEngine::Profiling::Sampler {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Sampler * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (Sampler * __this, void * ptr));
IL2CPP_REGISTER_METHOD(0x02969CB0, bool, get_isValid, (Sampler * __this));
IL2CPP_REGISTER_METHOD(0x02969D30, Recorder *, GetRecorder, (Sampler * __this));
IL2CPP_REGISTER_METHOD(0x02969F30, Sampler *, Get, (String * name));
IL2CPP_REGISTER_METHOD(0x0296A130, String *, GetSamplerName, (Sampler * __this));
IL2CPP_REGISTER_METHOD(0x0296A180, String *, get_name, (Sampler * __this));
IL2CPP_REGISTER_METHOD(0x0296A250, void *, GetRecorderInternal, (void * ptr));
IL2CPP_REGISTER_METHOD(0x0296A2A0, void *, GetSamplerInternal, (String * name));
IL2CPP_REGISTER_METHOD(0x0296A2F0, void, __cctor, (MethodInfo * method));
}
