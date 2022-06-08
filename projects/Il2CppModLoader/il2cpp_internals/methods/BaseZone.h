using namespace app;

namespace app::methods::BaseZone {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (BaseZone * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, SuspendableMask__Enum, get_Mask, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00F8C680, void, set_Mask, (BaseZone * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldSerialize, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00F8C730, Transform *, get_Transform, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldUpdateWhileDisabled, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00F8C7F0, void, Awake, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00F8C8A0, void, OnDestroy, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00F8C950, void, OnEnable, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00F8CA10, void, OnDisable, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AwakeInternal, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyInternal, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnableEditor, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisableEditor, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EditorUpdate, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00F8CAD0, void, OnUpdate, (BaseZone * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00F8CB50, bool, ShouldTriggerZoneChange, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x00F8CBC0, void, OnZoneChange, (BaseZone * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (BaseZone * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (BaseZone * __this));
}
