#include <interception_macros.h>

namespace app::methods::Moon::FlutteringTakeOffBehaviour_TurnStartState {
IL2CPP_REGISTER_METHOD(0x01488F10, void, __ctor, (FlutteringTakeOffBehaviour_TurnStartState * __this, FlutteringTakeOffBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x01488F50, void, OnEnter, (FlutteringTakeOffBehaviour_TurnStartState * __this));
IL2CPP_REGISTER_METHOD(0x01489300, void, UpdateState, (FlutteringTakeOffBehaviour_TurnStartState * __this));
IL2CPP_REGISTER_METHOD(0x014895A0, void, OnExit, (FlutteringTakeOffBehaviour_TurnStartState * __this));
IL2CPP_REGISTER_METHOD(0x014881C0, void, OnTurnSlamChargeFinished, (FlutteringTakeOffBehaviour_TurnStartState * __this));
IL2CPP_REGISTER_METHODINFO(0x0474B8E8, FlutteringTakeOffBehaviour_TurnStartState_OnTurnSlamChargeFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, ProcessRootMotion, (FlutteringTakeOffBehaviour_TurnStartState * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x04739D00, FlutteringTakeOffBehaviour_TurnStartState_ProcessRootMotion__MethodInfo);
}
