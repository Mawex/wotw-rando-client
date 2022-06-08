using namespace app;

namespace app::methods::RootMotion::FinalIK::BipedIK {
IL2CPP_REGISTER_METHOD(0x0204ECD0, void, OpenUserManual, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x0204ED90, void, OpenScriptReference, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x0204EE50, void, SupportGroup, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x0204EF10, void, ASThread, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x0204EFD0, float, GetIKPositionWeight, (BipedIK * __this, AvatarIKGoal__Enum goal));
IL2CPP_REGISTER_METHOD(0x0204F000, float, GetIKRotationWeight, (BipedIK * __this, AvatarIKGoal__Enum goal));
IL2CPP_REGISTER_METHOD(0x0204F030, void, SetIKPositionWeight, (BipedIK * __this, AvatarIKGoal__Enum goal, float weight));
IL2CPP_REGISTER_METHOD(0x0204F070, void, SetIKRotationWeight, (BipedIK * __this, AvatarIKGoal__Enum goal, float weight));
IL2CPP_REGISTER_METHOD(0x0204F0B0, void, SetIKPosition, (BipedIK * __this, AvatarIKGoal__Enum goal, Vector3 IKPosition));
IL2CPP_REGISTER_METHOD(0x0204F0F0, void, SetIKRotation, (BipedIK * __this, AvatarIKGoal__Enum goal, Quaternion IKRotation));
IL2CPP_REGISTER_METHOD(0x0204F120, Vector3, GetIKPosition, (BipedIK * __this, AvatarIKGoal__Enum goal));
IL2CPP_REGISTER_METHOD(0x0204F180, Quaternion, GetIKRotation, (BipedIK * __this, AvatarIKGoal__Enum goal));
IL2CPP_REGISTER_METHOD(0x0204F1C0, void, SetLookAtWeight, (BipedIK * __this, float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes));
IL2CPP_REGISTER_METHOD(0x0204F380, void, SetLookAtPosition, (BipedIK * __this, Vector3 lookAtPosition));
IL2CPP_REGISTER_METHOD(0x0204F3C0, void, SetSpinePosition, (BipedIK * __this, Vector3 spinePosition));
IL2CPP_REGISTER_METHOD(0x0204F400, void, SetSpineWeight, (BipedIK * __this, float weight));
IL2CPP_REGISTER_METHOD(0x0204F430, IKSolverLimb *, GetGoalIK, (BipedIK * __this, AvatarIKGoal__Enum goal));
IL2CPP_REGISTER_METHOD(0x00980110, void, InitiateBipedIK, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, UpdateBipedIK, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x0204F4B0, void, SetToDefaults, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x0204F750, void, FixTransforms, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x0204F850, void, InitiateSolver, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x0204FC40, void, UpdateSolver, (BipedIK * __this));
IL2CPP_REGISTER_METHOD(0x02050110, void, LogWarning, (BipedIK * __this, String * message));
IL2CPP_REGISTER_METHOD(0x02050190, void, __ctor, (BipedIK * __this));
}
