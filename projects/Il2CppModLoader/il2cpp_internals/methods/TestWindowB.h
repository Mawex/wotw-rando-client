#include <interception_macros.h>

namespace app::methods::TestWindowB {
IL2CPP_REGISTER_METHOD(0x010E17B0, void, OnEnable, (TestWindowB * __this));
IL2CPP_REGISTER_METHOD(0x010E1CD0, void, OnDisable, (TestWindowB * __this));
IL2CPP_REGISTER_METHOD(0x010E21F0, void, Show, (TestWindowB * __this));
IL2CPP_REGISTER_METHOD(0x010E22B0, void, Hide, (TestWindowB * __this));
IL2CPP_REGISTER_METHOD(0x010E2370, void, Start, (TestWindowB * __this));
IL2CPP_REGISTER_METHOD(0x010E2490, void, ChangeState, (TestWindowB * __this, TestWindowB_State__Enum state));
IL2CPP_REGISTER_METHODINFO(0x0476F040, TestWindowB_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E25E0, void, EnterInitializedMenu, (TestWindowB * __this));
IL2CPP_REGISTER_METHOD(0x010E2620, void, ExitInitializedMenu, (TestWindowB * __this));
IL2CPP_REGISTER_METHOD(0x010E2660, void, FixedUpdate, (TestWindowB * __this));
IL2CPP_REGISTER_METHODINFO(0x04757198, TestWindowB_FixedUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateInitializedMenu, (TestWindowB * __this));
IL2CPP_REGISTER_METHOD(0x010E2710, void, OnButtonAPressed, (TestWindowB * __this, UIContext * context));
IL2CPP_REGISTER_METHODINFO(0x04736A08, TestWindowB_OnButtonAPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E27F0, void, OnButtonBPressed, (TestWindowB * __this, UIContext * context));
IL2CPP_REGISTER_METHODINFO(0x0473B8F0, TestWindowB_OnButtonBPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonCPressed, (TestWindowB * __this, UIContext * context));
IL2CPP_REGISTER_METHODINFO(0x04765250, TestWindowB_OnButtonCPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButtonDPressed, (TestWindowB * __this, UIContext * context));
IL2CPP_REGISTER_METHODINFO(0x047381F8, TestWindowB_OnButtonDPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E17A0, void, __ctor, (TestWindowB * __this));
}
