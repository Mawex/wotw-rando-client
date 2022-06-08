using namespace app;

namespace app::methods::ControlSettingsItem {
IL2CPP_REGISTER_METHOD(0x011F05A0, void, Awake, (ControlSettingsItem * __this));
IL2CPP_REGISTER_METHOD(0x011F06A0, void, SetItemContext, (ControlSettingsItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x011F07D0, void, OnItemContextDirty, (ControlSettingsItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x007FB020, void, OnPressed, (ControlSettingsItem * __this));
IL2CPP_REGISTER_METHODINFO(0x0476A010, ControlSettingsItem_OnPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHighlighted, (ControlSettingsItem * __this));
IL2CPP_REGISTER_METHODINFO(0x04719478, ControlSettingsItem_OnHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUnhighlighted, (ControlSettingsItem * __this));
IL2CPP_REGISTER_METHODINFO(0x0471E690, ControlSettingsItem_OnUnhighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ControlSettingsItem * __this));
}
