#include <interception_macros.h>

namespace app::methods::ScenesManagerPrediction {
IL2CPP_REGISTER_METHOD(0x01052D80, Vector2, get_CurrentCameraTargetPosition, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x01052DC0, SceneLoadingQueue *, get_Queue, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x01052DF0, ScenesManager *, get_Manager, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, ScenesManagerContext *, get_Context, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x01052E10, List_1_SceneManagerScene_ *, get_ActiveScenes, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x01052E40, ScenesManagerSettings *, get_Settings, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x01065510, void, __ctor, (app::ScenesManagerPrediction * this_ptr, app::ScenesManagerContext * context));
IL2CPP_REGISTER_METHOD(0x00F28570, Vector2, get_CurrentCameraTargetPositionExtrapolated, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x010655B0, void, set_CurrentCameraTargetPositionExtrapolated, (app::ScenesManagerPrediction * this_ptr, app::Vector2 value));
IL2CPP_REGISTER_METHOD(0x00E71230, Vector2, get_CurrentCameraTargetPositionExtrapolatedShort, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00E71250, void, set_CurrentCameraTargetPositionExtrapolatedShort, (app::ScenesManagerPrediction * this_ptr, app::Vector2 value));
IL2CPP_REGISTER_METHOD(0x010655D0, Vector2, get_CurrentCameraTargetPositionUnstable, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x010655F0, void, set_CurrentCameraTargetPositionUnstable, (app::ScenesManagerPrediction * this_ptr, app::Vector2 value));
IL2CPP_REGISTER_METHOD(0x00BEB430, Vector2, get_CurrentCameraTargetPositionShortUnstable, (app::ScenesManagerPrediction * this_ptr));
IL2CPP_REGISTER_METHOD(0x01065610, void, set_CurrentCameraTargetPositionShortUnstable, (app::ScenesManagerPrediction * this_ptr, app::Vector2 value));
IL2CPP_REGISTER_METHOD(0x01065630, void, Update, (app::ScenesManagerPrediction * this_ptr, app::Vector3 speed, bool force_instant_update));
IL2CPP_REGISTER_METHOD(0x01065C30, Vector2, UpdateExtrapolatedPosition, (app::ScenesManagerPrediction * this_ptr, app::Vector2 extrapolated_position, app::Vector2 speed, float speed_multiplier, app::Color debug_color, app::ScenesManagerPrediction_UpdatePositionType__Enum update_type));
IL2CPP_REGISTER_METHOD(0x010660B0, void, SetCurrentCameraTargetPosition, (app::ScenesManagerPrediction * this_ptr, app::Vector2 extrapolated_position, app::ScenesManagerPrediction_UpdatePositionType__Enum update_type));
IL2CPP_REGISTER_METHOD(0x01066140, void, DrawDebugLine, (app::ScenesManagerPrediction * this_ptr, app::Vector3 start, app::Vector3 end, app::Color debug_color));
IL2CPP_REGISTER_METHOD(0x010662A0, Vector2, UpdateExtrapolatedPositionWithLimits, (app::ScenesManagerPrediction * this_ptr, app::Vector2 extrapolated_position, app::Vector2 speed, float speed_multiplier, app::Color debug_color));
IL2CPP_REGISTER_METHOD(0x01066FE0, Vector2, GetSmoothPredictionDelta, (app::ScenesManagerPrediction * this_ptr, app::Vector2 from, app::Vector2 to));
IL2CPP_REGISTER_METHOD(0x01067130, void, SetTargetPosition, (app::ScenesManagerPrediction * this_ptr, app::Vector3 position));
}
