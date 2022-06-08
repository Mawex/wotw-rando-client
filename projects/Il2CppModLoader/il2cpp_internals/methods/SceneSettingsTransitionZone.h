#include <interception_macros.h>

namespace app::methods::SceneSettingsTransitionZone {
IL2CPP_REGISTER_METHOD(0x00BBF730, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x002FB9D0, SceneSettings *, get_FromSettings, (SceneSettingsTransitionZone * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, SceneSettings *, get_ToSettings, (SceneSettingsTransitionZone * __this));
IL2CPP_REGISTER_METHOD(0x00BBF800, bool, get_IsReady, (SceneSettingsTransitionZone * __this));
IL2CPP_REGISTER_METHOD(0x00BBF820, float, CalculateTweenValue, (SceneSettingsTransitionZone * __this, Vector2 postion));
IL2CPP_REGISTER_METHOD(0x00BBF9D0, void, UpdateSettings, (SceneSettingsTransitionZone * __this));
IL2CPP_REGISTER_METHOD(0x00BBFEE0, void, OnEnable, (SceneSettingsTransitionZone * __this));
IL2CPP_REGISTER_METHOD(0x00BC02C0, void, OnDisable, (SceneSettingsTransitionZone * __this));
IL2CPP_REGISTER_METHOD(0x0060E860, bool, IsInside, (SceneSettingsTransitionZone * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00910BD0, SelectableCategory__Enum, get_Category, (SceneSettingsTransitionZone * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SceneSettingsTransitionZone * __this));
IL2CPP_REGISTER_METHOD(0x00BC03A0, void, __cctor, ());
}
