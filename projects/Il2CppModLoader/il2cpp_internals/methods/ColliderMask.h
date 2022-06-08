#include <interception_macros.h>

namespace app::methods::ColliderMask {
IL2CPP_REGISTER_METHOD(0x012CF6E0, void, OnEnable, (ColliderMask * __this));
IL2CPP_REGISTER_METHOD(0x012CF880, void, OnDisable, (ColliderMask * __this));
IL2CPP_REGISTER_METHOD(0x012CFA20, void, OnPostRestoreCheckpoint, (ColliderMask * __this));
IL2CPP_REGISTER_METHODINFO(0x047908D8, ColliderMask_OnPostRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012CFB30, void, OnTriggerEnter, (ColliderMask * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x012CFC30, void, OnTriggerExit, (ColliderMask * __this, Collider * other));
IL2CPP_REGISTER_METHOD(0x012CFD30, bool, ValidLayer, (ColliderMask * __this, int32_t layer));
IL2CPP_REGISTER_METHOD(0x012CFD50, void, SetIgnoreCollision, (ColliderMask * __this, Collider * intersecting, bool shouldIgnore));
IL2CPP_REGISTER_METHOD(0x012CFFB0, void, __ctor, (ColliderMask * __this));
}
