using namespace app;

namespace app::methods::TriangleNet::Geometry::Rectangle {
IL2CPP_REGISTER_METHOD(0x0261DD00, void, __ctor, (Rectangle * __this));
IL2CPP_REGISTER_METHOD(0x0261DD30, void, __ctor, (Rectangle * __this, Rectangle * other));
IL2CPP_REGISTER_METHOD(0x0261DD80, void, __ctor, (Rectangle * __this, double x, double y, double width, double height));
IL2CPP_REGISTER_METHOD(0x01433F10, double, get_Left, (Rectangle * __this));
IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_Right, (Rectangle * __this));
IL2CPP_REGISTER_METHOD(0x0261CB30, double, get_Bottom, (Rectangle * __this));
IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_Top, (Rectangle * __this));
IL2CPP_REGISTER_METHOD(0x0261DDA0, double, get_Width, (Rectangle * __this));
IL2CPP_REGISTER_METHOD(0x0261DDB0, double, get_Height, (Rectangle * __this));
IL2CPP_REGISTER_METHOD(0x0261DDC0, void, Resize, (Rectangle * __this, double dx, double dy));
IL2CPP_REGISTER_METHOD(0x0261DE00, void, Expand, (Rectangle * __this, Point * p));
IL2CPP_REGISTER_METHOD(0x0261DF30, void, Expand, (Rectangle * __this, IEnumerable_1_TriangleNet_Geometry_Point_ * points));
IL2CPP_REGISTER_METHOD(0x0261E100, void, Expand, (Rectangle * __this, Rectangle * other));
IL2CPP_REGISTER_METHOD(0x0261E230, bool, Contains, (Rectangle * __this, double x, double y));
IL2CPP_REGISTER_METHOD(0x0261E260, bool, Contains, (Rectangle * __this, Point * pt));
IL2CPP_REGISTER_METHOD(0x0261E2B0, bool, Contains, (Rectangle * __this, Rectangle * other));
IL2CPP_REGISTER_METHOD(0x0261E300, bool, Intersects, (Rectangle * __this, Rectangle * other));
}
