#include <interception_macros.h>

namespace app::methods::Moon::StickSpawner {
IL2CPP_REGISTER_METHOD(0x00E31ED0, Input_InputButtonProcessor *, get_ActivationButton, (StickSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00DC9AD0, void, Awake, (StickSpawner * __this));
IL2CPP_REGISTER_METHOD(0x00E31F70, GameObject *, InstantiatePrefab, (StickSpawner * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00E322D0, bool, CanInteractWithCharacter, (StickSpawner * __this, ICharacter * character));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (StickSpawner * __this));
}
