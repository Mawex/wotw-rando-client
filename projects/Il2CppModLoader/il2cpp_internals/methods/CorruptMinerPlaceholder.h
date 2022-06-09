#include <interception_macros.h>

namespace app::methods::CorruptMinerPlaceholder {
IL2CPP_REGISTER_METHOD(0x006253C0, MinerSpawnType__Enum, get_SpawnType, (app::CorruptMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x006253D0, GameObject *, get_Prefab, (app::CorruptMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x00DB1110, MinerEntity *, get_CurrentEntity, (app::CorruptMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x00DB11D0, void, Spawn, (app::CorruptMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::CorruptMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::CorruptMinerPlaceholder * this_ptr));
IL2CPP_REGISTER_METHOD(0x00DB12B0, void, __ctor, (app::CorruptMinerPlaceholder * this_ptr));
}
