#include <interception_macros.h>

namespace app::methods::MistyWoodsKuroGameplayController {
IL2CPP_REGISTER_METHOD(0x01328EF0, bool, get_IsHidden, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x01328F10, void, ChangeState, (MistyWoodsKuroGameplayController * __this, MistyWoodsKuroGameplayController_State__Enum state));
IL2CPP_REGISTER_METHOD(0x01328F30, void, Awake, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x01329000, void, OnDestroy, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x013290A0, void, KillPlayer, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x01329760, void, FixedUpdate, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x01329AE0, void, OnHide, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x01329F30, void, OnVisible, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x0132A380, bool, InstaKillZonesContain, (MistyWoodsKuroGameplayController * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x0132A650, void, Serialize, (MistyWoodsKuroGameplayController * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_IsSuspended, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x008519B0, void, set_IsSuspended, (MistyWoodsKuroGameplayController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008519C0, SuspendableMask__Enum, get_Mask, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x0132A6D0, void, set_Mask, (MistyWoodsKuroGameplayController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0132A790, void, __ctor, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHOD(0x0132A7C0, void, _OnHide_b__25_0, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x047695D0, MistyWoodsKuroGameplayController__OnHide_b__25_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0132A7C0, void, _OnVisible_b__26_0, (MistyWoodsKuroGameplayController * __this));
IL2CPP_REGISTER_METHODINFO(0x04719DF0, MistyWoodsKuroGameplayController__OnVisible_b__26_0__MethodInfo);
}
