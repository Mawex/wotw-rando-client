using namespace app;

namespace app::methods::Moon::FlutteringShotDownBehaviour {
IL2CPP_REGISTER_METHOD(0x014829B0, void, OnEntityInitialized, (FlutteringShotDownBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01482D10, void, OnEnter, (FlutteringShotDownBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01482D50, BehaviourStatus__Enum, OnExecute, (FlutteringShotDownBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01482E10, void, OnExit, (FlutteringShotDownBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01482F20, void, PlayTimeline, (FlutteringShotDownBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01483020, void, ResetTimeline, (FlutteringShotDownBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01483240, void, OnCollidedWithGround, (FlutteringShotDownBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01482E10, void, Stop, (FlutteringShotDownBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014833C0, void, __ctor, (FlutteringShotDownBehaviour * __this));
}
