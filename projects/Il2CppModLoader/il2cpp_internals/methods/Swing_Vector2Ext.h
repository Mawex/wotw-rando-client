#include <interception_macros.h>

namespace app::methods::Swing::Vector2Ext {
IL2CPP_REGISTER_METHOD(0x013BB100, float, cross, (Vector2 lhs, Vector2 rhs));
IL2CPP_REGISTER_METHOD(0x01830090, Vector2, project, (Vector2 _vector, Vector2 _onNormal));
IL2CPP_REGISTER_METHOD(0x01830230, Vector2, projectPerpendicular, (Vector2 _vector, Vector2 _onNormal));
IL2CPP_REGISTER_METHOD(0x01830300, Vector2, slerp, (Vector2 _from, Vector2 _to, float _t));
IL2CPP_REGISTER_METHOD(0x01830510, Vector2, lerpDirection, (Vector2 _from, Vector2 _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182ACD0, Vector2, uniform, (float _xy));
IL2CPP_REGISTER_METHOD(0x018306D0, float, sqrDistance, (Vector2 _p1, Vector2 _p2));
}
