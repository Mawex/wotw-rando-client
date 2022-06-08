#include <interception_macros.h>

namespace app::methods::Moon::FlutteringSlamBehaviour_StartState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FlutteringSlamBehaviour_StartState * __this, FlutteringSlamBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x01485BA0, void, OnEnter, (FlutteringSlamBehaviour_StartState * __this));
IL2CPP_REGISTER_METHOD(0x01485EB0, void, UpdateState, (FlutteringSlamBehaviour_StartState * __this));
IL2CPP_REGISTER_METHOD(0x01486090, void, OnExit, (FlutteringSlamBehaviour_StartState * __this));
IL2CPP_REGISTER_METHOD(0x01486280, void, OnStartTimelineEnded, (FlutteringSlamBehaviour_StartState * __this));
IL2CPP_REGISTER_METHODINFO(0x04758310, FlutteringSlamBehaviour_StartState_OnStartTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, ProcessRootMotion, (FlutteringSlamBehaviour_StartState * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x047936B8, FlutteringSlamBehaviour_StartState_ProcessRootMotion__MethodInfo);
}
