using namespace app;

namespace app::methods::Moon::FlutteringShotDownBehaviour_LandState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FlutteringShotDownBehaviour_LandState * __this, FlutteringShotDownBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x01483DE0, void, OnEnter, (FlutteringShotDownBehaviour_LandState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (FlutteringShotDownBehaviour_LandState * __this));
IL2CPP_REGISTER_METHOD(0x014840F0, void, OnExit, (FlutteringShotDownBehaviour_LandState * __this));
IL2CPP_REGISTER_METHOD(0x014842E0, void, OnLandTimelineEnded, (FlutteringShotDownBehaviour_LandState * __this));
IL2CPP_REGISTER_METHODINFO(0x047784C0, FlutteringShotDownBehaviour_LandState_OnLandTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, ProcessRootMotion, (FlutteringShotDownBehaviour_LandState * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x04716858, FlutteringShotDownBehaviour_LandState_ProcessRootMotion__MethodInfo);
}
