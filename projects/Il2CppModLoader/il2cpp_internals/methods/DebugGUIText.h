using namespace app;

namespace app::methods::DebugGUIText {
IL2CPP_REGISTER_METHOD(0x00DE43A0, bool, get_Enabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00DE4440, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00DE4540, void, EnsureImguiRegistered, (DebugGUIText * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x00DE4640, void, add_OnEnabledChangedEvent, (Action * value));
IL2CPP_REGISTER_METHOD(0x00DE4780, void, remove_OnEnabledChangedEvent, (Action * value));
IL2CPP_REGISTER_METHOD(0x00DE48C0, void, Awake, (DebugGUIText * __this));
IL2CPP_REGISTER_METHOD(0x00DE4B50, void, EnsureBuildInfo, (DebugGUIText * __this));
IL2CPP_REGISTER_METHOD(0x00DE4BA0, void, OnGUI, (DebugGUIText * __this));
IL2CPP_REGISTER_METHOD(0x00DE5200, void, OnDestroy, (DebugGUIText * __this));
IL2CPP_REGISTER_METHOD(0x00DE54B0, void, OnEnabledChanged, (DebugGUIText * __this));
IL2CPP_REGISTER_METHODINFO(0x0478C718, DebugGUIText_OnEnabledChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DebugGUIText * __this));
IL2CPP_REGISTER_METHOD(0x00DE56E0, void, __cctor, (MethodInfo * method));
}
