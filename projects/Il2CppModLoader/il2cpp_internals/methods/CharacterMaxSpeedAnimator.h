#include <interception_macros.h>

namespace app::methods::CharacterMaxSpeedAnimator {
IL2CPP_REGISTER_METHOD(0x01303090, void, OnStartPlay, (CharacterMaxSpeedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01303280, void, OnStopPlay, (CharacterMaxSpeedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (CharacterMaxSpeedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (CharacterMaxSpeedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01303490, void, SampleValue, (CharacterMaxSpeedAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (CharacterMaxSpeedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (CharacterMaxSpeedAnimator * __this));
IL2CPP_REGISTER_METHOD(0x013034E0, void, OnHorizontalInputCalculate, (CharacterMaxSpeedAnimator * __this));
IL2CPP_REGISTER_METHODINFO(0x04778E90, CharacterMaxSpeedAnimator_OnHorizontalInputCalculate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00990E80, void, __ctor, (CharacterMaxSpeedAnimator * __this));
}
