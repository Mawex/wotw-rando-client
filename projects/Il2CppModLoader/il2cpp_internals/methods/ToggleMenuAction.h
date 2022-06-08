using namespace app;

namespace app::methods::ToggleMenuAction {
IL2CPP_REGISTER_METHOD(0x00AFC900, bool, get_IsToggleOn, (ToggleMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00AFCA20, void, Awake, (ToggleMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00AFCB70, void, OnEnable, (ToggleMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00AFCEB0, void, OnDisable, (ToggleMenuAction * __this));
IL2CPP_REGISTER_METHOD(0x00AFD1E0, void, Perform, (ToggleMenuAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00AFD200, void, SetSlidersColors, (ToggleMenuAction * __this));
IL2CPP_REGISTER_METHODINFO(0x047222A8, ToggleMenuAction_SetSlidersColors__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AFD3B0, void, SetCleverMenuItemsColors, (ToggleMenuAction * __this));
IL2CPP_REGISTER_METHODINFO(0x04702D38, ToggleMenuAction_SetCleverMenuItemsColors__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (ToggleMenuAction * __this));
}
