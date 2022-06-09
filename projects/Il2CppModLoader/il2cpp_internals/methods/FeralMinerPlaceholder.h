#include <interception_macros.h>

namespace app::methods::FeralMinerPlaceholder {
IL2CPP_REGISTER_METHOD(0x006253C0, MinerSpawnType__Enum, get_SpawnType, (app::FeralMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x006253D0, GameObject *, get_Prefab, (app::FeralMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::FeralMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x0099AC10, MinerEntity *, get_CurrentEntity, (app::FeralMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x0099ACD0, void, Spawn, (app::FeralMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::FeralMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x0099ADB0, void, __ctor, (app::FeralMinerPlaceholder * this_ptr));
}
