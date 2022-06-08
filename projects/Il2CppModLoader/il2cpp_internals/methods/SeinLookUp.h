#include <interception_macros.h>

namespace app::methods::SeinLookUp {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinLookUp * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinLookUp * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinLookUp * __this));
IL2CPP_REGISTER_METHOD(0x008A1C30, void, OnSetReferenceToSein, (SeinLookUp * __this));
IL2CPP_REGISTER_METHOD(0x008A1D10, void, UpdateCharacterState, (SeinLookUp * __this));
IL2CPP_REGISTER_METHOD(0x008A27B0, bool, ShouldLookUpAnimationKeepPlaying, (SeinLookUp * __this));
IL2CPP_REGISTER_METHODINFO(0x047068B8, SeinLookUp_ShouldLookUpAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008A28B0, void, Serialize, (SeinLookUp * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x008A2940, void, __ctor, (SeinLookUp * __this));
}
