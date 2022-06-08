using namespace app;

namespace app::methods::ParadoxNotion::Services::MonoManager {
IL2CPP_REGISTER_METHOD(0x031BF2F0, MonoManager_UpdateMode__Enum, get_updateMode, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x031BF360, void, set_updateMode, (MonoManager_UpdateMode__Enum value));
IL2CPP_REGISTER_METHOD(0x031BF3E0, void, add_onUpdate, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BF4D0, void, remove_onUpdate, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BF5C0, void, add_onLateUpdate, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BF6B0, void, remove_onLateUpdate, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BF7A0, void, add_onFixedUpdate, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BF890, void, remove_onFixedUpdate, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BF980, void, add_onGUI, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BFA70, void, remove_onGUI, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BFB60, void, add_onApplicationQuit, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BFC50, void, remove_onApplicationQuit, (MonoManager * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x031BFD40, void, add_onApplicationPause, (MonoManager * __this, Action_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x031BFE30, void, remove_onApplicationPause, (MonoManager * __this, Action_1_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x031BFF20, MonoManager *, get_current, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x031C01E0, void, Create, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x031C0270, void, OnApplicationQuit, (MonoManager * __this));
IL2CPP_REGISTER_METHOD(0x031C0310, void, OnApplicationPause, (MonoManager * __this, bool isPause));
IL2CPP_REGISTER_METHOD(0x031C03B0, void, Awake, (MonoManager * __this));
IL2CPP_REGISTER_METHOD(0x00F506B0, void, Update, (MonoManager * __this));
IL2CPP_REGISTER_METHOD(0x031C06D0, void, LateUpdate, (MonoManager * __this));
IL2CPP_REGISTER_METHOD(0x031C06F0, void, FixedUpdate, (MonoManager * __this));
IL2CPP_REGISTER_METHOD(0x031C0710, void, OnGUI, (MonoManager * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (MonoManager * __this));
}
