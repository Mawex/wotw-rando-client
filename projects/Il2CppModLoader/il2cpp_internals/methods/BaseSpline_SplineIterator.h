using namespace app;

namespace app::methods::BaseSpline_SplineIterator {
IL2CPP_REGISTER_METHOD(0x00F89440, void, __ctor, (BaseSpline_SplineIterator * __this, BaseSpline * spline, bool reverse, int32_t startidx, int32_t endidx));
IL2CPP_REGISTER_METHOD(0x00F895E0, void, Reset, (BaseSpline_SplineIterator * __this, BaseSpline * spline, bool reverse, int32_t startidx, int32_t endidx));
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetTransform, (BaseSpline_SplineIterator * __this, Transform * _transform));
IL2CPP_REGISTER_METHOD(0x00F89730, void, SetMatrix, (BaseSpline_SplineIterator * __this, Matrix4x4 _matrix));
IL2CPP_REGISTER_METHOD(0x00F89760, void, SetMatrix, (BaseSpline_SplineIterator * __this, Transform * _transform));
IL2CPP_REGISTER_METHOD(0x00F897B0, Vector3, GetPosition, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F89A60, Vector3, GetPosition, (BaseSpline_SplineIterator * __this, Matrix4x4 * m));
IL2CPP_REGISTER_METHOD(0x00F89BB0, Vector3, GetPosition, (BaseSpline_SplineIterator * __this, Matrix4x4 * m, float offsetPercent));
IL2CPP_REGISTER_METHOD(0x00F89D80, Vector3, StartPos, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8A020, Vector3, EndPos, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8A2F0, Vector3, GetTangent, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8A770, Vector3, GetNormal, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8A9E0, Matrix4x4, GetTransformMatrix, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8AB00, Vector3, TransformPoint, (BaseSpline_SplineIterator * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00F8AD50, Vector3, InvTransformPoint, (BaseSpline_SplineIterator * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00F8B050, Vector3, GetSpeed, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B0B0, Vector3, GetVelocity, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B110, Color, GetColor, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B160, Color, GetHighlight, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00A64080, bool, IsOnceOut, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B1B0, void, Reset, (BaseSpline_SplineIterator * __this, bool reverse));
IL2CPP_REGISTER_METHOD(0x00F8B240, void, SetOffset, (BaseSpline_SplineIterator * __this, float offset));
IL2CPP_REGISTER_METHOD(0x00F8B2D0, float, GetOffset, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B310, float, GetFullOffset, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B370, void, SetOffsetPercent, (BaseSpline_SplineIterator * __this, float offset));
IL2CPP_REGISTER_METHOD(0x00F8B410, float, GetCurrentSegmentOffsetK, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B460, float, GetOffsetPercent, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B500, void, Iterate, (BaseSpline_SplineIterator * __this, float length));
IL2CPP_REGISTER_METHOD(0x00F8B770, void, SetToStart, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B780, void, SetToEnd, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, Loops, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, GetSegment, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B7C0, String *, GetAction, (BaseSpline_SplineIterator * __this));
IL2CPP_REGISTER_METHOD(0x00F8B810, String *, PopAction, (BaseSpline_SplineIterator * __this));
}
