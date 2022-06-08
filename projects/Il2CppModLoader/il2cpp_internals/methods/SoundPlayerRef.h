#include <interception_macros.h>

namespace app::methods::SoundPlayerRef {
IL2CPP_REGISTER_METHOD(0x00107C00, SoundPlayer *, get_Player, (SoundPlayerRef__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120A70, bool, get_IsNull, (SoundPlayerRef__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120A80, void, Play, (SoundPlayerRef__Boxed * __this, SoundDescriptor * soundDescriptor, Vector3 position, Transform * attachTo));
IL2CPP_REGISTER_METHOD(0x00120AB0, void, FadeOut, (SoundPlayerRef__Boxed * __this, float time, bool shouldDestroyOnFadeOut));
IL2CPP_REGISTER_METHOD(0x00120B90, void, Nullify, (SoundPlayerRef__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x047885D8, SoundPlayerRef_Nullify__MethodInfo);
}
