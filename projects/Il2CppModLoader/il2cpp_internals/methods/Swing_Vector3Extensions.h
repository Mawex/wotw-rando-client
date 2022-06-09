#include <interception_macros.h>

namespace app::methods::Swing::Vector3Extensions {
IL2CPP_REGISTER_METHOD(0x018318F0, Vector3, perpendicular, (app::Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831930, Vector3, negateX, (app::Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831970, Vector3, negateY, (app::Vector3 _this));
IL2CPP_REGISTER_METHOD(0x018319B0, Vector3, negateZ, (app::Vector3 _this));
IL2CPP_REGISTER_METHOD(0x018319F0, Vector3, xy, (app::Vector3 _this, app::Vector2 _vector2));
IL2CPP_REGISTER_METHOD(0x01831A30, Vector3, x, (app::Vector3 _this, float _x));
IL2CPP_REGISTER_METHOD(0x01831A60, Vector3, y, (app::Vector3 _this, float _y));
IL2CPP_REGISTER_METHOD(0x01831A90, Vector3, z, (app::Vector3 _this, float _z));
IL2CPP_REGISTER_METHOD(0x01831AC0, Vector3, mult_1, (app::Vector3 _this, app::Vector3 _v));
IL2CPP_REGISTER_METHOD(0x01831B20, Vector3, mult_2, (app::Vector3 _this, float _x, float _y, float _z));
IL2CPP_REGISTER_METHOD(0x01831B60, Vector3, div_1, (app::Vector3 _this, app::Vector3 _v));
IL2CPP_REGISTER_METHOD(0x01831BC0, Vector3, div_2, (app::Vector3 _this, float _x, float _y, float _z));
IL2CPP_REGISTER_METHOD(0x01831C00, Vector3, oneOver, (app::Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831C50, bool, approx, (app::Vector3 _a, app::Vector3 _b, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01831E00, Vector3, abs, (app::Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831F30, bool, isValid, (app::Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01831FF0, bool, isZero, (app::Vector3 _this, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01832070, bool, isNormalized, (app::Vector3 _this));
IL2CPP_REGISTER_METHOD(0x018320B0, Vector3, normalized, (app::Vector3 _this, app::float * _magnitude));
IL2CPP_REGISTER_METHOD(0x018321C0, Vector3, rotate_1, (app::Vector3 _this, app::Angle _a));
IL2CPP_REGISTER_METHOD(0x018322F0, Vector3, rotate_2, (app::Vector3 _this, float _a));
IL2CPP_REGISTER_METHOD(0x01832420, Vector3, rotate_3, (app::Vector3 _this, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x01832490, Vector3, rotate_4, (float _x, float _y, float _z, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x018324D0, Vector3, rotateAround_1, (app::Vector3 _this, app::Vector3 _pivot, app::Angle _a));
IL2CPP_REGISTER_METHOD(0x01832610, Vector3, rotateAround_2, (app::Vector3 _this, app::Vector3 _pivot, float _a));
IL2CPP_REGISTER_METHOD(0x01832750, Vector3, rotateAround_3, (app::Vector3 _this, app::Vector3 _pivot, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x018328B0, Angle, toAngle, (app::Vector3 _this));
IL2CPP_REGISTER_METHOD(0x01832990, Angle, toAngleFast, (app::Vector3 _this));
}
