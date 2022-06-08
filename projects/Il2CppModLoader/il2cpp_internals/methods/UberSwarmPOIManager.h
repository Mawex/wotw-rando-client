using namespace app;

namespace app::methods::UberSwarmPOIManager {
IL2CPP_REGISTER_METHOD(0x0128D520, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0128D620, void, Register, (UberSwarmPOI * poi));
IL2CPP_REGISTER_METHOD(0x0128D6F0, void, Unregister, (UberSwarmPOI * poi));
IL2CPP_REGISTER_METHOD(0x0128D7B0, Vector2, CalculateVelocity, (ISwarmer * swarmer));
IL2CPP_REGISTER_METHOD(0x0128DA60, void, __cctor, (MethodInfo * method));
}
