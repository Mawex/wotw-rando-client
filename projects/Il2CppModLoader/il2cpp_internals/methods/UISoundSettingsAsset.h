#include <interception_macros.h>

namespace app::methods::UISoundSettingsAsset {
IL2CPP_REGISTER_METHOD(0x013DCDF0, void, PlaySoundEvent, (UISoundSettingsAsset * __this, Event_1 * soundEvent));
IL2CPP_REGISTER_METHOD(0x013DCEC0, WwiseEventSystem_SoundHandle, AllocateLoopingSoundHandle, (UISoundSettingsAsset * __this, Event_1 * soundEvent));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (UISoundSettingsAsset * __this));
}
