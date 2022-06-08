using namespace app;

namespace app::methods::TimesliceSpikeReporter {
IL2CPP_REGISTER_METHOD(0x00AF5B90, GUIStyle *, get_LabelStyle, (TimesliceSpikeReporter * __this));
IL2CPP_REGISTER_METHOD(0x00AF5F00, TimesliceSpikeReporter *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AF5FA0, bool, get_Enabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00AF6070, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00AF6280, void, EnsureImgui, (TimesliceSpikeReporter * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x00AF6370, void, Awake, (TimesliceSpikeReporter * __this));
IL2CPP_REGISTER_METHOD(0x00AF6560, void, OnDestroy, (TimesliceSpikeReporter * __this));
IL2CPP_REGISTER_METHOD(0x00AF6750, void, OnBudgetExceeded, (TimesliceSpikeReporter * __this, ITimeSlicedJob * job, float budget, float time));
IL2CPP_REGISTER_METHODINFO(0x047808F8, TimesliceSpikeReporter_OnBudgetExceeded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AF6AD0, void, Update, (TimesliceSpikeReporter * __this));
IL2CPP_REGISTER_METHOD(0x00AF6BE0, void, OnGUI, (TimesliceSpikeReporter * __this));
IL2CPP_REGISTER_METHOD(0x00AF6FA0, void, __ctor, (TimesliceSpikeReporter * __this));
IL2CPP_REGISTER_METHOD(0x00AF7100, void, __cctor, (MethodInfo * method));
}
