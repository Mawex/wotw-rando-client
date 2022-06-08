#include <interception_macros.h>

namespace app::methods::ScenesManagerBehaviourExplicit {
IL2CPP_REGISTER_METHOD(0x01052D80, Vector2, get_PredictedTargetPosition, (ScenesManagerBehaviourExplicit * __this));
IL2CPP_REGISTER_METHOD(0x00597B10, ScenesManagerUpdateType__Enum, get_CurrentUpdateType, (ScenesManagerBehaviourExplicit * __this));
IL2CPP_REGISTER_METHOD(0x01055550, void, Update, (ScenesManagerBehaviourExplicit * __this, bool fullUpdate));
IL2CPP_REGISTER_METHOD(0x01055740, void, FindScenesToLoad, (ScenesManagerBehaviourExplicit * __this, Vector3 position, bool async, bool loadingZones, bool keepPreloaded));
IL2CPP_REGISTER_METHOD(0x01055B10, void, FindScenesToUnload, (ScenesManagerBehaviourExplicit * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x002FA000, void, FindUneededScenesToUnload, (ScenesManagerBehaviourExplicit * __this));
IL2CPP_REGISTER_METHOD(0x01055BE0, void, FindScenesToUnloadInternal, (ScenesManagerBehaviourExplicit * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x010560A0, void, FindScenesToEnable, (ScenesManagerBehaviourExplicit * __this, bool limitOnce, bool async));
IL2CPP_REGISTER_METHOD(0x01056BB0, void, __ctor, (ScenesManagerBehaviourExplicit * __this));
}
