#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::AnimationWarping {
IL2CPP_REGISTER_METHOD(0x022085F0, void, Start, (AnimationWarping * __this));
IL2CPP_REGISTER_METHOD(0x02208610, float, GetWarpWeight, (AnimationWarping * __this, int32_t warpIndex));
IL2CPP_REGISTER_METHOD(0x022088B0, void, OnModifyOffset, (AnimationWarping * __this));
IL2CPP_REGISTER_METHOD(0x02208ED0, void, OnDisable, (AnimationWarping * __this));
IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (AnimationWarping * __this));
}
