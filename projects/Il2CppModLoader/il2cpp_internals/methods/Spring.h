#include <interception_macros.h>

namespace app::methods::Spring {
IL2CPP_REGISTER_METHOD(0x009A4D70, void, OnEnable, (Spring * __this));
IL2CPP_REGISTER_METHOD(0x009A4F00, void, OnDisable, (Spring * __this));
IL2CPP_REGISTER_METHOD(0x009A5090, void, OnRestoreCheckpoint, (Spring * __this));
IL2CPP_REGISTER_METHODINFO(0x047168E0, Spring_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009A5230, void, OnCollisionEnter, (Spring * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x009A5630, void, ApplySpringForce, (Spring * __this, GameObject * entity));
IL2CPP_REGISTER_METHOD(0x009A5B20, void, SpringSein, (Spring * __this, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x009A6160, void, SpringKu, (Spring * __this, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x009A6520, void, __ctor, (Spring * __this));
}
