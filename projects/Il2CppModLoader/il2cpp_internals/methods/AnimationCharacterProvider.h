#include <interception_macros.h>

namespace app::methods::AnimationCharacterProvider {
IL2CPP_REGISTER_METHOD(0x004FBE50, MoonAnimator *, GetAnimator, (CharacterFactory_Characters__Enum characterType));
IL2CPP_REGISTER_METHODINFO(0x04754E90, AnimationCharacterProvider_GetAnimator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004FC060, void, Destroy, (CharacterFactory_Characters__Enum characterType));
IL2CPP_REGISTER_METHODINFO(0x04788328, AnimationCharacterProvider_Destroy__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004FC0D0, MoonAnimator *, get_SeinAnimator, ());
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (AnimationCharacterProvider * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
