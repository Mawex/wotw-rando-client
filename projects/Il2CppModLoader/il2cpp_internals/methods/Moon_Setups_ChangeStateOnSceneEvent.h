#include <interception_macros.h>

namespace app::methods::Moon::Setups::ChangeStateOnSceneEvent {
IL2CPP_REGISTER_METHOD(0x00E24CB0, void, Awake, (ChangeStateOnSceneEvent * __this));
IL2CPP_REGISTER_METHOD(0x00E24E50, void, OnDestroy, (ChangeStateOnSceneEvent * __this));
IL2CPP_REGISTER_METHOD(0x00E25000, void, OnSceneRootDisabled, (ChangeStateOnSceneEvent * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHODINFO(0x04753830, ChangeStateOnSceneEvent_OnSceneRootDisabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (ChangeStateOnSceneEvent * __this));
}
