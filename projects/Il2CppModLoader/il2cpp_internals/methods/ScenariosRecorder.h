#include <interception_macros.h>

namespace app::methods::ScenariosRecorder {
IL2CPP_REGISTER_METHOD(0x00935960, ScenarioRecorderState__Enum, get_State, ());
IL2CPP_REGISTER_METHOD(0x00935A00, void, set_State, (ScenarioRecorderState__Enum value));
IL2CPP_REGISTER_METHOD(0x00935AB0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00935B40, void, Awake, (ScenariosRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00935C20, void, OnDestroy, (ScenariosRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00935CD0, void, Update, (ScenariosRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00935F10, void, StartRecording, (ScenariosRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00937080, void, EndRecording, (ScenariosRecorder * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (ScenariosRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00937180, String *, GetScenarioFolderPath, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x00937210, String__Array *, GetScenarioFilesForPath, (String * path));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ScenariosRecorder * __this));
IL2CPP_REGISTER_METHOD(0x009373B0, void, __cctor, ());
}
