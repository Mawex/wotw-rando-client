#include <interception_macros.h>

namespace app::methods::Moon::AdditiveBodyRotation {
IL2CPP_REGISTER_METHOD(0x013325F0, void, OnAddedToAnimator, (AdditiveBodyRotation * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (AdditiveBodyRotation * __this));
IL2CPP_REGISTER_METHOD(0x013327B0, void, OnDrawGizmosSelected, (AdditiveBodyRotation * __this));
IL2CPP_REGISTER_METHOD(0x01332CC0, void, Process, (AdditiveBodyRotation * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01333330, void, __ctor, (AdditiveBodyRotation * __this));
}
