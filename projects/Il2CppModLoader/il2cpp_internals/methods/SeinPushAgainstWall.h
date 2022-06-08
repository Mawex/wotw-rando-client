using namespace app;

namespace app::methods::SeinPushAgainstWall {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, CharacterPlatformMovement *, get_PlatformMovement, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHOD(0x005D0720, CharacterSpriteMirror *, get_SpriteMirror, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHOD(0x005D0760, bool, get_ShouldPushAgainstWallAnimationPlay, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHOD(0x005D0770, void, OnSetReferenceToSein, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHOD(0x005D0870, void, UpdateCharacterState, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHOD(0x005D0BD0, bool, CanDash, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHOD(0x005D0E00, bool, ShouldPushAgainstWallAnimationKeepPlaying, (SeinPushAgainstWall * __this));
IL2CPP_REGISTER_METHODINFO(0x0476BA80, SeinPushAgainstWall_ShouldPushAgainstWallAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (SeinPushAgainstWall * __this));
}
