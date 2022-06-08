using namespace app;

namespace app::methods::SkeetoMoveToSemiRandomPositionBehaviour {
IL2CPP_REGISTER_METHOD(0x0075A130, int32_t, get_RandomIndex, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075A210, Vector3, get_TargetToAttackPosition, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075A3B0, int32_t, get_RandomIndexOffset, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075A3F0, void, set_RandomIndexOffset, (SkeetoMoveToSemiRandomPositionBehaviour * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0075A400, SkeetoLocomotion *, get_Locomotion, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075A4E0, void, OnEntityInitialized, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075A7B0, void, ScheduleRaycasts, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075AA90, BehaviourStatus__Enum, UpdateJobScheduled, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075B230, void, OnEnter, (SkeetoMoveToSemiRandomPositionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0075B3D0, void, OnExit, (SkeetoMoveToSemiRandomPositionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00754B80, void, OnWontReachTarget, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04745110, SkeetoMoveToSemiRandomPositionBehaviour_OnWontReachTarget__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0075B6F0, void, CalculateTargetOffsets, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075C2D0, bool, TryCalculateTargetPosition, (SkeetoMoveToSemiRandomPositionBehaviour * __this, int32_t longtitudeIndex, int32_t latitudeIndex, Vector3 * moveTarget));
IL2CPP_REGISTER_METHOD(0x0075C7C0, bool, NoGoZoneOnTheWay, (SkeetoMoveToSemiRandomPositionBehaviour * __this, Vector3 candidatePosition));
IL2CPP_REGISTER_METHOD(0x0075CB20, BehaviourStatus__Enum, OnExecute, (SkeetoMoveToSemiRandomPositionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0075CB50, BehaviourStatus__Enum, UpdateTraverse, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075CE80, void, OnDrawGizmos, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075D1E0, void, OnDestroy, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0075D390, void, __ctor, (SkeetoMoveToSemiRandomPositionBehaviour * __this));
}
