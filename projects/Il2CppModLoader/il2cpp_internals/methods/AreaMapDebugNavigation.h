#include <interception_macros.h>

namespace app::methods::AreaMapDebugNavigation {
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_DebugModeEnabled, (AreaMapDebugNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050BCC0, void, Awake, (AreaMapDebugNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050BD50, void, Advance, (AreaMapDebugNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050C340, void, ToggleUndiscoveredMap, (AreaMapDebugNavigation * __this, bool show));
IL2CPP_REGISTER_METHOD(0x0050C3B0, void, ToggleDebugMode, (AreaMapDebugNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050C3D0, void, EnterDebugMode, (AreaMapDebugNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050C5B0, void, ExitDebugMode, (AreaMapDebugNavigation * __this));
IL2CPP_REGISTER_METHOD(0x0050C730, void, UpdateSceneBoundsMarker, (AreaMapDebugNavigation * __this, RuntimeSceneMetaData * sceneMetaData));
IL2CPP_REGISTER_METHOD(0x0050CA70, void, __ctor, (AreaMapDebugNavigation * __this));
}
