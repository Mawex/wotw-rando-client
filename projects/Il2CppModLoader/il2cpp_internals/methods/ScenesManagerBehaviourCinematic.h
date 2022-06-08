using namespace app;

namespace app::methods::ScenesManagerBehaviourCinematic {
IL2CPP_REGISTER_METHOD(0x01052D80, Vector2, get_PredictedTargetPosition, (ScenesManagerBehaviourCinematic * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (ScenesManagerBehaviourCinematic * __this));
IL2CPP_REGISTER_METHOD(0x01053AB0, void, Update, (ScenesManagerBehaviourCinematic * __this, bool fullUpdate));
IL2CPP_REGISTER_METHOD(0x01053C10, void, FindScenesToLoad, (ScenesManagerBehaviourCinematic * __this, Vector3 position, bool async, bool loadingZones, bool keepPreloaded));
IL2CPP_REGISTER_METHOD(0x01053FE0, void, FindScenesToUnload, (ScenesManagerBehaviourCinematic * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (ScenesManagerBehaviourCinematic * __this));
IL2CPP_REGISTER_METHOD(0x01054180, void, FindScenesToUnloadInternal, (ScenesManagerBehaviourCinematic * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x010548C0, void, FindScenesToEnable, (ScenesManagerBehaviourCinematic * __this, bool limitOnce, bool async));
IL2CPP_REGISTER_METHOD(0x010553C0, void, __ctor, (ScenesManagerBehaviourCinematic * __this));
}
