using namespace app;

namespace app::methods::PiranhaPatrolBehaviour {
IL2CPP_REGISTER_METHOD(0x01162FD0, int32_t, get_RandomIndex, (PiranhaPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011630B0, int32_t, get_RandomIndexOffset, (PiranhaPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01016990, void, set_RandomIndexOffset, (PiranhaPatrolBehaviour * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x011630F0, SwimmingLocomotion *, get_Locomotion, (PiranhaPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011631D0, void, OnEntityInitialized, (PiranhaPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01163280, void, OnEnter, (PiranhaPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011636A0, void, OnExit, (PiranhaPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006B33C0, void, OnWontReachTarget, (PiranhaPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011636E0, void, CalculateTargetOffsets, (PiranhaPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01163F40, bool, TryCalculateTargetPosition, (PiranhaPatrolBehaviour * __this, int32_t longtitudeIndex, int32_t latitudeIndex, Vector3 * moveTarget));
IL2CPP_REGISTER_METHOD(0x011645B0, BehaviourStatus__Enum, OnExecute, (PiranhaPatrolBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011646E0, void, OnDrawGizmos, (PiranhaPatrolBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01164980, void, __ctor, (PiranhaPatrolBehaviour * __this));
}
