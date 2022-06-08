using namespace app;

namespace app::methods::ScenesManagerBehaviourLegacy {
IL2CPP_REGISTER_METHOD(0x01056D40, Vector2, get_CurrentCameraTargetPositionExtrapolated, (ScenesManagerBehaviourLegacy * __this));
IL2CPP_REGISTER_METHOD(0x01056D60, void, set_CurrentCameraTargetPositionExtrapolated, (ScenesManagerBehaviourLegacy * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01056D80, Vector2, get_CurrentCameraTargetPositionExtrapolatedShort, (ScenesManagerBehaviourLegacy * __this));
IL2CPP_REGISTER_METHOD(0x01056DA0, void, set_CurrentCameraTargetPositionExtrapolatedShort, (ScenesManagerBehaviourLegacy * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x01056D40, Vector2, get_PredictedTargetPosition, (ScenesManagerBehaviourLegacy * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (ScenesManagerBehaviourLegacy * __this));
IL2CPP_REGISTER_METHOD(0x010598A0, void, Update, (ScenesManagerBehaviourLegacy * __this, bool fullUpdate));
IL2CPP_REGISTER_METHOD(0x010599D0, void, UpdatePosition, (ScenesManagerBehaviourLegacy * __this));
IL2CPP_REGISTER_METHOD(0x01059FC0, void, FindScenesToLoad, (ScenesManagerBehaviourLegacy * __this, Vector3 position, bool async, bool loadingZones, bool keepPreloaded));
IL2CPP_REGISTER_METHOD(0x0105A390, void, FindScenesToUnload, (ScenesManagerBehaviourLegacy * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (ScenesManagerBehaviourLegacy * __this));
IL2CPP_REGISTER_METHOD(0x0105A680, void, FindScenesToUnloadInternal, (ScenesManagerBehaviourLegacy * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x0105B7D0, void, FindScenesToEnable, (ScenesManagerBehaviourLegacy * __this, bool limitOnce, bool async));
IL2CPP_REGISTER_METHOD(0x0105CAC0, void, SetTargetPosition, (ScenesManagerBehaviourLegacy * __this, Vector3 target));
IL2CPP_REGISTER_METHOD(0x0105CBB0, void, __ctor, (ScenesManagerBehaviourLegacy * __this));
}
