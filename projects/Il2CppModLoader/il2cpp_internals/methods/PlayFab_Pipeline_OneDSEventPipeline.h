using namespace app;

namespace app::methods::PlayFab::Pipeline::OneDSEventPipeline {
IL2CPP_REGISTER_METHOD(0x002FB950, OneDSEventPipelineSettings *, get_Settings, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Task *, get_PipelineTask, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x017B0D30, void, __ctor, (OneDSEventPipeline * __this, OneDSEventPipelineSettings * settings, ILogger_1 * logger));
IL2CPP_REGISTER_METHODINFO(0x0478F470, OneDSEventPipeline__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017B11E0, Task *, StartAsync, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x017B12E0, Task *, StartAsync, (OneDSEventPipeline * __this, CancellationToken cancellationToken));
IL2CPP_REGISTER_METHOD(0x017B13F0, void, Stop, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x017B1640, void, Complete, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x017B18A0, bool, IntakeEvent, (OneDSEventPipeline * __this, IPlayFabEmitEventRequest * request));
IL2CPP_REGISTER_METHOD(0x017B1BB0, Task_1_PlayFab_IPlayFabEmitEventResponse_ *, IntakeEventAsync, (OneDSEventPipeline * __this, IPlayFabEmitEventRequest * request));
IL2CPP_REGISTER_METHOD(0x017B1CD0, void, Cancel, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x017B1D80, void, ThrowIfDisposed, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHODINFO(0x04701D08, OneDSEventPipeline_ThrowIfDisposed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017B1E30, void, Dispose, (OneDSEventPipeline * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x017B1E80, void, Dispose, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x017B1FF0, void, ResetPipelineTask, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x017B2170, void, ResetBatchingTask, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x017B22F0, void, ResetSendingTask, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHOD(0x017B2470, void, _ResetBatchingTask_b__31_0, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHODINFO(0x0470D340, OneDSEventPipeline__ResetBatchingTask_b__31_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017B25A0, void, _ResetSendingTask_b__32_0, (OneDSEventPipeline * __this));
IL2CPP_REGISTER_METHODINFO(0x047253D0, OneDSEventPipeline__ResetSendingTask_b__32_0__MethodInfo);
}
