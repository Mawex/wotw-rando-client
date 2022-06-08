#include <interception_macros.h>

namespace app::methods::Moon::FlutteringTakeOffBehaviour_StartState {
IL2CPP_REGISTER_METHOD(0x01488500, void, __ctor, (FlutteringTakeOffBehaviour_StartState * __this, FlutteringTakeOffBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x01488540, void, OnEnter, (FlutteringTakeOffBehaviour_StartState * __this));
IL2CPP_REGISTER_METHOD(0x014888F0, void, UpdateState, (FlutteringTakeOffBehaviour_StartState * __this));
IL2CPP_REGISTER_METHOD(0x01488B90, void, OnExit, (FlutteringTakeOffBehaviour_StartState * __this));
IL2CPP_REGISTER_METHOD(0x01488DB0, void, OnStartTimelineEnded, (FlutteringTakeOffBehaviour_StartState * __this));
IL2CPP_REGISTER_METHODINFO(0x04736B68, FlutteringTakeOffBehaviour_StartState_OnStartTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, ProcessRootMotion, (FlutteringTakeOffBehaviour_StartState * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x0472E800, FlutteringTakeOffBehaviour_StartState_ProcessRootMotion__MethodInfo);
}
