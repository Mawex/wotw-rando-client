#include <interception_macros.h>

namespace app::methods::Moon::IKPostprocess {
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (IKPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01101010, Transform *, get_StartBone, (IKPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01101250, Transform *, get_EndBone, (IKPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01101490, void, OnAddedToAnimator, (IKPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x01101870, void, ScaleBones, (IKPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x01101C30, void, Process, (IKPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (IKPostprocess * __this));
}
