#include <interception_macros.h>

namespace app::methods::SpiderEnemy {
IL2CPP_REGISTER_METHOD(0x011BB730, void, Awake, (SpiderEnemy * __this));
IL2CPP_REGISTER_METHOD(0x011BB7F0, void, FixedUpdate, (SpiderEnemy * __this));
IL2CPP_REGISTER_METHOD(0x011BC500, Vector2, GetSpringForce, (SpiderEnemy * __this, float spring, float distance, Vector2 actualDistance));
IL2CPP_REGISTER_METHOD(0x011BC640, void, __ctor, (SpiderEnemy * __this));
}
