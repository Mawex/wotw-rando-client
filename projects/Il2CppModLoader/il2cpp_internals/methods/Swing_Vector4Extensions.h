#include <interception_macros.h>

namespace app::methods::Swing::Vector4Extensions {
IL2CPP_REGISTER_METHOD(0x01832A70, Vector4, mult_1, (app::Vector4 _this, app::Vector4 _v));
IL2CPP_REGISTER_METHOD(0x01832AD0, Vector4, mult_2, (app::Vector4 _this, float _x, float _y, float _z, float _w));
IL2CPP_REGISTER_METHOD(0x01832B10, Vector4, div_1, (app::Vector4 _this, app::Vector4 _v));
IL2CPP_REGISTER_METHOD(0x01832B70, Vector4, div_2, (app::Vector4 _this, float _x, float _y, float _z, float _w));
IL2CPP_REGISTER_METHOD(0x01832BB0, Vector4, oneOver, (app::Vector4 _this));
IL2CPP_REGISTER_METHOD(0x01832BF0, bool, approx, (app::Vector4 _a, app::Vector4 _b, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01832DC0, Vector4, abs, (app::Vector4 _this));
IL2CPP_REGISTER_METHOD(0x01832EF0, bool, isValid, (app::Vector4 _this));
IL2CPP_REGISTER_METHOD(0x01832FC0, bool, isZero, (app::Vector4 _this, float _epsilon));
IL2CPP_REGISTER_METHOD(0x01833040, bool, isNormalized, (app::Vector4 _this));
IL2CPP_REGISTER_METHOD(0x01833070, Vector4, normalized, (app::Vector4 _this, app::float * _magnitude));
}
