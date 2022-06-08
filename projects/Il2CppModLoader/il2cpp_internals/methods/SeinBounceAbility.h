#include <interception_macros.h>

namespace app::methods::SeinBounceAbility {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinBounceAbility * __this));
IL2CPP_REGISTER_METHOD(0x00D94940, void, OnSetReferenceToSein, (SeinBounceAbility * __this));
IL2CPP_REGISTER_METHOD(0x00D94980, void, OnDestroy, (SeinBounceAbility * __this));
IL2CPP_REGISTER_METHOD(0x00D94AA0, void, OnExit, (SeinBounceAbility * __this));
IL2CPP_REGISTER_METHOD(0x00D94AF0, void, UpdateCharacterState, (SeinBounceAbility * __this));
IL2CPP_REGISTER_METHOD(0x005E1300, bool, ShouldJumpAnimationKeepPlaying, (SeinBounceAbility * __this));
IL2CPP_REGISTER_METHODINFO(0x04764588, SeinBounceAbility_ShouldJumpAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (SeinBounceAbility * __this));
}
