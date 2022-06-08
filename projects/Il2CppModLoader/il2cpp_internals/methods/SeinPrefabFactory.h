#include <interception_macros.h>

namespace app::methods::SeinPrefabFactory {
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetReferenceToSein, (SeinPrefabFactory * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x005CC5F0, void, Awake, (SeinPrefabFactory * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (SeinPrefabFactory * __this));
IL2CPP_REGISTER_METHOD(0x005CF710, void, EnsureRightPrefabsAreThereForAbilities, (SeinPrefabFactory * __this));
IL2CPP_REGISTER_METHOD(0x005D04F0, void, PushState, (SeinPrefabFactory * __this));
IL2CPP_REGISTER_METHOD(0x005D0590, void, PopState, (SeinPrefabFactory * __this));
IL2CPP_REGISTER_METHOD(0x005D0630, void, __ctor, (SeinPrefabFactory * __this));
}
