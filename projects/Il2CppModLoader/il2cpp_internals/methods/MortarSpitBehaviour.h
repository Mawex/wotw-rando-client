#include <interception_macros.h>

namespace app::methods::MortarSpitBehaviour {
IL2CPP_REGISTER_METHOD(0x0147E890, void, OnEntityInitialized, (MortarSpitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0147EB60, void, OnEnter, (MortarSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0147EF30, BehaviourStatus__Enum, OnExecute, (MortarSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0147EF80, void, OnExit, (MortarSpitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0147EFC0, void, Spit, (MortarSpitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047063B8, MortarSpitBehaviour_Spit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0147F750, void, __ctor, (MortarSpitBehaviour * __this));
}
