using namespace app;

namespace app::methods::PlayFab::Pipeline::EventSendingStage {
IL2CPP_REGISTER_METHOD(0x017AFCF0, void, __ctor, (EventSendingStage * __this, ILogger_1 * logger));
IL2CPP_REGISTER_METHOD(0x017AFE50, void, OnNextInputItem, (EventSendingStage * __this, TitleEventBatch * batch));
IL2CPP_REGISTER_METHODINFO(0x0477AC48, EventSendingStage_OnNextInputItem__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017B0960, void, FulfillPromises, (EventSendingStage * __this, List_1_PlayFab_IPlayFabEmitEventRequest_ * batch, PlayFabResult_1_PlayFab_EventsModels_WriteEventsResponse_ * playFabResult));
}
