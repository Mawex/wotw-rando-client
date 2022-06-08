using namespace app;

namespace app::methods::BezierSpline {
IL2CPP_REGISTER_METHOD(0x00F9F600, void, AppendPoint, (BezierSpline * __this, Vector3 pos, BaseSpline_SplinePointType__Enum type, Vector3 cp1, Vector3 cp2));
IL2CPP_REGISTER_METHOD(0x00F9F7B0, void, RemoveLastPoint, (BezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x00F9F840, void, RemoveAllPoints, (BezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x00F9F8F0, void, ReversePoints, (BezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x00F9FA90, void, InsertPoint, (BezierSpline * __this, int32_t idx, Vector3 pos, BaseSpline_SplinePointType__Enum type, Vector3 cp1, Vector3 cp2));
IL2CPP_REGISTER_METHODINFO(0x0474B518, BezierSpline_InsertPoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00F9FCA0, void, Rebuild, (BezierSpline * __this, bool calculate_length));
IL2CPP_REGISTER_METHOD(0x00FA0440, void, BuildSegment, (BezierSpline * __this, BezierSpline_BezierSplineSegment * ss, BezierSpline_BezierSplinePoint * pp, BezierSpline_BezierSplinePoint * sp, BezierSpline_BezierSplinePoint * ep, BezierSpline_BezierSplinePoint * np));
IL2CPP_REGISTER_METHOD(0x00FA0B40, void, PreparePoint, (BezierSpline * __this, BezierSpline_BezierSplinePoint * pp, BezierSpline_BezierSplinePoint * pt, BezierSpline_BezierSplinePoint * np));
IL2CPP_REGISTER_METHOD(0x00FA0DB0, float, GetLength, (BezierSpline * __this, BezierSpline_BezierSplineSegment * ss));
IL2CPP_REGISTER_METHOD(0x00FA1010, Vector3, GetPosition, (BezierSpline * __this, BezierSpline_BezierSplineSegment * ss, float t));
IL2CPP_REGISTER_METHOD(0x00FA1340, Vector3, GetTangent, (BezierSpline * __this, BezierSpline_BezierSplineSegment * ss, float t));
IL2CPP_REGISTER_METHOD(0x00FA1650, Vector3, GetNormal, (BezierSpline * __this, BezierSpline_BezierSplineSegment * ss, float t));
IL2CPP_REGISTER_METHOD(0x00FA18D0, float, GetReparamRungeKutta, (BezierSpline * __this, BezierSpline_BezierSplineSegment * ss, float u));
IL2CPP_REGISTER_METHOD(0x00FA1B40, float, GetReparam, (BezierSpline * __this, BezierSpline_BezierSplineSegment * ss, float u));
IL2CPP_REGISTER_METHOD(0x00FA1E90, int32_t, GetPointCount, (BezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x00FA1F20, Vector3, GetPoint, (BezierSpline * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x00FA2000, int32_t, GetSegmentCount, (BezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x00FA2010, float, GetSegmentLength, (BezierSpline * __this, int32_t segidx));
IL2CPP_REGISTER_METHOD(0x00FA2060, float, GetSegmentStartLength, (BezierSpline * __this, int32_t segidx));
IL2CPP_REGISTER_METHOD(0x00FA20B0, float, GetSegmentEndLength, (BezierSpline * __this, int32_t segidx));
IL2CPP_REGISTER_METHOD(0x00FA2100, int32_t, FindSegment, (BezierSpline * __this, float offset));
IL2CPP_REGISTER_METHOD(0x00FA21A0, Vector3, GetDrawPosition, (BezierSpline * __this, int32_t segidx, float t));
IL2CPP_REGISTER_METHOD(0x00FA2210, Vector3, GetPosition, (BezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x00FA22F0, Vector3, GetTangent, (BezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x00FA23D0, Vector3, GetNormal, (BezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x00FA24B0, Vector3, GetSpeed, (BezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x00FA2560, Vector3, GetVelocity, (BezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x00FA2610, void, __ctor, (BezierSpline * __this));
}
