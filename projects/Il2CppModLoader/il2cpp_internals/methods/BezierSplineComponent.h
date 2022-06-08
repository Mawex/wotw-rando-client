using namespace app;

namespace app::methods::BezierSplineComponent {
IL2CPP_REGISTER_METHOD(0x00D29400, void, OnDrawGizmosSelected, (BezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x00D29440, void, OnDrawGizmos, (BezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x00D29480, void, DrawGizmos, (BezierSplineComponent * __this, Color color, float alpha, bool selected));
IL2CPP_REGISTER_METHOD(0x002FB9F0, BaseSpline_SplineIterator *, get_iterator, (BezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x00D29E90, void, StartIterator, (BezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x00D29FA0, void, KillIterator, (BezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x00D29FB0, BaseSpline_SplineIterator *, Iterate, (BezierSplineComponent * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00D2A100, Matrix4x4, GetTransformMatrix, (BezierSplineComponent * __this));
IL2CPP_REGISTER_METHOD(0x00D2A1D0, Vector3, TransformPoint, (BezierSplineComponent * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x00D2A320, void, __ctor, (BezierSplineComponent * __this));
}
