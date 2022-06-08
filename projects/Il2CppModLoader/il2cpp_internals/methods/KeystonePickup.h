#include <interception_macros.h>

namespace app::methods::KeystonePickup {
IL2CPP_REGISTER_METHOD(0x00E70A70, void, OnCollectorCandidateTouch, (KeystonePickup * __this, GameObject * collector));
IL2CPP_REGISTER_METHOD(0x00E70B80, void, Collected, (KeystonePickup * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_CompletionAmount, (KeystonePickup * __this));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_AreaCompletorPosition, (KeystonePickup * __this));
IL2CPP_REGISTER_METHOD(0x005AC260, void, __ctor, (KeystonePickup * __this));
IL2CPP_REGISTER_METHOD(0x00E71050, bool, _Collected_b__7_0, (KeystonePickup * __this, RuntimeWorldMapIcon * a));
IL2CPP_REGISTER_METHODINFO(0x0477EC60, KeystonePickup__Collected_b__7_0__MethodInfo);
}
