using namespace app;

namespace app::methods::PlayFab::Pipeline::TitleEventBatch {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_TitleId, (TitleEventBatch * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_TitleId, (TitleEventBatch * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_PlayFab_IPlayFabEmitEventRequest_ *, get_Events, (TitleEventBatch * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Events, (TitleEventBatch * __this, List_1_PlayFab_IPlayFabEmitEventRequest_ * value));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (TitleEventBatch * __this, String * titleId, List_1_PlayFab_IPlayFabEmitEventRequest_ * events));
}
