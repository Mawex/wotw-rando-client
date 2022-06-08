#include <interception_macros.h>

namespace app::methods::Moon::Wwise::WwiseBootstrap {
IL2CPP_REGISTER_METHOD(0x0270F980, bool, get_IsProfilerRecording, ());
IL2CPP_REGISTER_METHOD(0x0270FA20, void, set_IsProfilerRecording, (bool value));
IL2CPP_REGISTER_METHOD(0x0270FAD0, void, ToggleProfilerRecording, ());
IL2CPP_REGISTER_METHOD(0x0270FD40, void, StartProfilerRecording, ());
IL2CPP_REGISTER_METHOD(0x0270FFB0, void, StopProfilerRecording, ());
IL2CPP_REGISTER_METHOD(0x02710150, bool, get_IsValid, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02710240, bool, get_WwiseDisabled, ());
IL2CPP_REGISTER_METHOD(0x027102E0, void, set_WwiseDisabled, (bool value));
IL2CPP_REGISTER_METHOD(0x02710390, void, ToggleWwiseDisable, ());
IL2CPP_REGISTER_METHOD(0x027107D0, void, RequestMute, ());
IL2CPP_REGISTER_METHOD(0x02710870, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x02710A80, void, Awake, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02710C50, void, Initialize, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x027110A0, void, Start, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02711140, void, OnApplicationPause, (WwiseBootstrap * __this, bool pause));
IL2CPP_REGISTER_METHOD(0x02711230, void, OnGUI, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x027112C0, void, Update, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02711730, void, OnEnable, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02711730, void, OnDisable, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02711740, void, OnDestroy, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02711740, void, OnApplicationQuit, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02711770, void, Dispose, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x027119A0, void, LateUpdate, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02711B80, String *, ParseArgument, (String * flag));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (WwiseBootstrap * __this));
IL2CPP_REGISTER_METHOD(0x02711FA0, void, __cctor, ());
}
