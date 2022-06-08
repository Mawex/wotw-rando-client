using namespace app;

namespace app::methods::ScenesManagerBehaviourGameplay {
IL2CPP_REGISTER_METHOD(0x01056D40, Vector2, get_CurrentCameraTargetPositionExtrapolated, (ScenesManagerBehaviourGameplay * __this));
IL2CPP_REGISTER_METHOD(0x01056D60, void, set_CurrentCameraTargetPositionExtrapolated, (ScenesManagerBehaviourGameplay * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01056D80, Vector2, get_CurrentCameraTargetPositionExtrapolatedShort, (ScenesManagerBehaviourGameplay * __this));
IL2CPP_REGISTER_METHOD(0x01056DA0, void, set_CurrentCameraTargetPositionExtrapolatedShort, (ScenesManagerBehaviourGameplay * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01056D40, Vector2, get_PredictedTargetPosition, (ScenesManagerBehaviourGameplay * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (ScenesManagerBehaviourGameplay * __this));
IL2CPP_REGISTER_METHOD(0x01056DC0, void, Update, (ScenesManagerBehaviourGameplay * __this, bool fullUpdate));
IL2CPP_REGISTER_METHOD(0x01056EF0, void, UpdatePosition, (ScenesManagerBehaviourGameplay * __this));
IL2CPP_REGISTER_METHOD(0x010574E0, void, FindScenesToLoad, (ScenesManagerBehaviourGameplay * __this, Vector3 position, bool async, bool loadingZones, bool keepPreloaded));
IL2CPP_REGISTER_METHOD(0x010578B0, void, FindScenesToUnload, (ScenesManagerBehaviourGameplay * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (ScenesManagerBehaviourGameplay * __this));
IL2CPP_REGISTER_METHOD(0x01057A60, void, FindScenesToUnloadInternal, (ScenesManagerBehaviourGameplay * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x010586F0, void, FindScenesToEnable, (ScenesManagerBehaviourGameplay * __this, bool limitOnce, bool async));
IL2CPP_REGISTER_METHOD(0x01059520, void, SetTargetPosition, (ScenesManagerBehaviourGameplay * __this, Vector3 target));
IL2CPP_REGISTER_METHOD(0x01059610, void, __ctor, (ScenesManagerBehaviourGameplay * __this));
}
