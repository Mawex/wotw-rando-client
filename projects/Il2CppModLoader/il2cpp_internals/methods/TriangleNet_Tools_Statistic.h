#include <interception_macros.h>

namespace app::methods::TriangleNet::Tools::Statistic {
IL2CPP_REGISTER_METHOD(0x01433F10, double, get_ShortestEdge, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x0261CB30, double, get_LongestEdge, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_ShortestAltitude, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_LargestAspectRatio, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x002FD520, double, get_SmallestArea, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x01BC1650, double, get_LargestArea, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x021DFE90, double, get_SmallestAngle, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x00791E10, double, get_LargestAngle, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Int32__Array *, get_AngleHistogram, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, Int32__Array *, get_MinAngleHistogram, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, Int32__Array *, get_MaxAngleHistogram, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x02A9A110, void, GetAspectHistogram, (Statistic * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02A9A930, void, Update, (Statistic * __this, Mesh_1 * mesh, int32_t sampleDegrees));
IL2CPP_REGISTER_METHOD(0x02A9B990, void, ComputeAngles, (ITriangle * triangle, Double__Array * data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Statistic * __this));
IL2CPP_REGISTER_METHOD(0x02A9BDD0, void, __cctor, ());
}
