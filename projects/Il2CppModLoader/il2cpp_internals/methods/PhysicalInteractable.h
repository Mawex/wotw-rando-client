using namespace app;

namespace app::methods::PhysicalInteractable {
IL2CPP_REGISTER_METHOD(0x014EB3D0, bool, get_CanInteract, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x003FFB70, int32_t, get_Index, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014EB3E0, void, set_Index, (PhysicalInteractable * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsRegistered, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsRegistered, (PhysicalInteractable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00413180, SuspendableMask__Enum, get_Mask, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00413190, void, set_Mask, (PhysicalInteractable * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, get_IsSuspended, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x008496A0, void, set_IsSuspended, (PhysicalInteractable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x014EB3F0, Bounds, get_Bounds, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014EB5A0, SoundHost *, get_EffectiveSoundHost, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsWater, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014EB6D0, void, OnEnable, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014EBA00, void, OnDisable, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014EBCC0, void, Awake, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014EBFB0, void, Update, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014EC2F0, void, OnCollisionEnter, (PhysicalInteractable * __this, Collision * other));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRegistered, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014EC530, float, MaxRadius, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RemoveInteraction, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014EC540, void, SetInteraction, (PhysicalInteractable * __this, float time, Vector3 pos, Vector3 prevPos, Vector4 strength, Vector3 velocity, float radius, bool explosion, bool forcePlay, UberInteractionActor * actor));
IL2CPP_REGISTER_METHOD(0x014EC770, void, ApplyForce, (PhysicalInteractable * __this, Vector2 velocity, Vector3 point, Vector2 minForce, FloatRange_1 velocityFilterX, FloatRange_1 velocityFilterY));
IL2CPP_REGISTER_METHOD(0x014ECA90, bool, DoesOverlap, (PhysicalInteractable * __this, Vector3 position, Vector3 velocity, float interactionRadius, float zScale));
IL2CPP_REGISTER_METHOD(0x00C7C010, Vector3, GetPosition, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x00B68B50, Vector3, GetExplodePoint, (PhysicalInteractable * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x014ECCC0, void, OnRecieveDamage, (PhysicalInteractable * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x04750460, PhysicalInteractable_OnRecieveDamage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014ECEB0, void, PlaySound, (PhysicalInteractable * __this, Event_1 * Event));
IL2CPP_REGISTER_METHOD(0x010CDA20, void, OnDrawGizmosSelected, (PhysicalInteractable * __this));
IL2CPP_REGISTER_METHOD(0x014ED090, void, __ctor, (PhysicalInteractable * __this));
}
