#include <interception_macros.h>

namespace app::methods::moonTools::recording::ScreenshotRecorder {
IL2CPP_REGISTER_METHOD(0x00F717F0, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x00F718C0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00F71BA0, String *, get_OutputDirectory, (ScreenshotRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00F71EB0, void, OnEnable, (ScreenshotRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00F720C0, void, OnDisable, (ScreenshotRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00F72360, void, Update, (ScreenshotRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00F72700, void, OnEndOfFrame, (ScreenshotRecorder * __this));
IL2CPP_REGISTER_METHODINFO(0x0476FAE8, ScreenshotRecorder_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F72870, void, __ctor, (ScreenshotRecorder * __this));
IL2CPP_REGISTER_METHOD(0x00F72900, void, __cctor, ());
}
