using namespace app;

namespace app::methods::PushPullBlockTest {
IL2CPP_REGISTER_METHOD(0x00653A60, Vector3, get_Position, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E84A50, bool, IsInAir, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E84D20, bool, get_IsGrabbable, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_IsGrabbed, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00B11500, void, set_IsGrabbed, (PushPullBlockTest * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00E84D30, void, OnPushOrPull, (PushPullBlockTest * __this, PlatformMovement * platformMovement));
IL2CPP_REGISTER_METHOD(0x00E84FA0, void, OnReleased, (PushPullBlockTest * __this, PlatformMovement * platformMovement));
IL2CPP_REGISTER_METHOD(0x00E852B0, void, OnHighlight, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E853D0, void, OnDehighlight, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E854F0, void, OnGrabbed, (PushPullBlockTest * __this, PlatformMovement * platformMovement));
IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, CanBeBashed, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x006B5650, float, PushableSpeedRatio, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00653A60, Vector3, GetPosition, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E85520, void, SetPosition, (PushPullBlockTest * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x002FBBA0, Rigidbody *, GetRigidbody, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E855A0, bool, get_IsSuspended, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E855B0, void, set_IsSuspended, (PushPullBlockTest * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00736620, SuspendableMask__Enum, get_Mask, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E855C0, void, set_Mask, (PushPullBlockTest * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00E85680, void, OnEnable, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E85770, void, OnDisable, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E85890, void, Awake, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E85AB0, void, OnDestroy, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E85B70, void, Start, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E85CD0, void, FixedUpdate, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E86650, void, ConstrainRotationFix, (PushPullBlockTest * __this));
IL2CPP_REGISTER_METHOD(0x00E86910, void, IgnoreCollisionWithPlayer, (PushPullBlockTest * __this, PlatformMovement * platformMovement, bool ignore));
IL2CPP_REGISTER_METHOD(0x002FBC90, void, ICanActivatePressurePlate_OnPressed, (PushPullBlockTest * __this, IPressurePlate * plate));
IL2CPP_REGISTER_METHOD(0x00A52470, void, ICanActivatePressurePlate_OnReleased, (PushPullBlockTest * __this, IPressurePlate * plate));
IL2CPP_REGISTER_METHOD(0x00E86AE0, void, __ctor, (PushPullBlockTest * __this));
}
