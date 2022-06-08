using namespace app;

namespace app::methods::DebugHub {
IL2CPP_REGISTER_METHOD(0x00DE59B0, bool, get_IsActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00DE5AD0, void, set_IsActive, (bool value));
IL2CPP_REGISTER_METHOD(0x00DE5F30, void, SuspendGameplay, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00DE6070, void, ResumeGameplay, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00DE61A0, bool, get_IsModalActive, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00DE62C0, float, get_ItemWidth, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DE6370, void, Awake, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DE64C0, void, OnEnable, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DE6690, void, OnDisable, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DE6860, void, OnEndOfFrame, (DebugHub * __this));
IL2CPP_REGISTER_METHODINFO(0x04782980, DebugHub_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DE6870, void, Draw, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DE6CE0, void, _initializeItems, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DE8D50, void, ActivateItemByName, (DebugHub * __this, String * name));
IL2CPP_REGISTER_METHOD(0x00DE8ED0, void, _layoutItems, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DE98D0, void, ToggleHub, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00DE9C50, void, ActivateItem, (DebugHub * __this, int32_t itemIndex));
IL2CPP_REGISTER_METHOD(0x00DE9F90, void, FixedUpdate, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DEA700, void, HideModal, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DEAA00, void, OnGUI, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DEAB30, void, Render, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DEAF80, Material *, get_BaseMaterial, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00DEB1F0, GUIStyle *, get_CenteredLabel, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DEB580, GUIStyle *, get_CenteredLabelActive, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DEB920, void, __ctor, (DebugHub * __this));
IL2CPP_REGISTER_METHOD(0x00DEBC00, void, __cctor, (MethodInfo * method));
}
