#include <interception_macros.h>

namespace app::methods::StickToMovingPlatforms {
IL2CPP_REGISTER_METHOD(0x00650850, void, Awake, (StickToMovingPlatforms * __this));
IL2CPP_REGISTER_METHOD(0x006509F0, void, OnDestroy, (StickToMovingPlatforms * __this));
IL2CPP_REGISTER_METHOD(0x00650B90, void, OnRestoreCheckpoint, (StickToMovingPlatforms * __this));
IL2CPP_REGISTER_METHODINFO(0x04706A10, StickToMovingPlatforms_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00650BA0, void, OnCollisionEnter, (StickToMovingPlatforms * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00650BA0, void, OnCollisionStay, (StickToMovingPlatforms * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00650BB0, void, OnCollision, (StickToMovingPlatforms * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x00650E70, void, UpdateGroundMatrix, (StickToMovingPlatforms * __this));
IL2CPP_REGISTER_METHOD(0x00650EC0, void, FixedUpdate, (StickToMovingPlatforms * __this));
IL2CPP_REGISTER_METHOD(0x00650B90, void, OnPoolSpawned, (StickToMovingPlatforms * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (StickToMovingPlatforms * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (StickToMovingPlatforms * __this));
}
