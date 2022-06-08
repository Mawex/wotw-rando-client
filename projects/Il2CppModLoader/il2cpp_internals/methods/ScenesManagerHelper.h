#include <interception_macros.h>

namespace app::methods::ScenesManagerHelper {
IL2CPP_REGISTER_METHOD(0x010648E0, bool, LinecastIgnoringSand, (Vector3 p1, Vector3 p2, RaycastHit * hitInfo, LayerMask raycastMask));
IL2CPP_REGISTER_METHOD(0x01064C80, Vector2, GetExtrapolatedPosition, (Vector2 currentPosition, Vector2 extrapolatedPosition, Vector2 speed, float speedMultiplier, float maxPredictionDistance, LayerMask raycastMask, ScenesManagerContext * context, Color debugColor));
IL2CPP_REGISTER_METHOD(0x01065480, void, __cctor, ());
}
