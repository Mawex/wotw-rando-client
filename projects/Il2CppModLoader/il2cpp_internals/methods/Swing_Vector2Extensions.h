#include <interception_macros.h>

namespace app::methods::Swing::Vector2Extensions {
IL2CPP_REGISTER_METHOD(0x01830790, Vector2, perpendicular, (app::Vector2 _this));
IL2CPP_REGISTER_METHOD(0x018307C0, Vector2, inversePerpendicular, (app::Vector2 _this));
IL2CPP_REGISTER_METHOD(0x018307F0, Vector2, swapXY, (app::Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830810, Vector2, negateX, (app::Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830840, Vector2, negateY, (app::Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830870, Vector2, x, (app::Vector2 _this, float _x));
IL2CPP_REGISTER_METHOD(0x01830890, Vector2, y, (app::Vector2 _this, float _y));
IL2CPP_REGISTER_METHOD(0x018308B0, Vector3, z, (app::Vector2 _this, float _z));
IL2CPP_REGISTER_METHOD(0x018308E0, Vector2, mult_1, (app::Vector2 _this, app::Vector2 _v));
IL2CPP_REGISTER_METHOD(0x01830920, Vector2, mult_2, (app::Vector2 _this, float _x, float _y));
IL2CPP_REGISTER_METHOD(0x01830950, Vector2, div_1, (app::Vector2 _this, app::Vector2 _v));
IL2CPP_REGISTER_METHOD(0x01830990, Vector2, div_2, (app::Vector2 _this, float _x, float _y));
IL2CPP_REGISTER_METHOD(0x018309C0, Vector2, oneOver, (app::Vector2 _this));
IL2CPP_REGISTER_METHOD(0x018309F0, bool, approx, (app::Vector2 _a, app::Vector2 _b, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01830B00, Vector2, abs, (app::Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830BC0, bool, isValid, (app::Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830C30, bool, isZero, (app::Vector2 _this, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01830C80, bool, isNormalized, (app::Vector2 _this, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01830CB0, Vector2, normalized, (app::Vector2 _this, app::float * _magnitude));
IL2CPP_REGISTER_METHOD(0x01830D80, Vector2, rotate_1, (app::Vector2 _this, app::Angle _a));
IL2CPP_REGISTER_METHOD(0x01830E80, Vector2, rotate_2, (app::Vector2 _this, float _a));
IL2CPP_REGISTER_METHOD(0x01830F70, Vector2, rotate_3, (app::Vector2 _this, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x01830FC0, Vector2, rotate_4, (float _x, float _y, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x01830FF0, Vector2, rotateAround_1, (app::Vector2 _this, app::Vector2 _pivot, app::Angle _a));
IL2CPP_REGISTER_METHOD(0x018310F0, Vector2, rotateAround_2, (app::Vector2 _this, app::Vector2 _pivot, float _a));
IL2CPP_REGISTER_METHOD(0x018311F0, Vector2, rotateAround_3, (app::Vector2 _this, app::Vector2 _pivot, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x018312F0, float, dot, (app::Vector2 _this, app::Vector2 _other));
IL2CPP_REGISTER_METHOD(0x018313A0, float, cross, (app::Vector2 _this, app::Vector2 _other));
IL2CPP_REGISTER_METHOD(0x01830090, Vector2, project, (app::Vector2 _this, app::Vector2 _on_normal));
IL2CPP_REGISTER_METHOD(0x01830230, Vector2, projectPerpendicular, (app::Vector2 _this, app::Vector2 _on_normal));
IL2CPP_REGISTER_METHOD(0x018313D0, bool, lesser, (app::Vector2 _this, app::Vector2 _other));
IL2CPP_REGISTER_METHOD(0x01831410, bool, greater, (app::Vector2 _this, app::Vector2 _other));
IL2CPP_REGISTER_METHOD(0x0182E070, Vector4, concat, (app::Vector2 _xy, app::Vector2 _zw));
IL2CPP_REGISTER_METHOD(0x01831450, Angle, toAngle, (app::Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01831500, Angle, toAngleFast, (app::Vector2 _this));
}
