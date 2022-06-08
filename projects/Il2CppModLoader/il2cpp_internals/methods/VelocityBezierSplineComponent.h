#include <interception_macros.h>

namespace app::methods::VelocityBezierSplineComponent {
IL2CPP_REGISTER_METHOD(0x013C0A10, void, add_spline_event, (VelocityBezierSplineComponent * __this, SplineEventHandler * value));
IL2CPP_REGISTER_METHOD(0x013C0B00, void, remove_spline_event, (VelocityBezierSplineComponent * __this, SplineEventHandler * value));
IL2CPP_REGISTER_METHOD(0x013C0BF0, BaseSpline_SplineIterator *, get_Iterator, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x013C0CC0, void, Start, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x00D29E90, void, StartIterator, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x013C0D60, BaseSpline_SplineIterator *, NewIterator, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x013C0E10, BaseSpline_SplineIterator *, NewReverseIterator, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x013C1010, void, ResetIterator, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x00D29FA0, void, KillIterator, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x013C11C0, BaseSpline_SplineIterator *, Iterate, (VelocityBezierSplineComponent * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00D2A100, Matrix4x4, GetTransformMatrix, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x00D2A1D0, Vector3, TransformPoint, (VelocityBezierSplineComponent * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x013C1440, Vector3, InvTransformPoint, (VelocityBezierSplineComponent * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x013C1590, void, InsertPoint, (VelocityBezierSplineComponent * __this, int32_t idx, Vector3 pos, BaseSpline_SplinePointType__Enum type, Vector3 cp1, Vector3 cp2, Vector3 v, Vector3 p_v, Vector3 n_v));
IL2CPP_REGISTER_METHOD(0x013C1690, void, RemovePoint, (VelocityBezierSplineComponent * __this, VelocityBezierSpline_VelocityBezierSplinePoint * point));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Vector3__Array *, GetDrawPoints, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x013C1740, Vector3, GetWorldPoint, (VelocityBezierSplineComponent * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x013C1840, Vector3, NearestWorldPoint, (VelocityBezierSplineComponent * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x013C1AD0, float, NearestWorldOffset, (VelocityBezierSplineComponent * __this, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x013C1D20, void, SetPointWorld, (VelocityBezierSplineComponent * __this, int32_t n, Vector3 pos));
IL2CPP_REGISTER_METHOD(0x013C1E20, void, SetNextControlWorld, (VelocityBezierSplineComponent * __this, int32_t n, Vector3 next_control));
IL2CPP_REGISTER_METHOD(0x013C20F0, void, SetPrevControlWorld, (VelocityBezierSplineComponent * __this, int32_t n, Vector3 prev_control));
IL2CPP_REGISTER_METHOD(0x013C23C0, void, SetControlsWorld, (VelocityBezierSplineComponent * __this, int32_t n, Vector3 control1, Vector3 control2));
IL2CPP_REGISTER_METHOD(0x013C2710, bool, Looped, (VelocityBezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x013C2730, void, __ctor, (VelocityBezierSplineComponent * __this));
}
