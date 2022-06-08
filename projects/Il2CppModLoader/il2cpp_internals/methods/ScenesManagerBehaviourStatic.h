using namespace app;

namespace app::methods::ScenesManagerBehaviourStatic {
IL2CPP_REGISTER_METHOD(0x01052D80, Vector2, get_PredictedTargetPosition, (ScenesManagerBehaviourStatic * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (ScenesManagerBehaviourStatic * __this));
IL2CPP_REGISTER_METHOD(0x0105CE40, void, Update, (ScenesManagerBehaviourStatic * __this, bool fullUpdate));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindScenesToLoad, (ScenesManagerBehaviourStatic * __this, Vector3 position, bool async, bool loadingZones, bool keepPreloaded));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindScenesToUnload, (ScenesManagerBehaviourStatic * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (ScenesManagerBehaviourStatic * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindScenesToUnloadInternal, (ScenesManagerBehaviourStatic * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindScenesToEnable, (ScenesManagerBehaviourStatic * __this, bool limitOnce, bool async));
IL2CPP_REGISTER_METHOD(0x0105CF00, void, __ctor, (ScenesManagerBehaviourStatic * __this));
}
