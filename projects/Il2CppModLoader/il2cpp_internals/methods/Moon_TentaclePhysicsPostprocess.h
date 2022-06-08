#include <interception_macros.h>

namespace app::methods::Moon::TentaclePhysicsPostprocess {
IL2CPP_REGISTER_METHOD(0x010ADD80, bool, get_ClassEnabled, ());
IL2CPP_REGISTER_METHOD(0x010ADE20, void, set_ClassEnabled, (bool value));
IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010ADED0, TentaclePhysicsController *, get_PhysCtrl, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010ADEF0, void, OnAddedToAnimator, (TentaclePhysicsPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x010ADFA0, void, OnRemovedFromAnimator, (TentaclePhysicsPostprocess * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x010AE050, void, RegisterBatchedCapsules, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010AE0F0, void, UnregisterBatchedCapsules, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010AE190, int32_t, get_JointCount, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010AE1C0, void, GenerateEnvTopology, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010AE400, void, Init, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010AE610, void, Allocate, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010AE8B0, void, Process, (TentaclePhysicsPostprocess * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x010AF8D0, void, DrawJointChain, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos, Color color, float radius));
IL2CPP_REGISTER_METHOD(0x010AF940, void, GetTransforms, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos, Quaternion__Array * jointRot));
IL2CPP_REGISTER_METHOD(0x010AF9E0, void, SetTransforms, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos, Quaternion__Array * jointRot, Vector3__Array * jointScale));
IL2CPP_REGISTER_METHOD(0x010AFA60, void, PullTowardsTarget, (TentaclePhysicsPostprocess * __this, Vector3__Array * targetPos, Vector3__Array * particlePos, Vector3__Array * particleVelo, float influence, float dt));
IL2CPP_REGISTER_METHOD(0x010B0160, void, ApplyBoneLen, (TentaclePhysicsPostprocess * __this, Vector3__Array * particlePos, Vector3__Array * particleVelo, float dt));
IL2CPP_REGISTER_METHOD(0x010B0720, void, ApplyVeloSmoothing, (TentaclePhysicsPostprocess * __this, Vector3__Array * particleVelo));
IL2CPP_REGISTER_METHOD(0x010B0E60, void, ApplyStraightening, (TentaclePhysicsPostprocess * __this, Vector3__Array * particlePos, Vector3__Array * particleVelo, float dt));
IL2CPP_REGISTER_METHOD(0x010B13E0, void, ApplyGravity, (TentaclePhysicsPostprocess * __this, Vector3__Array * particleVelo, float influence, float dt));
IL2CPP_REGISTER_METHOD(0x010B1630, void, PushFromEnv, (TentaclePhysicsPostprocess * __this, EnvTopology * env, Vector3__Array * particlePos, Vector3__Array * particleVelo, bool applyFriction, float dt));
IL2CPP_REGISTER_METHOD(0x010B1FC0, void, UpdateParticles, (TentaclePhysicsPostprocess * __this, Vector3__Array * particlePos, Vector3__Array * particleVelo, bool inWater, float dt));
IL2CPP_REGISTER_METHOD(0x010B22D0, void, ValidateParticlePositions, (TentaclePhysicsPostprocess * __this, Vector3 origin, Vector3__Array * particlePos, Vector3__Array * particleVelo, Vector3__Array * fallbackPos, float maxDist));
IL2CPP_REGISTER_METHOD(0x010B2560, void, ApplyKickback, (TentaclePhysicsPostprocess * __this, Vector3__Array * sourcePos, Vector3__Array * resultPos));
IL2CPP_REGISTER_METHOD(0x010B2760, void, UpdateHeadPos, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos));
IL2CPP_REGISTER_METHOD(0x010B29C0, void, UpdateHeadRot, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos, Quaternion__Array * jointPostRot, Quaternion__Array * jointAnimRot));
IL2CPP_REGISTER_METHOD(0x010B2E70, Quaternion, GetSimpleHeadRot, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos));
IL2CPP_REGISTER_METHOD(0x010B3070, void, CalculateJointRotations, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos, Quaternion__Array * jointRot, Vector3__Array * jointScale));
IL2CPP_REGISTER_METHOD(0x010B3400, void, UpdateAnimRefTarget, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010B3700, void, ApplyTargetIKToChain, (TentaclePhysicsPostprocess * __this, Vector3__Array * fromJoints, Vector3__Array * toJoints));
IL2CPP_REGISTER_METHOD(0x010B3F90, Vector3, ApplyTargetIKToJoint, (TentaclePhysicsPostprocess * __this, Vector3 jointPos, Vector3 refOrigin, Vector3 refTangent, Vector3 refNormal, Vector3 targetTangent, Vector3 targetNormal, float targetTangentScale, float weight));
IL2CPP_REGISTER_METHOD(0x010B42E0, void, UpdateAdaptiveColliders, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos, int32_t jointCount));
IL2CPP_REGISTER_METHOD(0x010B4360, void, SetActiveCapsules, (TentaclePhysicsPostprocess * __this, int32_t fromIndex, int32_t toIndex, bool active));
IL2CPP_REGISTER_METHOD(0x010B4540, void, AdaptCapsulesToRange, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos, int32_t fromIndex, int32_t toIndex, int32_t depth));
IL2CPP_REGISTER_METHOD(0x010B4920, void, AddAdaptiveCapsule, (TentaclePhysicsPostprocess * __this, Vector3__Array * jointPos, int32_t fromIndex, int32_t toIndex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmosSelected, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010B4D00, void, __ctor, (TentaclePhysicsPostprocess * __this));
IL2CPP_REGISTER_METHOD(0x010B4E20, void, __cctor, ());
}
