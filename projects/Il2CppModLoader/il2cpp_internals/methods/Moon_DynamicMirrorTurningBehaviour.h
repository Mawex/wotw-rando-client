using namespace app;

namespace app::methods::Moon::DynamicMirrorTurningBehaviour {
IL2CPP_REGISTER_METHOD(0x01207370, SplitTurnAnimation *, get_CurrentMirrorTurningAnimation, (DynamicMirrorTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012073D0, void, OnEnterTask, (DynamicMirrorTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01207640, BehaviourStatus__Enum, OnExecuteTask, (DynamicMirrorTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (DynamicMirrorTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D201A0, void, __ctor, (DynamicMirrorTurningBehaviour * __this));
}
