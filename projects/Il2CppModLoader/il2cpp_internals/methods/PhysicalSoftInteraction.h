using namespace app;

namespace app::methods::PhysicalSoftInteraction {
IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_Index, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_Index, (PhysicalSoftInteraction * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_IsRegistered, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x003FF7A0, void, set_IsRegistered, (PhysicalSoftInteraction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x014EE790, bool, get_WantsToRegister, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x014EE7A0, void, set_WantsToRegister, (PhysicalSoftInteraction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x014EE7B0, Bounds, get_Bounds, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsWater, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x014EE950, void, OnEnable, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x014EEAD0, void, OnDisable, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x014EEC00, void, Awake, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRegistered, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x014EECD0, float, MaxRadius, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RemoveInteraction, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x014EECE0, void, SetInteraction, (PhysicalSoftInteraction * __this, float time, Vector3 pos, Vector3 prevPos, Vector4 strength, Vector3 velocity, float radius, bool explosion, bool forcePlay, UberInteractionActor * actor));
IL2CPP_REGISTER_METHOD(0x014EEFA0, bool, DoesOverlap, (PhysicalSoftInteraction * __this, Vector3 position, Vector3 velocity, float interactionRadius, float zScale));
IL2CPP_REGISTER_METHOD(0x00D3D6A0, Vector3, GetPosition, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, GetExplodePoint, (PhysicalSoftInteraction * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x014EF200, void, OnDrawGizmosSelected, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x014EF300, void, __ctor, (PhysicalSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x014EF3E0, void, __cctor, (MethodInfo * method));
}
