using namespace app;

namespace app::methods::AttachToVerletStructure {
IL2CPP_REGISTER_METHOD(0x008519A0, bool, ISuspendable_get_IsSuspended, (AttachToVerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x008519B0, void, ISuspendable_set_IsSuspended, (AttachToVerletStructure * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008519C0, SuspendableMask__Enum, ISuspendable_get_Mask, (AttachToVerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x008519D0, void, ISuspendable_set_Mask, (AttachToVerletStructure * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x008519E0, void, Awake, (AttachToVerletStructure * __this));
IL2CPP_REGISTER_METHOD(0x00851C70, void, IPhysicsUpdateHandler_OnUpdatePhysics, (AttachToVerletStructure * __this, float delta));
IL2CPP_REGISTER_METHOD(0x00852930, void, __ctor, (AttachToVerletStructure * __this));
}
