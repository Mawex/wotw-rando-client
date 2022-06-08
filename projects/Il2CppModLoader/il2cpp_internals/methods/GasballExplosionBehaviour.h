#include <interception_macros.h>

namespace app::methods::GasballExplosionBehaviour {
IL2CPP_REGISTER_METHOD(0x0041F950, void, OnEnterTask, (GasballExplosionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041FB20, BehaviourStatus__Enum, OnExecuteTask, (GasballExplosionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041FB50, void, OnExitTask, (GasballExplosionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041FD00, void, Explode, (GasballExplosionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04794A58, GasballExplosionBehaviour_Explode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0041FDB0, void, __ctor, (GasballExplosionBehaviour * __this));
}
