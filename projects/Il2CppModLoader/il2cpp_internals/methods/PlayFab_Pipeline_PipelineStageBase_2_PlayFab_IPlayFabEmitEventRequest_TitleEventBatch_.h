#include <interception_macros.h>

namespace app::methods::PlayFab::Pipeline::PipelineStageBase_2_PlayFab::IPlayFabEmitEventRequest_TitleEventBatch_ {
IL2CPP_REGISTER_METHOD(0x018E6D70, void, __ctor, (PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047489A8, PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D16110, void, RunStage, (PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * __this, BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ * input, BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_ * output, CancellationTokenSource * cts));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitStage, (PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * __this));
IL2CPP_REGISTER_METHOD(0x01D164A0, void, StoreOutput, (PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ * __this, TitleEventBatch * outputItem));
}
