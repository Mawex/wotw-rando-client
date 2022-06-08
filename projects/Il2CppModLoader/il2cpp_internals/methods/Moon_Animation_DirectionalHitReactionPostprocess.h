#include <interception_macros.h>

namespace app::methods::Moon::Animation::DirectionalHitReactionPostprocess {
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (DirectionalHitReactionPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B01B10, float, get_Duration, (DirectionalHitReactionPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01B01C70, void, Play, (DirectionalHitReactionPostprocess * __this, Vector3 direction, float strengthMultiplier));
IL2CPP_REGISTER_METHOD(0x01B01CD0, void, Process, (DirectionalHitReactionPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01B02080, void, __ctor, (DirectionalHitReactionPostprocess * __this));
}
