using namespace app;

namespace app::methods::PlayFab::Pipeline::OneDSEventPipelineSettings {
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_EventBufferSize, (OneDSEventPipelineSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_EventBufferSize, (OneDSEventPipelineSettings * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_BatchBufferSize, (OneDSEventPipelineSettings * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_BatchBufferSize, (OneDSEventPipelineSettings * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_BatchSize, (OneDSEventPipelineSettings * __this));
IL2CPP_REGISTER_METHOD(0x017B3870, void, set_BatchSize, (OneDSEventPipelineSettings * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04708C98, OneDSEventPipelineSettings_set_BatchSize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, TimeSpan, get_BatchFillTimeout, (OneDSEventPipelineSettings * __this));
IL2CPP_REGISTER_METHOD(0x017B39C0, void, set_BatchFillTimeout, (OneDSEventPipelineSettings * __this, TimeSpan value));
IL2CPP_REGISTER_METHODINFO(0x04729C30, OneDSEventPipelineSettings_set_BatchFillTimeout__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_MaxHttpAttempts, (OneDSEventPipelineSettings * __this));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_MaxHttpAttempts, (OneDSEventPipelineSettings * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x017B3C40, void, __ctor, (OneDSEventPipelineSettings * __this));
IL2CPP_REGISTER_METHOD(0x017B3D10, void, __cctor, (MethodInfo * method));
}
