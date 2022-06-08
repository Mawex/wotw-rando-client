#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::VRMainControlPanel {
IL2CPP_REGISTER_METHOD(0x01671BB0, void, Awake, (VRMainControlPanel * __this));
IL2CPP_REGISTER_METHOD(0x01671F20, void, ShiftTabs, (VRMainControlPanel * __this, int32_t direction));
IL2CPP_REGISTER_METHOD(0x01672210, VRBrowserPanel *, OpenNewTab, (VRMainControlPanel * __this, VRBrowserPanel * nextTo));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, MoveKeyboardUnder, (VRMainControlPanel * __this, VRBrowserPanel * panel));
IL2CPP_REGISTER_METHOD(0x01672910, void, DestroyPane, (VRMainControlPanel * __this, VRBrowserPanel * pane));
IL2CPP_REGISTER_METHOD(0x01672A80, IEnumerator *, _DestroyBrowser, (VRMainControlPanel * __this, VRBrowserPanel * pane));
IL2CPP_REGISTER_METHOD(0x01672BE0, void, MoveToward, (VRMainControlPanel * __this, Transform * t, Vector3 pos, Quaternion rot, Vector3 scale));
IL2CPP_REGISTER_METHOD(0x01673190, void, Update, (VRMainControlPanel * __this));
IL2CPP_REGISTER_METHOD(0x01673930, void, __ctor, (VRMainControlPanel * __this));
IL2CPP_REGISTER_METHOD(0x01673AA0, void, _Awake_b__9_0, (VRMainControlPanel * __this, JSONNode * args));
IL2CPP_REGISTER_METHODINFO(0x04709440, VRMainControlPanel__Awake_b__9_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01673AB0, void, _Awake_b__9_1, (VRMainControlPanel * __this, JSONNode * args));
IL2CPP_REGISTER_METHODINFO(0x0475C738, VRMainControlPanel__Awake_b__9_1__MethodInfo);
}
