#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabEmitEventRequest {
IL2CPP_REGISTER_METHOD(0x002FA280, PlayFabEvent *, get_Event, (PlayFabEmitEventRequest * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Event, (PlayFabEmitEventRequest * __this, PlayFabEvent * value));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_TitleId, (PlayFabEmitEventRequest * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_TitleId, (PlayFabEmitEventRequest * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB950, TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_ *, get_ResultPromise, (PlayFabEmitEventRequest * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ResultPromise, (PlayFabEmitEventRequest * __this, TaskCompletionSource_1_PlayFab_IPlayFabEmitEventResponse_ * value));
IL2CPP_REGISTER_METHOD(0x01A273C0, void, __ctor, (PlayFabEmitEventRequest * __this));
}
