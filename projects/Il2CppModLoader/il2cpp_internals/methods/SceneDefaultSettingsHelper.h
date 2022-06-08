using namespace app;

namespace app::methods::SceneDefaultSettingsHelper {
IL2CPP_REGISTER_METHOD(0x002FBB00, SceneRoot *, get_CurrentToScene, (SceneDefaultSettingsHelper * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, SceneRoot *, get_CurrentFromScene, (SceneDefaultSettingsHelper * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, SceneSettings *, get_FromSettings, (SceneDefaultSettingsHelper * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_FromSettings, (SceneDefaultSettingsHelper * __this, SceneSettings * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, SceneSettings *, get_ToSettings, (SceneDefaultSettingsHelper * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_ToSettings, (SceneDefaultSettingsHelper * __this, SceneSettings * value));
IL2CPP_REGISTER_METHOD(0x00938880, bool, get_HasFromSettings, (SceneDefaultSettingsHelper * __this));
IL2CPP_REGISTER_METHOD(0x00938890, bool, get_HasToSettings, (SceneDefaultSettingsHelper * __this));
IL2CPP_REGISTER_METHOD(0x009388A0, void, __ctor, (SceneDefaultSettingsHelper * __this, float duration, float disableTweenSpeedThreshold));
IL2CPP_REGISTER_METHOD(0x009388B0, void, Clear, (SceneDefaultSettingsHelper * __this));
IL2CPP_REGISTER_METHOD(0x009388D0, SceneRoot *, SceneRootFromPosition, (Vector3 position));
IL2CPP_REGISTER_METHOD(0x009389D0, SceneRoot *, GetScene, (SceneDefaultSettingsHelper * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00938BF0, bool, CalculateTweenValueBasedOnPaddingZone, (SceneDefaultSettingsHelper * __this, Vector3 position, float * value, SceneRoot * * otherScene));
IL2CPP_REGISTER_METHOD(0x009395D0, void, Advance, (SceneDefaultSettingsHelper * __this, Vector3 position, float timeDelta));
}
