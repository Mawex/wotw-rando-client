using namespace app;

namespace app::methods::PlayFab::PlayFabEmitEventResponse {
IL2CPP_REGISTER_METHOD(0x002FA280, PlayFabEvent *, get_Event, (PlayFabEmitEventResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Event, (PlayFabEmitEventResponse * __this, PlayFabEvent * value));
IL2CPP_REGISTER_METHOD(0x00529FF0, EmitEventResult__Enum, get_EmitEventResult, (PlayFabEmitEventResponse * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_EmitEventResult, (PlayFabEmitEventResponse * __this, EmitEventResult__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB950, PlayFabError *, get_PlayFabError, (PlayFabEmitEventResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_PlayFabError, (PlayFabEmitEventResponse * __this, PlayFabError * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, WriteEventsResponse *, get_WriteEventsResponse, (PlayFabEmitEventResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_WriteEventsResponse, (PlayFabEmitEventResponse * __this, WriteEventsResponse * value));
IL2CPP_REGISTER_METHOD(0x002FB990, IList_1_PlayFab_IPlayFabEmitEventRequest_ *, get_Batch, (PlayFabEmitEventResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Batch, (PlayFabEmitEventResponse * __this, IList_1_PlayFab_IPlayFabEmitEventRequest_ * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, uint64_t, get_BatchNumber, (PlayFabEmitEventResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_BatchNumber, (PlayFabEmitEventResponse * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PlayFabEmitEventResponse * __this));
}
