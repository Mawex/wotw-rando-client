using namespace app;

namespace app::methods::MainThreadSleepTester {
IL2CPP_REGISTER_METHOD(0x009F6320, bool, get_SpleepEnabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x009F63C0, void, set_SpleepEnabled, (bool value));
IL2CPP_REGISTER_METHOD(0x009F65B0, void, CreateInstance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x009F67F0, GUIStyle *, get_LabelStyle, (MainThreadSleepTester * __this));
IL2CPP_REGISTER_METHOD(0x009F6B60, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x009F6CC0, void, Awake, (MainThreadSleepTester * __this));
IL2CPP_REGISTER_METHOD(0x009F6E70, void, OnDestroy, (MainThreadSleepTester * __this));
IL2CPP_REGISTER_METHOD(0x009F6FB0, void, EnableSleep, (MainThreadSleepTester * __this));
IL2CPP_REGISTER_METHOD(0x009F7180, void, DisableSleep, (MainThreadSleepTester * __this));
IL2CPP_REGISTER_METHOD(0x009F7350, void, OnEndOfFrame, (MainThreadSleepTester * __this));
IL2CPP_REGISTER_METHODINFO(0x0472F510, MainThreadSleepTester_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009F7400, void, OnGUI, (MainThreadSleepTester * __this));
IL2CPP_REGISTER_METHOD(0x009F75E0, void, __ctor, (MainThreadSleepTester * __this));
IL2CPP_REGISTER_METHOD(0x009F7670, void, __cctor, (MethodInfo * method));
}
