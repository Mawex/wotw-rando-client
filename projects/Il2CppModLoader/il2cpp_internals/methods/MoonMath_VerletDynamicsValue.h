using namespace app;

namespace app::methods::MoonMath_VerletDynamicsValue {
IL2CPP_REGISTER_METHOD(0x0257AAB0, void, __ctor, (MoonMath_VerletDynamicsValue * __this, float X, float K, float Friction, float maxSpeed, float minX, float maxX));
IL2CPP_REGISTER_METHOD(0x0257AAF0, float, Update, (MoonMath_VerletDynamicsValue * __this));
IL2CPP_REGISTER_METHOD(0x0257AB00, float, Update, (MoonMath_VerletDynamicsValue * __this, float targetX));
IL2CPP_REGISTER_METHOD(0x0257AC70, float, get_Speed, (MoonMath_VerletDynamicsValue * __this));
IL2CPP_REGISTER_METHOD(0x0257AC80, void, set_Speed, (MoonMath_VerletDynamicsValue * __this, float value));
}
