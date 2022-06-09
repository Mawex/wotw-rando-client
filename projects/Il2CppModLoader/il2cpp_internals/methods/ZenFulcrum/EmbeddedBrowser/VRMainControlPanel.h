#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::VRMainControlPanel {
    IL2CPP_REGISTER_METHOD(0x01671BB0, void, Awake, (app::VRMainControlPanel * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01671F20, void, ShiftTabs, (app::VRMainControlPanel * this_ptr, int32_t direction));
    IL2CPP_REGISTER_METHOD(0x01672210, app::VRBrowserPanel *, OpenNewTab, (app::VRMainControlPanel * this_ptr, app::VRBrowserPanel * next_to));
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, MoveKeyboardUnder, (app::VRMainControlPanel * this_ptr, app::VRBrowserPanel * panel));
    IL2CPP_REGISTER_METHOD(0x01672910, void, DestroyPane, (app::VRMainControlPanel * this_ptr, app::VRBrowserPanel * pane));
    IL2CPP_REGISTER_METHOD(0x01672A80, app::IEnumerator *, _DestroyBrowser, (app::VRMainControlPanel * this_ptr, app::VRBrowserPanel * pane));
    IL2CPP_REGISTER_METHOD(0x01672BE0, void, MoveToward, (app::VRMainControlPanel * this_ptr, app::Transform * t, app::Vector3 pos, app::Quaternion rot, app::Vector3 scale));
    IL2CPP_REGISTER_METHOD(0x01673190, void, Update, (app::VRMainControlPanel * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01673930, void, __ctor, (app::VRMainControlPanel * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01673AA0, void, _Awake_b__9_0, (app::VRMainControlPanel * this_ptr, app::JSONNode * args));
    IL2CPP_REGISTER_METHODINFO(0x04709440, VRMainControlPanel__Awake_b__9_0__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01673AB0, void, _Awake_b__9_1, (app::VRMainControlPanel * this_ptr, app::JSONNode * args));
    IL2CPP_REGISTER_METHODINFO(0x0475C738, VRMainControlPanel__Awake_b__9_1__MethodInfo);
}
