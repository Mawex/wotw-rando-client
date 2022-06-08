using namespace app;

namespace app::methods::Moon::MovementProcessor {
IL2CPP_REGISTER_METHOD(0x0111CA50, void, SetTargetLocalSpeed, (MovementProcessor * __this, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x0111CA70, void, AddTargetLocalSpeed, (MovementProcessor * __this, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, SetTargetLocalSpeedX, (MovementProcessor * __this, float velocityX));
IL2CPP_REGISTER_METHOD(0x00B83F40, void, SetTargetLocalSpeedY, (MovementProcessor * __this, float velocityY));
IL2CPP_REGISTER_METHOD(0x00F28550, Vector2, get_TargetLocalSpeed, (MovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x0111CA50, void, set_TargetLocalSpeed, (MovementProcessor * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_AllowFreeRotation, (MovementProcessor * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_AllowFreeRotation, (MovementProcessor * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MovementProcessor * __this));
}
