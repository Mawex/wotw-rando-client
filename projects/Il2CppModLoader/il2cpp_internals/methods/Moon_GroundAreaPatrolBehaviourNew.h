#include <interception_macros.h>

namespace app::methods::Moon::GroundAreaPatrolBehaviourNew {
IL2CPP_REGISTER_METHOD(0x0148AD80, void, OnEntityInitialized, (GroundAreaPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148AED0, void, PlayIdle, (GroundAreaPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148B1D0, Vector3, ProcessRootMotion, (GroundAreaPatrolBehaviourNew * __this, Vector3 motion));
IL2CPP_REGISTER_METHODINFO(0x0471D190, GroundAreaPatrolBehaviourNew_ProcessRootMotion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0148B2F0, void, IdleFinished, (GroundAreaPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHODINFO(0x04714478, GroundAreaPatrolBehaviourNew_IdleFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0148B530, float, GetIdleInverval, (GroundAreaPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148B610, void, Start, (GroundAreaPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148B6F0, void, OnEnter, (GroundAreaPatrolBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0148B830, void, SetTarget, (GroundAreaPatrolBehaviourNew * __this, bool moveLeft));
IL2CPP_REGISTER_METHOD(0x0148BC10, bool, MovingInPatrolDirection, (GroundAreaPatrolBehaviourNew * __this));
IL2CPP_REGISTER_METHOD(0x0148BCB0, BehaviourStatus__Enum, OnExecute, (GroundAreaPatrolBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0148C090, void, OnExit, (GroundAreaPatrolBehaviourNew * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0144E510, void, __ctor, (GroundAreaPatrolBehaviourNew * __this));
}
