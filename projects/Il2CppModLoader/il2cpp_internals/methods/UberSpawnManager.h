#include <interception_macros.h>

namespace app::methods::UberSpawnManager {
IL2CPP_REGISTER_METHOD(0x00446960, float, get_FrameBudgetSpent, (UberSpawnManager * __this));
IL2CPP_REGISTER_METHOD(0x0128A7D0, void, Awake, (UberSpawnManager * __this));
IL2CPP_REGISTER_METHOD(0x0128A860, bool, GetSpawnOk, (UberSpawnManager * __this));
IL2CPP_REGISTER_METHOD(0x0128A8D0, void, FixedUpdate, (UberSpawnManager * __this));
IL2CPP_REGISTER_METHOD(0x0128AD60, void, InstantiateItem, (UberSpawnManager * __this, SimpleGenericPool_1_T_PoolItem_InstantiateUtility_InstantiateInfo_ item));
IL2CPP_REGISTER_METHOD(0x0128AF50, void, StartSpawn, (UberSpawnManager * __this));
IL2CPP_REGISTER_METHOD(0x0128AFB0, void, StopSpawn, (UberSpawnManager * __this));
IL2CPP_REGISTER_METHOD(0x00506160, void, __ctor, (UberSpawnManager * __this));
}
