using namespace app;

namespace app::methods::RootMotion::FinalIK::GrounderQuadruped {
IL2CPP_REGISTER_METHOD(0x0206BC80, void, OpenUserManual, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206BD40, void, OpenScriptReference, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206BE00, void, ResetPosition, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206BE40, bool, IsReadyToInitiate, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206BFE0, bool, IsReadyToInitiateLegs, (GrounderQuadruped * __this, IK__Array * ikComponents));
IL2CPP_REGISTER_METHOD(0x0206C150, void, OnDisable, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206C1E0, void, Update, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206C2D0, void, Initiate, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206CA60, Transform__Array *, InitiateFeet, (GrounderQuadruped * __this, IK__Array * ikComponents, GrounderQuadruped_Foot__Array * * f, int32_t indexOffset));
IL2CPP_REGISTER_METHOD(0x0206D1B0, void, LateUpdate, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206D330, void, RootRotation, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206DB70, void, OnSolverUpdate, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHODINFO(0x0472A3D0, GrounderQuadruped_OnSolverUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0206EE60, void, UpdateForefeetRoot, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206F340, void, SetFootIK, (GrounderQuadruped * __this, GrounderQuadruped_Foot foot, float maxOffset));
IL2CPP_REGISTER_METHOD(0x0206F5E0, void, OnPostSolverUpdate, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHODINFO(0x047803B8, GrounderQuadruped_OnPostSolverUpdate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0206FAD0, void, OnDestroy, (GrounderQuadruped * __this));
IL2CPP_REGISTER_METHOD(0x0206FB10, void, DestroyLegs, (GrounderQuadruped * __this, IK__Array * ikComponents));
IL2CPP_REGISTER_METHOD(0x0206FEB0, void, __ctor, (GrounderQuadruped * __this));
}
