#include <interception_macros.h>

namespace app::methods::SoundAction {
IL2CPP_REGISTER_METHOD(0x00EE4B60, void, Perform, (SoundAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00EE4D80, String *, get_TargetName, (SoundAction * __this));
IL2CPP_REGISTER_METHOD(0x00EE4E60, String *, GetNiceName, (SoundAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (SoundAction * __this));
}
