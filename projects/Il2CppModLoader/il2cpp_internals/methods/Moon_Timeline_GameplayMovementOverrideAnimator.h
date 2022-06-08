#include <interception_macros.h>

namespace app::methods::Moon::Timeline::GameplayMovementOverrideAnimator {
IL2CPP_REGISTER_METHOD(0x0076D140, void, OnStartPlayback, (GameplayMovementOverrideAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0076D150, void, ModifyGravityPlatformMovementSettings, (GameplayMovementOverrideAnimator * __this, GravityPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04774060, GameplayMovementOverrideAnimator_ModifyGravityPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417920, UpdateCategory__Enum, get_UpdateCategory, (GameplayMovementOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0076D1A0, CharacterGravity *, get_Gravity, (GameplayMovementOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0076D2D0, CharacterLeftRightMovement *, get_LeftRightMovement, (GameplayMovementOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0076D400, AnimationSwapSet *, get_CurrentSet, (GameplayMovementOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0076D4D0, bool, get_BlockTurning, (GameplayMovementOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0076D660, void, OnDisable, (GameplayMovementOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0076D670, void, OnDestroy, (GameplayMovementOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0076D690, void, UnsubscribeFromEvents, (GameplayMovementOverrideAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04771600, GameplayMovementOverrideAnimator_UnsubscribeFromEvents__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0076D940, void, ModifyHorizontalPlatformMovementSettings, (GameplayMovementOverrideAnimator * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x04702890, GameplayMovementOverrideAnimator_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0076DD10, void, OnStopPlayback, (GameplayMovementOverrideAnimator * __this));
IL2CPP_REGISTER_METHOD(0x0076DF80, void, OnUpdateEntity, (GameplayMovementOverrideAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0076E630, void, __ctor, (GameplayMovementOverrideAnimator * __this));
}
