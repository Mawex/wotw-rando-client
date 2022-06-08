using namespace app;

namespace app::methods::SandWormChaseBehaviour {
IL2CPP_REGISTER_METHOD(0x00C09740, void, OnEntityInitialized, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C09810, void, OnEnter, (SandWormChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C09AF0, BehaviourStatus__Enum, OnExecute, (SandWormChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C09E30, void, OnExit, (SandWormChaseBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C09E80, void, ChangeState, (SandWormChaseBehaviour * __this, SandWormChaseBehaviour_State__Enum state));
IL2CPP_REGISTER_METHOD(0x00C0A1B0, void, OnSandChaseConditionsCheck, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSandChaseEnter, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0A760, BehaviourStatus__Enum, OnSandChaseUpdate, (SandWormChaseBehaviour * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSandChaseExit, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0ABC0, void, OnPreJumpConditionsCheck, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0AF60, void, OnPreJumpEnter, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0AFF0, BehaviourStatus__Enum, OnPreJumpUpdate, (SandWormChaseBehaviour * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPreJumpExit, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0B050, void, OnJumpingConditionsCheck, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0B2D0, void, OnJumpingEnter, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0AFF0, BehaviourStatus__Enum, OnJumpingUpdate, (SandWormChaseBehaviour * __this, float dTime));
IL2CPP_REGISTER_METHOD(0x00C0B480, void, OnJumpingExit, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0B550, bool, IsHeadTipOutsideZone, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0B6B0, bool, PointIsInChaseZone, (SandWormChaseBehaviour * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00C0B7C0, bool, ClearanceBetweenPointsCheck, (SandWormChaseBehaviour * __this, Vector3 point1, Vector3 point2));
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (SandWormChaseBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00C0BB40, void, __ctor, (SandWormChaseBehaviour * __this));
}
