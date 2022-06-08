using namespace app;

namespace app::methods::GasballChase {
IL2CPP_REGISTER_METHOD(0x0041B780, Vector3, get_TargetPos, (GasballChase * __this));
IL2CPP_REGISTER_METHOD(0x0041C640, void, OnEntityInitialized, (GasballChase * __this));
IL2CPP_REGISTER_METHOD(0x0041C730, void, OnEnter, (GasballChase * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041C9A0, BehaviourStatus__Enum, OnExecute, (GasballChase * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041D310, void, OnExit, (GasballChase * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041D420, void, OnFailChaseBehaviour, (GasballChase * __this));
IL2CPP_REGISTER_METHOD(0x0041D520, void, OnDrawGizmos, (GasballChase * __this));
IL2CPP_REGISTER_METHOD(0x0041D8F0, void, __ctor, (GasballChase * __this));
}
