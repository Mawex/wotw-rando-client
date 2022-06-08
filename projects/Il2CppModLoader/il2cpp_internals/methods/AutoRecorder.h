#include <interception_macros.h>

namespace app::methods::AutoRecorder {
IL2CPP_REGISTER_METHOD(0x0085C8C0, void, StartRecording, (AutoRecorder * __this, String * name));
IL2CPP_REGISTER_METHOD(0x0085C9D0, void, StopRecording, (AutoRecorder * __this));
IL2CPP_REGISTER_METHOD(0x0085CA30, void, TakeScreenshot, (AutoRecorder * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (AutoRecorder * __this));
IL2CPP_REGISTER_METHOD(0x0085CDD0, void, __cctor, ());
}
