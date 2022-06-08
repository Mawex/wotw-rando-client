using namespace app;

namespace app::methods::RootMotion::V3Tools {
IL2CPP_REGISTER_METHOD(0x02A2E3A0, Vector3, ExtractVertical, (Vector3 v, Vector3 verticalAxis, float weight));
IL2CPP_REGISTER_METHOD(0x02A2E520, Vector3, ExtractHorizontal, (Vector3 v, Vector3 normal, float weight));
IL2CPP_REGISTER_METHOD(0x02A2E6C0, Vector3, ClampDirection, (Vector3 direction, Vector3 normalDirection, float clampWeight, int32_t clampSmoothing, bool * changed));
IL2CPP_REGISTER_METHOD(0x02A2E9D0, Vector3, ClampDirection, (Vector3 direction, Vector3 normalDirection, float clampWeight, int32_t clampSmoothing, float * clampValue));
IL2CPP_REGISTER_METHOD(0x02A2ECF0, Vector3, LineToPlane, (Vector3 origin, Vector3 direction, Vector3 planeNormal, Vector3 planePoint));
}
