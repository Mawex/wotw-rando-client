#include <interception_macros.h>

namespace app::methods::TriangleNet::Geometry::RegionPointer {
IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_Area, (RegionPointer * __this));
IL2CPP_REGISTER_METHOD(0x0261E350, void, set_Area, (RegionPointer * __this, double value));
IL2CPP_REGISTER_METHODINFO(0x04717740, RegionPointer_set_Area__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0261E410, void, __ctor, (RegionPointer * __this, double x, double y, int32_t id));
IL2CPP_REGISTER_METHOD(0x0261E430, void, __ctor, (RegionPointer * __this, double x, double y, int32_t id, double area));
}
