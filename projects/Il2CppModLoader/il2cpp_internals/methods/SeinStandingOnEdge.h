#include <interception_macros.h>

namespace app::methods::SeinStandingOnEdge {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x005D0720, CharacterSpriteMirror *, get_SpriteMirror, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_ShouldStandingOnEdgeFacingBackwardsAnimationPlay, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x009922B0, bool, get_ShouldStandingOnEdgeFacingForwardsAnimationPlay, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x00A7CDE0, bool, get_IsStatePerforming, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x00A7CDE0, bool, get_StandingOnEdge, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x00A7CE00, void, OnSetReferenceToSein, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x00A7CEE0, void, UpdateCharacterState, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x00A7D4D0, void, ProcessEffects, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x00A35F10, bool, ShouldStandingOnEdgeFacingBackwardsAnimationKeepPlaying, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHODINFO(0x04734D08, SeinStandingOnEdge_ShouldStandingOnEdgeFacingBackwardsAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009922B0, bool, ShouldStandingOnEdgeFacingForwardsAnimationKeepPlaying, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHODINFO(0x04786BE0, SeinStandingOnEdge_ShouldStandingOnEdgeFacingForwardsAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A7DBC0, bool, StandingOnEdgeRayHit, (SeinStandingOnEdge * __this, float offset, int32_t * reqId));
IL2CPP_REGISTER_METHOD(0x00A7DF70, void, __ctor, (SeinStandingOnEdge * __this));
IL2CPP_REGISTER_METHOD(0x00A7DF90, void, __cctor, ());
}
