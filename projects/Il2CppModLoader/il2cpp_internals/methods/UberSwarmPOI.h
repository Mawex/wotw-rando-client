using namespace app;

namespace app::methods::UberSwarmPOI {
IL2CPP_REGISTER_METHOD(0x0128C2C0, Vector2, get_Position, (UberSwarmPOI * __this));
IL2CPP_REGISTER_METHOD(0x0128C420, float, get_Radius, (UberSwarmPOI * __this));
IL2CPP_REGISTER_METHOD(0x0128C540, float, get_HalfWidth, (UberSwarmPOI * __this));
IL2CPP_REGISTER_METHOD(0x0128C660, float, get_HalfHeight, (UberSwarmPOI * __this));
IL2CPP_REGISTER_METHOD(0x0128C780, void, OnValidate, (UberSwarmPOI * __this));
IL2CPP_REGISTER_METHOD(0x0128C810, void, Awake, (UberSwarmPOI * __this));
IL2CPP_REGISTER_METHOD(0x0128C970, void, OnDestroy, (UberSwarmPOI * __this));
IL2CPP_REGISTER_METHOD(0x0128CAC0, Vector2, CalculateVelocity, (UberSwarmPOI * __this, ISwarmer * swarmer));
IL2CPP_REGISTER_METHOD(0x0128CBA0, Vector2, CalculateVelocityCircle, (UberSwarmPOI * __this, ISwarmer * swarmer));
IL2CPP_REGISTER_METHOD(0x0128CE80, Vector2, CalculateVelocityRectangle, (UberSwarmPOI * __this, ISwarmer * swarmer));
IL2CPP_REGISTER_METHOD(0x0128D500, void, __ctor, (UberSwarmPOI * __this));
}
