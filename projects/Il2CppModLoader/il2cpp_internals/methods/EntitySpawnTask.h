#include <interception_macros.h>

namespace app::methods::EntitySpawnTask {
IL2CPP_REGISTER_METHOD(0x002FBC00, EntitySpawnSetup *, get_SpawnSetup, (EntitySpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_SpawnSetup, (EntitySpawnTask * __this, EntitySpawnSetup * value));
IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_AreDamageDealersActive, (EntitySpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x002FBC10, void, SetCustomSpawnSetup, (EntitySpawnTask * __this, EntitySpawnSetup * spawnSetup));
IL2CPP_REGISTER_METHOD(0x00CA1CB0, void, OnInitializeTask, (EntitySpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CA1F30, void, OnEnterTask, (EntitySpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CA2170, void, OnExitTask, (EntitySpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CA2310, void, SetActivateDamageDealers, (EntitySpawnTask * __this, bool activate));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetPlatformMovementColliderEnabledState, (EntitySpawnTask * __this, bool enable));
IL2CPP_REGISTER_METHOD(0x00CA23D0, void, __ctor, (EntitySpawnTask * __this));
IL2CPP_REGISTER_METHOD(0x00CA2530, void, _OnInitializeTask_b__10_0, (EntitySpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x04792EB8, EntitySpawnTask__OnInitializeTask_b__10_0__MethodInfo);
}
