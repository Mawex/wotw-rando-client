#include <interception_macros.h>

namespace app::methods::MistyWoodsKuroController {
IL2CPP_REGISTER_METHOD(0x01327FB0, bool, get_IsHunting, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x01327FC0, void, Awake, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x01328340, void, OnAnimationEnded, (MistyWoodsKuroController * __this, TextureAnimation * animation));
IL2CPP_REGISTER_METHODINFO(0x0475DF38, MistyWoodsKuroController_OnAnimationEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013284C0, void, OnDestroy, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x003F8E90, void, FixedUpdate, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x01328560, void, ChangeState, (MistyWoodsKuroController * __this, MistyWoodsKuroController_State__Enum state));
IL2CPP_REGISTER_METHOD(0x013287B0, void, PlayIdleSound, (MistyWoodsKuroController * __this, TextureAnimation * notUsed));
IL2CPP_REGISTER_METHODINFO(0x04738488, MistyWoodsKuroController_PlayIdleSound__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x01328880, void, OnHide, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x01328A70, void, OnVisible, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x01328C60, void, KillPlayer, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x01328DC0, void, Serialize, (MistyWoodsKuroController * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugLog, (MistyWoodsKuroController * __this, String * str));
IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (MistyWoodsKuroController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF610, SuspendableMask__Enum, get_Mask, (MistyWoodsKuroController * __this));
IL2CPP_REGISTER_METHOD(0x01328E40, void, set_Mask, (MistyWoodsKuroController * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0049C0F0, void, __ctor, (MistyWoodsKuroController * __this));
}
