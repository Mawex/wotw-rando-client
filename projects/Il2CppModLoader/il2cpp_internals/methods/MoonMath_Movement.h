using namespace app;

namespace app::methods::MoonMath_Movement {
IL2CPP_REGISTER_METHOD(0x02576C20, float, AccelerateSpeed, (float speed, float acceleration, float maxSpeed, bool left));
IL2CPP_REGISTER_METHOD(0x02576DD0, float, DecelerateSpeed, (float speed, float deceleration));
IL2CPP_REGISTER_METHOD(0x02576F60, float, ApplyGravity, (float speed, float gravity, float maxSpeed));
IL2CPP_REGISTER_METHOD(0x02577080, float, SpeedFromAngular, (float r, float angularSpeed));
}
