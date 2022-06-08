using namespace app;

namespace app::methods::Moon::RammingBehaviour_RamState {
IL2CPP_REGISTER_METHOD(0x00C52F40, SurfaceTypeVFXHandler_2_MaterialBasedHornBugEffectsMap_HornBugMovementEffects_ *, get_VfxHandler, (RammingBehaviour_RamState * __this));
IL2CPP_REGISTER_METHOD(0x00C53240, String *, get_StateName, (RammingBehaviour_RamState * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (RammingBehaviour_RamState * __this, RammingBehaviour * behaviour));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (RammingBehaviour_RamState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (RammingBehaviour_RamState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (RammingBehaviour_RamState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (RammingBehaviour_RamState * __this));
IL2CPP_REGISTER_METHOD(0x00C532C0, void, UpdateVFX, (RammingBehaviour_RamState * __this, SurfaceMaterialType__Enum surfaceType));
IL2CPP_REGISTER_METHOD(0x00C53370, void, StopCurrentEfffect, (RammingBehaviour_RamState * __this));
IL2CPP_REGISTER_METHOD(0x00C534F0, void, StopAllEfffects, (RammingBehaviour_RamState * __this));
IL2CPP_REGISTER_METHOD(0x00C53590, void, ReleaseEffects, (RammingBehaviour_RamState * __this));
IL2CPP_REGISTER_METHOD(0x00C53630, GameObject *, GetEffectsPrefab, (RammingBehaviour_RamState * __this, HornBugMovementEffects * surfaceType));
}
