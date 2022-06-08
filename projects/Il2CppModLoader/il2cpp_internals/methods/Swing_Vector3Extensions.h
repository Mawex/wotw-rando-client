using namespace app;

namespace app::methods::Swing::Vector3Extensions {
IL2CPP_REGISTER_METHOD(0x018318F0, Vector3, perpendicular, (Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831930, Vector3, negateX, (Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831970, Vector3, negateY, (Vector3 _this));
IL2CPP_REGISTER_METHOD(0x018319B0, Vector3, negateZ, (Vector3 _this));
IL2CPP_REGISTER_METHOD(0x018319F0, Vector3, xy, (Vector3 _this, Vector2 _vector2));
IL2CPP_REGISTER_METHOD(0x01831A30, Vector3, x, (Vector3 _this, float _x));
IL2CPP_REGISTER_METHOD(0x01831A60, Vector3, y, (Vector3 _this, float _y));
IL2CPP_REGISTER_METHOD(0x01831A90, Vector3, z, (Vector3 _this, float _z));
IL2CPP_REGISTER_METHOD(0x01831AC0, Vector3, mult, (Vector3 _this, Vector3 _v));
IL2CPP_REGISTER_METHOD(0x01831B20, Vector3, mult, (Vector3 _this, float _x, float _y, float _z));
IL2CPP_REGISTER_METHOD(0x01831B60, Vector3, div, (Vector3 _this, Vector3 _v));
IL2CPP_REGISTER_METHOD(0x01831BC0, Vector3, div, (Vector3 _this, float _x, float _y, float _z));
IL2CPP_REGISTER_METHOD(0x01831C00, Vector3, oneOver, (Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831C50, bool, approx, (Vector3 _a, Vector3 _b, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01831E00, Vector3, abs, (Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831F30, bool, isValid, (Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831FF0, bool, isZero, (Vector3 _this, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01832070, bool, isNormalized, (Vector3 _this));
IL2CPP_REGISTER_METHOD(0x018320B0, Vector3, normalized, (Vector3 _this, float * _magnitude));
IL2CPP_REGISTER_METHOD(0x018321C0, Vector3, rotate, (Vector3 _this, Angle _a));
IL2CPP_REGISTER_METHOD(0x018322F0, Vector3, rotate, (Vector3 _this, float _a));
IL2CPP_REGISTER_METHOD(0x01832420, Vector3, rotate, (Vector3 _this, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x01832490, Vector3, rotate, (float _x, float _y, float _z, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x018324D0, Vector3, rotateAround, (Vector3 _this, Vector3 _pivot, Angle _a));
IL2CPP_REGISTER_METHOD(0x01832610, Vector3, rotateAround, (Vector3 _this, Vector3 _pivot, float _a));
IL2CPP_REGISTER_METHOD(0x01832750, Vector3, rotateAround, (Vector3 _this, Vector3 _pivot, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x018328B0, Angle, toAngle, (Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01832990, Angle, toAngleFast, (Vector3 _this));
}
