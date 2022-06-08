using namespace app;

namespace app::methods::SplineUtil {
IL2CPP_REGISTER_METHOD(0x009A30C0, int32_t, ClampIndex, (int32_t idx, int32_t len));
IL2CPP_REGISTER_METHOD(0x009A30E0, int32_t, WrapIndex, (int32_t idx, int32_t len));
IL2CPP_REGISTER_METHOD(0x009A3110, float, WrapPosition, (BaseSpline_SplineWrapMode__Enum wrapmode, float pos, float len));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SplineUtil * __this));
}
