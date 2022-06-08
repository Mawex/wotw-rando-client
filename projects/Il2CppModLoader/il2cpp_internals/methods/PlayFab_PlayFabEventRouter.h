#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabEventRouter {
IL2CPP_REGISTER_METHOD(0x002FA280, IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_ *, get_Pipelines, (PlayFabEventRouter * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Pipelines, (PlayFabEventRouter * __this, IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_ * value));
IL2CPP_REGISTER_METHOD(0x01A29590, void, __ctor, (PlayFabEventRouter * __this, ILogger_1 * logger));
IL2CPP_REGISTER_METHOD(0x01A297D0, Task *, AddAndStartPipeline, (PlayFabEventRouter * __this, EventPipelineKey__Enum eventPipelineKey, IEventPipeline * eventPipeline));
IL2CPP_REGISTER_METHOD(0x01A298A0, IEnumerable_1_System_Threading_Tasks_Task_1_ *, RouteEvent, (PlayFabEventRouter * __this, IPlayFabEmitEventRequest * request));
}
