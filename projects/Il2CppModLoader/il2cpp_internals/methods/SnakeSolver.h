using namespace app;

namespace app::methods::SnakeSolver {
IL2CPP_REGISTER_METHOD(0x006D4160, int32_t, get_TotalJoints, (SnakeSolver * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Vector2__Array *, get_Segments, (SnakeSolver * __this));
IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_Time, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006D4240, void, OnEnable, (SnakeSolver * __this));
IL2CPP_REGISTER_METHOD(0x006D4570, void, Update, (SnakeSolver * __this));
IL2CPP_REGISTER_METHOD(0x006D5BB0, void, OnValidate, (SnakeSolver * __this));
IL2CPP_REGISTER_METHOD(0x006D5D70, Vector2, RotateVector2, (SnakeSolver * __this, Vector2 v, float degrees));
IL2CPP_REGISTER_METHOD(0x006D5F60, float, Angle, (SnakeSolver * __this, Vector2 v));
IL2CPP_REGISTER_METHOD(0x006D6010, void, __ctor, (SnakeSolver * __this));
}
