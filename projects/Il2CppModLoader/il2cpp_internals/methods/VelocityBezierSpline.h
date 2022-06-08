#include <interception_macros.h>

namespace app::methods::VelocityBezierSpline {
IL2CPP_REGISTER_METHOD(0x013BCE90, void, ReversePoints, (VelocityBezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x013BD030, void, FlipXPoints, (VelocityBezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x013BD150, void, FlipYPoints, (VelocityBezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x013BD270, void, InsertPoint, (VelocityBezierSpline * __this, int32_t idx, Vector3 pos, BaseSpline_SplinePointType__Enum type, Vector3 cp1, Vector3 cp2, Vector3 v, Vector3 p_v, Vector3 n_v));
IL2CPP_REGISTER_METHODINFO(0x04713770, VelocityBezierSpline_InsertPoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x013BD4C0, void, Rebuild, (VelocityBezierSpline * __this, bool calculate_length));
IL2CPP_REGISTER_METHOD(0x013BDB80, void, BuildSegment, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplineSegment * ss, VelocityBezierSpline_VelocityBezierSplinePoint * pp, VelocityBezierSpline_VelocityBezierSplinePoint * sp, VelocityBezierSpline_VelocityBezierSplinePoint * ep, VelocityBezierSpline_VelocityBezierSplinePoint * np));
IL2CPP_REGISTER_METHOD(0x013BE3A0, void, PreparePoint, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplinePoint * pp, VelocityBezierSpline_VelocityBezierSplinePoint * pt, VelocityBezierSpline_VelocityBezierSplinePoint * np));
IL2CPP_REGISTER_METHOD(0x013BE7B0, float, GetLength, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplineSegment * ss));
IL2CPP_REGISTER_METHOD(0x013BEA10, Vector3, GetPosition, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplineSegment * ss, float t));
IL2CPP_REGISTER_METHOD(0x013BED40, Vector3, GetTangent, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplineSegment * ss, float t));
IL2CPP_REGISTER_METHOD(0x013BF050, Vector3, GetNormal, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplineSegment * ss, float t));
IL2CPP_REGISTER_METHOD(0x013BF0B0, Vector3, GetSpeed, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplineSegment * ss, float t));
IL2CPP_REGISTER_METHOD(0x013BF3E0, float, GetParameter, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplineSegment * ss, float t, float start_value, float end_value));
IL2CPP_REGISTER_METHOD(0x013BF4F0, float, GetReparamRungeKutta, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplineSegment * ss, float u));
IL2CPP_REGISTER_METHOD(0x013BF760, float, GetReparam, (VelocityBezierSpline * __this, VelocityBezierSpline_VelocityBezierSplineSegment * ss, float u));
IL2CPP_REGISTER_METHOD(0x013BFAB0, int32_t, GetPointCount, (VelocityBezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x013BFB40, Vector3, GetPoint, (VelocityBezierSpline * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x00FA2000, int32_t, GetSegmentCount, (VelocityBezierSpline * __this));
IL2CPP_REGISTER_METHOD(0x00FA2010, float, GetSegmentLength, (VelocityBezierSpline * __this, int32_t segidx));
IL2CPP_REGISTER_METHOD(0x013BFC20, float, GetSegmentOffset, (VelocityBezierSpline * __this, int32_t segidx));
IL2CPP_REGISTER_METHOD(0x00FA2060, float, GetSegmentStartLength, (VelocityBezierSpline * __this, int32_t segidx));
IL2CPP_REGISTER_METHOD(0x00FA20B0, float, GetSegmentEndLength, (VelocityBezierSpline * __this, int32_t segidx));
IL2CPP_REGISTER_METHOD(0x00FA2100, int32_t, FindSegment, (VelocityBezierSpline * __this, float offset));
IL2CPP_REGISTER_METHOD(0x013BFC80, Vector3, GetDrawPosition, (VelocityBezierSpline * __this, int32_t segidx, float t));
IL2CPP_REGISTER_METHOD(0x013BFE00, Vector3, GetPosition, (VelocityBezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x013BFFA0, Vector3, GetTangent, (VelocityBezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x013C0150, Vector3, GetNormal, (VelocityBezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x013C0370, Vector3, GetSpeed, (VelocityBezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x013C0520, Vector3, GetVelocity, (VelocityBezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x013C0690, String *, GetAction, (VelocityBezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x013C0750, String *, PopAction, (VelocityBezierSpline * __this, int32_t segidx, float segpos));
IL2CPP_REGISTER_METHOD(0x013C0830, void, __ctor, (VelocityBezierSpline * __this));
}
