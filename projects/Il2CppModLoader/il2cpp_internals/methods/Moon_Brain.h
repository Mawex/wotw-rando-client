using namespace app;

namespace app::methods::Moon::Brain {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (Brain * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (Brain * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A35F30, float, get_LastSelectedBehaviourScore, (Brain * __this));
IL2CPP_REGISTER_METHOD(0x00CBEF20, void, Awake, (Brain * __this));
IL2CPP_REGISTER_METHOD(0x00CBF0D0, void, OnDestroy, (Brain * __this));
IL2CPP_REGISTER_METHOD(0x00CBF280, void, OnPreRestore, (Brain * __this));
IL2CPP_REGISTER_METHODINFO(0x0476CB70, Brain_OnPreRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CBF430, void, AddBehaviour, (Brain * __this, BrainBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00CBF4F0, void, RemoveBehaviour, (Brain * __this, BrainBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00CBF590, void, StopCurrentBehaviour, (Brain * __this));
IL2CPP_REGISTER_METHOD(0x00CBF650, void, EnqueueBehaviour, (Brain * __this, BrainBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00CBF6F0, void, FixedUpdate, (Brain * __this));
IL2CPP_REGISTER_METHOD(0x00CBFB30, BrainBehaviour *, SelectNextBehaviour, (Brain * __this));
IL2CPP_REGISTER_METHOD(0x00CBFD00, void, StartBehaviour, (Brain * __this, BrainBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00CBFDC0, void, EndBehaviour, (Brain * __this, BrainBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00CBFE90, void, __ctor, (Brain * __this));
}
