#include <interception_macros.h>

namespace app::methods::SceneFrameworkDebugger {
IL2CPP_REGISTER_METHOD(0x00B9D820, GUIStyle *, get_LabelStyle, (SceneFrameworkDebugger * __this));
IL2CPP_REGISTER_METHOD(0x00B9DB90, SceneFrameworkDebugger *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00B9DC10, bool, get_Enabled, ());
IL2CPP_REGISTER_METHOD(0x00B9DCC0, void, set_Enabled, (bool value));
IL2CPP_REGISTER_METHOD(0x00B9DE60, void, EnsureImgui, (SceneFrameworkDebugger * __this, bool registered));
IL2CPP_REGISTER_METHOD(0x00B9DF50, void, Awake, (SceneFrameworkDebugger * __this));
IL2CPP_REGISTER_METHOD(0x00B9DFB0, void, OnDestroy, (SceneFrameworkDebugger * __this));
IL2CPP_REGISTER_METHOD(0x00B9DFC0, String *, _getColorForBoostMode, (SceneFrameworkDebugger * __this, LoadingBoostController_BoostModeLevel__Enum level));
IL2CPP_REGISTER_METHOD(0x00B9DFF0, String *, _getColorForSceneState, (SceneFrameworkDebugger * __this, SceneState__Enum state));
IL2CPP_REGISTER_METHOD(0x00B9E060, void, BoostModeChangedState, (SceneFrameworkDebugger * __this, LoadingBoostController_BoostModeLevel__Enum old, LoadingBoostController_BoostModeLevel__Enum newLevel));
IL2CPP_REGISTER_METHOD(0x00B9E630, void, SceneStartedLoading, (SceneFrameworkDebugger * __this, RuntimeSceneMetaData * meta, bool async));
IL2CPP_REGISTER_METHOD(0x00B9E890, void, SceneChangedState, (SceneFrameworkDebugger * __this, SceneManagerScene * scene, RuntimeSceneMetaData * meta, SceneState__Enum oldState, SceneState__Enum state));
IL2CPP_REGISTER_METHOD(0x00B9EEC0, void, ReportSceneExpensiveIntegration, (SceneFrameworkDebugger * __this, SceneManagerScene * scene, float ms));
IL2CPP_REGISTER_METHOD(0x00B9F2D0, void, Update, (SceneFrameworkDebugger * __this));
IL2CPP_REGISTER_METHOD(0x00B9F850, void, OnGUI, (SceneFrameworkDebugger * __this));
IL2CPP_REGISTER_METHOD(0x00B9FB40, void, __ctor, (SceneFrameworkDebugger * __this));
}
