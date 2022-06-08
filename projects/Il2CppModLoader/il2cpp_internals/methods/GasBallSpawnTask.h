#include <interception_macros.h>

namespace app::methods::GasBallSpawnTask {
IL2CPP_REGISTER_METHOD(0x00419300, void, OnEnterTask, (GasBallSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00419920, BehaviourStatus__Enum, OnExecuteTask, (GasBallSpawnTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00419D60, void, SetActivateDamageDealers, (GasBallSpawnTask * __this, bool activate));
IL2CPP_REGISTER_METHOD(0x00419E40, void, StartMoving, (GasBallSpawnTask * __this));
IL2CPP_REGISTER_METHODINFO(0x04755ED8, GasBallSpawnTask_StartMoving__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00419FA0, void, __ctor, (GasBallSpawnTask * __this));
}
