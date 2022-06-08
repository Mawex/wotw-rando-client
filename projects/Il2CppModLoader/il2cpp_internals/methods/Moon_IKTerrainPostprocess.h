#include <interception_macros.h>

namespace app::methods::Moon::IKTerrainPostprocess {
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (IKTerrainPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, OnAddedToAnimator, (IKTerrainPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Process, (IKTerrainPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x008A2C20, void, __ctor, (IKTerrainPostprocess * __this));
}
