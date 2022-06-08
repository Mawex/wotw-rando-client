#include <interception_macros.h>

namespace app::methods::Moon::FlutteringSlamBehaviour_EndState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FlutteringSlamBehaviour_EndState * __this, FlutteringSlamBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x01485280, void, OnEnter, (FlutteringSlamBehaviour_EndState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (FlutteringSlamBehaviour_EndState * __this));
IL2CPP_REGISTER_METHOD(0x014856B0, void, OnExit, (FlutteringSlamBehaviour_EndState * __this));
IL2CPP_REGISTER_METHOD(0x014858A0, void, OnEndTimelineEnded, (FlutteringSlamBehaviour_EndState * __this));
IL2CPP_REGISTER_METHODINFO(0x04705628, FlutteringSlamBehaviour_EndState_OnEndTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, ProcessRootMotion, (FlutteringSlamBehaviour_EndState * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x047088E0, FlutteringSlamBehaviour_EndState_ProcessRootMotion__MethodInfo);
}
