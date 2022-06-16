#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::PlayFabEventRouter {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_ *, get_Pipelines, (app::PlayFabEventRouter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Pipelines, (app::PlayFabEventRouter * this_ptr, app::IDictionary_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_ * value))
    IL2CPP_REGISTER_METHOD(0x01A29590, void, ctor, (app::PlayFabEventRouter * this_ptr, app::ILogger_1 * logger))
    IL2CPP_REGISTER_METHOD(0x01A297D0, app::Task *, AddAndStartPipeline, (app::PlayFabEventRouter * this_ptr, app::EventPipelineKey__Enum event_pipeline_key, app::IEventPipeline * event_pipeline))
    IL2CPP_REGISTER_METHOD(0x01A298A0, app::IEnumerable_1_System_Threading_Tasks_Task_1_ *, RouteEvent, (app::PlayFabEventRouter * this_ptr, app::IPlayFabEmitEventRequest * request))
}
