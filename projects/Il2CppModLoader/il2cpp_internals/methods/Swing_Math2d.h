using namespace app;

namespace app::methods::Swing::Math2d {
IL2CPP_REGISTER_METHOD(0x0182B520, float, getAngle, (Vector2 _vector));
IL2CPP_REGISTER_METHOD(0x0182B5D0, float, getAngleFast, (Vector2 _normalizedDir));
IL2CPP_REGISTER_METHOD(0x0182B6A0, Vector2, getVector, (float _angle));
IL2CPP_REGISTER_METHOD(0x0182B760, Vector2, getVector, (Angle _angle));
IL2CPP_REGISTER_METHOD(0x0182B820, float, wrapAngle, (float _angle));
IL2CPP_REGISTER_METHOD(0x0182B910, float, wrapAngle2Pi, (float _angle));
IL2CPP_REGISTER_METHOD(0x0182B9E0, double, IEEERemainder, (double x, double y));
IL2CPP_REGISTER_METHOD(0x0182BB10, float, getShortestAngleDelta, (float _from, float _to));
IL2CPP_REGISTER_METHOD(0x0182BBE0, float, asinh, (float _a));
IL2CPP_REGISTER_METHOD(0x00BEEA40, float, lerp, (float _from, float _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182BCA0, float, lerp01, (float _from, float _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182BD90, float, inverseLerp, (float _from, float _to, float _value));
IL2CPP_REGISTER_METHOD(0x0182BDA0, float, inverseLerpClamped, (float _from, float _to, float _value));
IL2CPP_REGISTER_METHOD(0x0182BDE0, float, clamp, (float _min, float _max, float _value));
IL2CPP_REGISTER_METHOD(0x0182BE00, float, homotheticTransformClamped, (float _fromIn, float _toIn, float _fromOut, float _toOut, float _value));
IL2CPP_REGISTER_METHOD(0x0182BEF0, Vector2, lerp, (Vector2 _from, Vector2 _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182BF40, Vector3, lerp, (Vector3 _from, Vector3 _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182BFD0, Vector4, lerp, (Vector4 _from, Vector4 _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182C090, Vector2, lerp01, (Vector2 _from, Vector2 _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182C180, Vector3, lerp01, (Vector3 _from, Vector3 _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182C2E0, Vector4, lerp01, (Vector4 _from, Vector4 _to, float _t));
IL2CPP_REGISTER_METHOD(0x0182C470, float, round, (float _value));
IL2CPP_REGISTER_METHOD(0x0182C520, float, roundOrOne, (float _value));
IL2CPP_REGISTER_METHOD(0x0182C650, float, roundToOdd, (float _value));
IL2CPP_REGISTER_METHOD(0x0182C710, float, roundToEven, (float _value));
IL2CPP_REGISTER_METHOD(0x0182C7C0, float, abs, (float _value));
IL2CPP_REGISTER_METHOD(0x0182C870, float, floor, (float _value));
IL2CPP_REGISTER_METHOD(0x0182C920, float, ceil, (float _value));
IL2CPP_REGISTER_METHOD(0x0182C9D0, float, min, (float _value1, float _value2));
IL2CPP_REGISTER_METHOD(0x0182CAB0, float, max, (float _value1, float _value2));
IL2CPP_REGISTER_METHOD(0x0182CB90, int32_t, min, (int32_t _value1, int32_t _value2));
IL2CPP_REGISTER_METHOD(0x0182CC40, int32_t, max, (int32_t _value1, int32_t _value2));
IL2CPP_REGISTER_METHOD(0x0182CCF0, bool, raycastOnPlaneXY, (Ray _ray, Vector2 * _worldPos));
IL2CPP_REGISTER_METHOD(0x0182CF30, bool, raycastOnPlaneXY, (Ray _ray, float _depth, Vector3 * _worldPos));
IL2CPP_REGISTER_METHOD(0x0182D0C0, void, __cctor, (MethodInfo * method));
}
