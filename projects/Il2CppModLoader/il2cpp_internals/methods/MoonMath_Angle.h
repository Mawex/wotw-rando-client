using namespace app;

namespace app::methods::MoonMath_Angle {
IL2CPP_REGISTER_METHOD(0x013B3770, float, Wrap, (float angle));
IL2CPP_REGISTER_METHOD(0x025740C0, float, Wrap180, (float angle));
IL2CPP_REGISTER_METHOD(0x02574100, float, Clamp180, (float angle, float from, float to));
IL2CPP_REGISTER_METHOD(0x02574210, float, Difference, (float value1, float value2));
IL2CPP_REGISTER_METHOD(0x025742E0, float, Difference, (Vector2 direction1, Vector2 direction2));
IL2CPP_REGISTER_METHOD(0x025743B0, float, AngleSubtract, (float start, float target));
IL2CPP_REGISTER_METHOD(0x025745C0, float, RotateTowards, (float startDegrees, float targetDegrees, float degrees));
IL2CPP_REGISTER_METHOD(0x025747D0, Vector2, Rotate, (Vector2 v, float angle));
IL2CPP_REGISTER_METHOD(0x025748F0, Vector3, Rotate3, (Vector3 v, float angle));
IL2CPP_REGISTER_METHOD(0x02574A50, Vector2, Unrotate, (Vector2 v, float angle));
IL2CPP_REGISTER_METHOD(0x02574A70, float, AngleFromVector, (Vector2 delta));
IL2CPP_REGISTER_METHOD(0x02574B20, float, AngleFromDirection, (Vector2 delta));
IL2CPP_REGISTER_METHOD(0x02574BD0, Quaternion, QuaternionFromDirection, (Vector2 delta));
IL2CPP_REGISTER_METHOD(0x02574CD0, Vector2, VectorFromAngle, (float angle));
}
