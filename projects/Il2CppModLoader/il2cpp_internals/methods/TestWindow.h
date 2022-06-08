#include <interception_macros.h>

namespace app::methods::TestWindow {
IL2CPP_REGISTER_METHOD(0x010E09F0, void, Show, (TestWindow * __this));
IL2CPP_REGISTER_METHOD(0x010E0EA0, void, Hide, (TestWindow * __this));
IL2CPP_REGISTER_METHOD(0x010E1340, void, Awake, (TestWindow * __this));
IL2CPP_REGISTER_METHOD(0x010E1370, void, ChangeState, (TestWindow * __this, TestWindow_State__Enum state));
IL2CPP_REGISTER_METHODINFO(0x0475F260, TestWindow_ChangeState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E14F0, void, EnterLeftMenu, (TestWindow * __this));
IL2CPP_REGISTER_METHOD(0x010E1530, void, EnterRightMenu, (TestWindow * __this));
IL2CPP_REGISTER_METHOD(0x010E1570, void, ExitLeftMenu, (TestWindow * __this));
IL2CPP_REGISTER_METHOD(0x010E15B0, void, ExitRightMenu, (TestWindow * __this));
IL2CPP_REGISTER_METHOD(0x010E15F0, void, FixedUpdate, (TestWindow * __this));
IL2CPP_REGISTER_METHODINFO(0x04708B50, TestWindow_FixedUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateLeftMenu, (TestWindow * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateRightMenu, (TestWindow * __this));
IL2CPP_REGISTER_METHOD(0x010E16A0, void, ToggleMenuCallback, (TestWindow * __this));
IL2CPP_REGISTER_METHODINFO(0x047124B0, TestWindow_ToggleMenuCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E16C0, void, SwitchWindowCallback, (TestWindow * __this));
IL2CPP_REGISTER_METHODINFO(0x047623B8, TestWindow_SwitchWindowCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010E17A0, void, __ctor, (TestWindow * __this));
}
