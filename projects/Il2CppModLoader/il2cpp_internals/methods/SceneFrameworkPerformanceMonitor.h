#include <interception_macros.h>

namespace app::methods::SceneFrameworkPerformanceMonitor {
IL2CPP_REGISTER_METHOD(0x00B9FFC0, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x00BA0070, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00BA0300, void, OnDestroy, (SceneFrameworkPerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00BA03A0, void, Awake, (SceneFrameworkPerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00BA0300, void, CloseWriter, (SceneFrameworkPerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00BA0670, bool, get_Ready, ());
IL2CPP_REGISTER_METHOD(0x00BA0720, void, Write, (SceneFrameworkPerformanceMonitor * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00BA0830, void, AddSceneLoadItem, (SceneManagerScene * scene));
IL2CPP_REGISTER_METHOD(0x00BA0AC0, void, UnloadScene, (SceneRoot * scene));
IL2CPP_REGISTER_METHOD(0x00BA0BB0, void, EnableScene, (SceneRoot * scene));
IL2CPP_REGISTER_METHOD(0x00BA0CA0, void, DisableScene, (SceneRoot * scene));
IL2CPP_REGISTER_METHOD(0x00BA0D90, void, Update, (SceneFrameworkPerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintSoundEntry, (SceneFrameworkPerformanceMonitor * __this));
IL2CPP_REGISTER_METHOD(0x00BA0FF0, void, __ctor, (SceneFrameworkPerformanceMonitor * __this));
}
