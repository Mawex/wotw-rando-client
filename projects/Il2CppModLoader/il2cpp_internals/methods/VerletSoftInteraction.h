using namespace app;

namespace app::methods::VerletSoftInteraction {
IL2CPP_REGISTER_METHOD(0x013C8520, Bounds, get_Bounds, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, get_Index, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00C08D30, void, set_Index, (VerletSoftInteraction * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsRegistered, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsRegistered, (VerletSoftInteraction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00614BA0, bool, get_WantsToRegister, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00614BB0, void, set_WantsToRegister, (VerletSoftInteraction * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsWater, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x013C86C0, void, OnEnable, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x013C87F0, void, OnDisable, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRegistered, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x013C8920, float, MaxRadius, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RemoveInteraction, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x013C8930, void, SetInteraction, (VerletSoftInteraction * __this, float time, Vector3 pos, Vector3 prevPos, Vector4 strength, Vector3 velocity, float radius, bool explosion, bool forcePlay, UberInteractionActor * actor));
IL2CPP_REGISTER_METHOD(0x013C8C10, bool, DoesOverlap, (VerletSoftInteraction * __this, Vector3 interactionPosition, Vector3 velocity, float interactionRadius, float zScale));
IL2CPP_REGISTER_METHOD(0x013C8E70, Vector3, GetPosition, (VerletSoftInteraction * __this));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, GetExplodePoint, (VerletSoftInteraction * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x013C8EE0, void, __ctor, (VerletSoftInteraction * __this));
}
