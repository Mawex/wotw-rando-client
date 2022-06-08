#include <interception_macros.h>

namespace app::methods::CartFlip {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (CartFlip * __this));
IL2CPP_REGISTER_METHOD(0x00B375D0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00B37650, bool, get_IsFlippedHorizontaly, (CartFlip * __this));
IL2CPP_REGISTER_METHOD(0x00B37730, bool, get_IsFlippedVerticaly, (CartFlip * __this));
IL2CPP_REGISTER_METHOD(0x00B37740, void, Awake, (CartFlip * __this));
IL2CPP_REGISTER_METHOD(0x00B37800, void, FixedUpdate, (CartFlip * __this));
IL2CPP_REGISTER_METHOD(0x00B37910, void, ResetFflipRailDamageDelay, ());
IL2CPP_REGISTER_METHOD(0x00B37990, bool, DelayDamageIsOver, ());
IL2CPP_REGISTER_METHOD(0x00B37A20, void, Flip, (CartFlip * __this, Rail * currentRail));
IL2CPP_REGISTER_METHOD(0x00B38080, void, HorizontalFlip, (CartFlip * __this));
IL2CPP_REGISTER_METHOD(0x00B381F0, void, FlipVisual, (CartFlip * __this, Vector3 newLocation, Vector2 newUpDirection));
IL2CPP_REGISTER_METHOD(0x00B38510, void, CheckFlipFromDeactivatedRails, (CartFlip * __this));
IL2CPP_REGISTER_METHOD(0x00B386E0, void, PlaySequence, (CartFlip * __this, LegacyTimelineSequence * sequence));
IL2CPP_REGISTER_METHOD(0x00B38750, Collider *, CheckAboveCart, (CartFlip * __this, Collider * ignoredCollider, Rail * currentRail, CapsuleCollider * capsuleCollider, Transform * goThroughAboveRailRaycastPosition, int32_t railMask));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (CartFlip * __this));
}
