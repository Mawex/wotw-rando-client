#include <interception_macros.h>

namespace app::methods::Moon::TentacleTurnBehaviour {
IL2CPP_REGISTER_METHOD(0x010BAEF0, void, OnInitializeTask, (TentacleTurnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010BAFE0, void, TurnOffSprings, (TentacleTurnBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F298, TentacleTurnBehaviour_TurnOffSprings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010BB130, void, ResetJoints, (TentacleTurnBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04793238, TentacleTurnBehaviour_ResetJoints__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010BB180, void, OnEnterTask, (TentacleTurnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010BB4A0, BehaviourStatus__Enum, OnExecuteTask, (TentacleTurnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010BB750, void, OnExitTask, (TentacleTurnBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x010BBAE0, void, __ctor, (TentacleTurnBehaviour * __this));
}
