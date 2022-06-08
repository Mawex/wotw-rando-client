using namespace app;

namespace app::methods::MetaBallWaterZone {
IL2CPP_REGISTER_METHOD(0x0159E290, void, FixedUpdate, (MetaBallWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x0159E8B0, void, OnEnter, (MetaBallWaterZone * __this, Vector2 point, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x0159ED40, void, OnExit, (MetaBallWaterZone * __this, Vector2 point, Vector2 velocity));
IL2CPP_REGISTER_METHOD(0x0159F1D0, Vector2, GetVelocityAtPoint, (MetaBallWaterZone * __this, Vector2 point));
IL2CPP_REGISTER_METHOD(0x00417870, bool, Contains, (MetaBallWaterZone * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x0159F4A0, void, __ctor, (MetaBallWaterZone * __this));
IL2CPP_REGISTER_METHOD(0x0159F4F0, void, __cctor, (MethodInfo * method));
}
