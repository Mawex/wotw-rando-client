using namespace app;

namespace app::methods::TriangleNet::Geometry::Point {
IL2CPP_REGISTER_METHOD(0x0261CAF0, void, __ctor, (Point * __this));
IL2CPP_REGISTER_METHOD(0x0261CB00, void, __ctor, (Point * __this, double x, double y));
IL2CPP_REGISTER_METHOD(0x0261CB20, void, __ctor, (Point * __this, double x, double y, int32_t label));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ID, (Point * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_ID, (Point * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0261CB30, double, get_X, (Point * __this));
IL2CPP_REGISTER_METHOD(0x0261CB40, void, set_X, (Point * __this, double value));
IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_Y, (Point * __this));
IL2CPP_REGISTER_METHOD(0x0261CB60, void, set_Y, (Point * __this, double value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Label, (Point * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Label, (Point * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0261CB70, bool, operator___, (Point * a, Point * b));
IL2CPP_REGISTER_METHOD(0x0261CBB0, bool, operator___, (Point * a, Point * b));
IL2CPP_REGISTER_METHOD(0x0261CBF0, bool, Equals, (Point * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0261CCF0, bool, Equals, (Point * __this, Point * p));
IL2CPP_REGISTER_METHOD(0x0261CD20, int32_t, CompareTo, (Point * __this, Point * other));
IL2CPP_REGISTER_METHOD(0x0261CD90, int32_t, GetHashCode, (Point * __this));
}
