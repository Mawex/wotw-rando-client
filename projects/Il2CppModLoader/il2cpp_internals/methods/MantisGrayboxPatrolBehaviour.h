using namespace app;

namespace app::methods::MantisGrayboxPatrolBehaviour {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, (MantisGrayboxPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (MantisGrayboxPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecute, (MantisGrayboxPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (MantisGrayboxPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (MantisGrayboxPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (MantisGrayboxPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0060C1C0, void, __ctor, (MantisGrayboxPatrolBehaviour * __this));
}
