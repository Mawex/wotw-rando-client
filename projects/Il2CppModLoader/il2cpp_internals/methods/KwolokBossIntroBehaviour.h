using namespace app;

namespace app::methods::KwolokBossIntroBehaviour {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (KwolokBossIntroBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012E2320, void, OnEnter, (KwolokBossIntroBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E2570, BehaviourStatus__Enum, OnExecute, (KwolokBossIntroBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E25A0, void, OnExit, (KwolokBossIntroBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012E2780, void, OnStartEscapeTrigger, (KwolokBossIntroBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04781D48, KwolokBossIntroBehaviour_OnStartEscapeTrigger__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012E2820, void, ModifyMaxLookAtWeights, (KwolokBossIntroBehaviour * __this, Vector2 * weights));
IL2CPP_REGISTER_METHOD(0x012E28D0, void, __ctor, (KwolokBossIntroBehaviour * __this));
}
