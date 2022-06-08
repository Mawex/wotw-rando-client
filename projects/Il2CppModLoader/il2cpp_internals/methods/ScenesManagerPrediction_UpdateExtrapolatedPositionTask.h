#include <interception_macros.h>

namespace app::methods::ScenesManagerPrediction_UpdateExtrapolatedPositionTask {
IL2CPP_REGISTER_METHOD(0x00124170, void, __ctor, (ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed * __this, ScenesManagerPrediction * owner, Vector2 extrapolatedPosition, Vector2 speed, float speedMultiplier, Color debugColor, ScenesManagerPrediction_UpdatePositionType__Enum updateType));
IL2CPP_REGISTER_METHOD(0x001241C0, bool, get_IsFinished, (ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001241D0, void, Update, (ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001241F0, void, UpdateIterationStart, (ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00124200, void, UpdateIterationContinuation, (ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed * __this));
}
