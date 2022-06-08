#include <interception_macros.h>

namespace app::methods::SeinRun {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D6EE0, SeinRunPuppet *, get_Puppet, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D06F0, CharacterLeftRightMovement *, get_LeftRightMovement, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D0720, CharacterSpriteMirror *, get_SpriteMirror, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D6FA0, bool, get_HasSharplyChangedDirection, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D6FD0, void, Serialize, (SeinRun * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x005D7040, void, OnSetReferenceToSein, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D7120, void, OnEnter, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D71A0, void, HandleControllerInput, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D77D0, void, CheckForSharpTurn, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D7980, void, UpdateCharacterState, (SeinRun * __this));
IL2CPP_REGISTER_METHOD(0x005D8490, bool, ShouldRunAnimationPlaying, (SeinRun * __this));
IL2CPP_REGISTER_METHODINFO(0x0471DD38, SeinRun_ShouldRunAnimationPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D85D0, bool, ShouldJogAnimationPlay, (SeinRun * __this));
IL2CPP_REGISTER_METHODINFO(0x0471DDB0, SeinRun_ShouldJogAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D8710, bool, ShouldWalkAnimationPlay, (SeinRun * __this));
IL2CPP_REGISTER_METHODINFO(0x04796378, SeinRun_ShouldWalkAnimationPlay__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D8850, bool, ShouldAnimationKeepPlaying, (SeinRun * __this));
IL2CPP_REGISTER_METHODINFO(0x04764608, SeinRun_ShouldAnimationKeepPlaying__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005D8980, void, __ctor, (SeinRun * __this));
}
