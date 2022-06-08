#include <interception_macros.h>

namespace app::methods::Swing::Vector2Extensions {
IL2CPP_REGISTER_METHOD(0x01830790, Vector2, perpendicular, (Vector2 _this));
IL2CPP_REGISTER_METHOD(0x018307C0, Vector2, inversePerpendicular, (Vector2 _this));
IL2CPP_REGISTER_METHOD(0x018307F0, Vector2, swapXY, (Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830810, Vector2, negateX, (Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830840, Vector2, negateY, (Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830870, Vector2, x, (Vector2 _this, float _x));
IL2CPP_REGISTER_METHOD(0x01830890, Vector2, y, (Vector2 _this, float _y));
IL2CPP_REGISTER_METHOD(0x018308B0, Vector3, z, (Vector2 _this, float _z));
IL2CPP_REGISTER_METHOD(0x018308E0, Vector2, mult, (Vector2 _this, Vector2 _v));
IL2CPP_REGISTER_METHOD(0x01830920, Vector2, mult, (Vector2 _this, float _x, float _y));
IL2CPP_REGISTER_METHOD(0x01830950, Vector2, div, (Vector2 _this, Vector2 _v));
IL2CPP_REGISTER_METHOD(0x01830990, Vector2, div, (Vector2 _this, float _x, float _y));
IL2CPP_REGISTER_METHOD(0x018309C0, Vector2, oneOver, (Vector2 _this));
IL2CPP_REGISTER_METHOD(0x018309F0, bool, approx, (Vector2 _a, Vector2 _b, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01830B00, Vector2, abs, (Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830BC0, bool, isValid, (Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01830C30, bool, isZero, (Vector2 _this, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01830C80, bool, isNormalized, (Vector2 _this, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01830CB0, Vector2, normalized, (Vector2 _this, float * _magnitude));
IL2CPP_REGISTER_METHOD(0x01830D80, Vector2, rotate, (Vector2 _this, Angle _a));
IL2CPP_REGISTER_METHOD(0x01830E80, Vector2, rotate, (Vector2 _this, float _a));
IL2CPP_REGISTER_METHOD(0x01830F70, Vector2, rotate, (Vector2 _this, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x01830FC0, Vector2, rotate, (float _x, float _y, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x01830FF0, Vector2, rotateAround, (Vector2 _this, Vector2 _pivot, Angle _a));
IL2CPP_REGISTER_METHOD(0x018310F0, Vector2, rotateAround, (Vector2 _this, Vector2 _pivot, float _a));
IL2CPP_REGISTER_METHOD(0x018311F0, Vector2, rotateAround, (Vector2 _this, Vector2 _pivot, float _cos, float _sin));
IL2CPP_REGISTER_METHOD(0x018312F0, float, dot, (Vector2 _this, Vector2 _other));
IL2CPP_REGISTER_METHOD(0x018313A0, float, cross, (Vector2 _this, Vector2 _other));
IL2CPP_REGISTER_METHOD(0x01830090, Vector2, project, (Vector2 _this, Vector2 _onNormal));
IL2CPP_REGISTER_METHOD(0x01830230, Vector2, projectPerpendicular, (Vector2 _this, Vector2 _onNormal));
IL2CPP_REGISTER_METHOD(0x018313D0, bool, lesser, (Vector2 _this, Vector2 _other));
IL2CPP_REGISTER_METHOD(0x01831410, bool, greater, (Vector2 _this, Vector2 _other));
IL2CPP_REGISTER_METHOD(0x0182E070, Vector4, concat, (Vector2 _xy, Vector2 _zw));
IL2CPP_REGISTER_METHOD(0x01831450, Angle, toAngle, (Vector2 _this));
IL2CPP_REGISTER_METHOD(0x01831500, Angle, toAngleFast, (Vector2 _this));
}
