using namespace app;

namespace app::methods::CharacterTimelineTurning {
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsDone, (CharacterTimelineTurning * __this));
IL2CPP_REGISTER_METHOD(0x013163D0, bool, get_IsPlaying, (CharacterTimelineTurning * __this));
IL2CPP_REGISTER_METHOD(0x013163F0, void, Play, (CharacterTimelineTurning * __this, ICharacter * character, bool faceLeft, Action * onStop));
IL2CPP_REGISTER_METHOD(0x013167F0, void, OnAnimationEnd, (CharacterTimelineTurning * __this));
IL2CPP_REGISTER_METHODINFO(0x04739610, CharacterTimelineTurning_OnAnimationEnd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01316AE0, void, Flip, (CharacterTimelineTurning * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B8D8, CharacterTimelineTurning_Flip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01316B80, void, Stop, (CharacterTimelineTurning * __this));
IL2CPP_REGISTER_METHOD(0x01316C70, bool, CanBeCancelled, (CharacterTimelineTurning * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CharacterTimelineTurning * __this));
}
