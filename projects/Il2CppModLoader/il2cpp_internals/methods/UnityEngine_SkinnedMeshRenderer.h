using namespace app;

namespace app::methods::UnityEngine::SkinnedMeshRenderer {
IL2CPP_REGISTER_METHOD(0x0297DC60, Transform *, get_rootBone, (SkinnedMeshRenderer * __this));
IL2CPP_REGISTER_METHOD(0x0297DCB0, Transform__Array *, get_bones, (SkinnedMeshRenderer * __this));
IL2CPP_REGISTER_METHOD(0x0297DD00, void, set_bones, (SkinnedMeshRenderer * __this, Transform__Array * value));
IL2CPP_REGISTER_METHOD(0x0297DD60, Mesh *, get_sharedMesh, (SkinnedMeshRenderer * __this));
IL2CPP_REGISTER_METHOD(0x0297DDB0, void, set_sharedMesh, (SkinnedMeshRenderer * __this, Mesh * value));
IL2CPP_REGISTER_METHOD(0x0297DE10, void, BakeMesh, (SkinnedMeshRenderer * __this, Mesh * mesh));
IL2CPP_REGISTER_METHOD(0x0297DE70, Bounds, GetLocalAABB, (SkinnedMeshRenderer * __this));
IL2CPP_REGISTER_METHOD(0x0297DF00, void, SetLocalAABB, (SkinnedMeshRenderer * __this, Bounds b));
IL2CPP_REGISTER_METHOD(0x0297DF60, void, LoadSkinningMatricesIntoComputeBuffer, (SkinnedMeshRenderer * __this, ComputeBuffer * computeBuffer));
IL2CPP_REGISTER_METHOD(0x0297DFC0, bool, IsUsingComputeSkinPoseBuffer, (SkinnedMeshRenderer * __this));
IL2CPP_REGISTER_METHOD(0x0297DE70, Bounds, get_localBounds, (SkinnedMeshRenderer * __this));
IL2CPP_REGISTER_METHOD(0x0297E010, void, set_localBounds, (SkinnedMeshRenderer * __this, Bounds value));
IL2CPP_REGISTER_METHOD(0x0297E080, void, GetLocalAABB_Injected, (SkinnedMeshRenderer * __this, Bounds * ret));
IL2CPP_REGISTER_METHOD(0x0297E0E0, void, SetLocalAABB_Injected, (SkinnedMeshRenderer * __this, Bounds * b));
}
