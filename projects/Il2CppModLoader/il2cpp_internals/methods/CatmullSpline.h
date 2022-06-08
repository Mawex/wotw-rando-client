using namespace app;

namespace app::methods::CatmullSpline {
IL2CPP_REGISTER_METHOD(0x02551F70, List_1_UnityEngine_Vector3_ *, GetCatmullRomSplinePoints, (CatmullSpline * __this, Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3));
IL2CPP_REGISTER_METHOD(0x02552000, List_1_UnityEngine_Vector3_ *, GetCatmullRomSplinePoints, (CatmullSpline * __this, Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, int32_t subdivisions));
IL2CPP_REGISTER_METHOD(0x025522B0, Vector3, GetCatmullRomPosition, (CatmullSpline * __this, float t, Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3));
IL2CPP_REGISTER_METHOD(0x025526A0, void, __ctor, (CatmullSpline * __this));
}
