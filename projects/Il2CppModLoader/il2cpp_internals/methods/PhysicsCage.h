using namespace app;

namespace app::methods::PhysicsCage {
IL2CPP_REGISTER_METHOD(0x013C9650, bool, get_IsSuspended, (PhysicsCage * __this));
IL2CPP_REGISTER_METHOD(0x014FBF80, void, set_IsSuspended, (PhysicsCage * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Suspend, (PhysicsCage * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (PhysicsCage * __this));
IL2CPP_REGISTER_METHOD(0x00443CC0, void, AttachedBodyEnabled, (PhysicsCage * __this));
IL2CPP_REGISTER_METHOD(0x014FBF90, bool, Attach, (PhysicsCage * __this, ConfigurableJoint * joint, Vector3 attachmentPoint, AttachJointSettings * jointSettings));
IL2CPP_REGISTER_METHOD(0x014FC1E0, Rigidbody *, GetRigidbody, (PhysicsCage * __this, Vector3 attachmentPoint));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WasAttached, (PhysicsCage * __this, IPhysicsAttachable * attachable, ConfigurableJoint * joint));
IL2CPP_REGISTER_METHOD(0x014FC710, void, __ctor, (PhysicsCage * __this));
}
