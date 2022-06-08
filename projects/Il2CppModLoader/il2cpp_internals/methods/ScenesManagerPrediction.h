#include <interception_macros.h>

namespace app::methods::ScenesManagerPrediction {
IL2CPP_REGISTER_METHOD(0x01052D80, Vector2, get_CurrentCameraTargetPosition, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x01052DC0, SceneLoadingQueue *, get_Queue, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x01052DF0, ScenesManager *, get_Manager, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, ScenesManagerContext *, get_Context, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x01052E10, List_1_SceneManagerScene_ *, get_ActiveScenes, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x01052E40, ScenesManagerSettings *, get_Settings, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x01065510, void, __ctor, (ScenesManagerPrediction * __this, ScenesManagerContext * context));
IL2CPP_REGISTER_METHOD(0x00F28570, Vector2, get_CurrentCameraTargetPositionExtrapolated, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x010655B0, void, set_CurrentCameraTargetPositionExtrapolated, (ScenesManagerPrediction * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00E71230, Vector2, get_CurrentCameraTargetPositionExtrapolatedShort, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x00E71250, void, set_CurrentCameraTargetPositionExtrapolatedShort, (ScenesManagerPrediction * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x010655D0, Vector2, get_CurrentCameraTargetPositionUnstable, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x010655F0, void, set_CurrentCameraTargetPositionUnstable, (ScenesManagerPrediction * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x00BEB430, Vector2, get_CurrentCameraTargetPositionShortUnstable, (ScenesManagerPrediction * __this));
IL2CPP_REGISTER_METHOD(0x01065610, void, set_CurrentCameraTargetPositionShortUnstable, (ScenesManagerPrediction * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01065630, void, Update, (ScenesManagerPrediction * __this, Vector3 speed, bool forceInstantUpdate));
IL2CPP_REGISTER_METHOD(0x01065C30, Vector2, UpdateExtrapolatedPosition, (ScenesManagerPrediction * __this, Vector2 extrapolatedPosition, Vector2 speed, float speedMultiplier, Color debugColor, ScenesManagerPrediction_UpdatePositionType__Enum updateType));
IL2CPP_REGISTER_METHOD(0x010660B0, void, SetCurrentCameraTargetPosition, (ScenesManagerPrediction * __this, Vector2 extrapolatedPosition, ScenesManagerPrediction_UpdatePositionType__Enum updateType));
IL2CPP_REGISTER_METHOD(0x01066140, void, DrawDebugLine, (ScenesManagerPrediction * __this, Vector3 start, Vector3 end, Color debugColor));
IL2CPP_REGISTER_METHOD(0x010662A0, Vector2, UpdateExtrapolatedPositionWithLimits, (ScenesManagerPrediction * __this, Vector2 extrapolatedPosition, Vector2 speed, float speedMultiplier, Color debugColor));
IL2CPP_REGISTER_METHOD(0x01066FE0, Vector2, GetSmoothPredictionDelta, (ScenesManagerPrediction * __this, Vector2 from, Vector2 to));
IL2CPP_REGISTER_METHOD(0x01067130, void, SetTargetPosition, (ScenesManagerPrediction * __this, Vector3 position));
}
