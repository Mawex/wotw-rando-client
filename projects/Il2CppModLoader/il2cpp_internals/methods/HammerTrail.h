using namespace app;

namespace app::methods::HammerTrail {
IL2CPP_REGISTER_METHOD(0x0109C420, void, Initialize, (HammerTrail * __this, Transform * tracedPoint, Transform * rotationCenter));
IL2CPP_REGISTER_METHOD(0x0109C540, void, StopTracingAndDestroy, (HammerTrail * __this));
IL2CPP_REGISTER_METHOD(0x0109C550, void, Start, (HammerTrail * __this));
IL2CPP_REGISTER_METHOD(0x0109C5E0, void, Update, (HammerTrail * __this));
IL2CPP_REGISTER_METHOD(0x0109C900, void, RemoveExpiredPoints, (HammerTrail * __this));
IL2CPP_REGISTER_METHOD(0x0109CA30, void, AddNewPoints, (HammerTrail * __this));
IL2CPP_REGISTER_METHOD(0x0109CFC0, void, SyncWithLineRenderer, (HammerTrail * __this));
IL2CPP_REGISTER_METHOD(0x0109D120, void, Clear, (HammerTrail * __this));
IL2CPP_REGISTER_METHOD(0x0109D130, bool, IsEmpty, (HammerTrail * __this));
IL2CPP_REGISTER_METHOD(0x0109D140, void, __ctor, (HammerTrail * __this));
}
