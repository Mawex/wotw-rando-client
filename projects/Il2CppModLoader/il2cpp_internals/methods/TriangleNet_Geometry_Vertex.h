#include <interception_macros.h>

namespace app::methods::TriangleNet_Geometry::Vertex {
    IL2CPP_REGISTER_METHOD(0x0261E6E0, void, __ctor_1, (app::Vertex * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0261E700, void, __ctor_2, (app::Vertex * this_ptr, double x, double y));
    IL2CPP_REGISTER_METHOD(0x0261E720, void, __ctor_3, (app::Vertex * this_ptr, double x, double y, int32_t mark));
    IL2CPP_REGISTER_METHOD(0x005C3FF0, app::VertexType__Enum, get_Type, (app::Vertex * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0261E740, double, get_Item, (app::Vertex * this_ptr, int32_t i));
    IL2CPP_REGISTER_METHODINFO(0x047438E8, Vertex_get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, GetHashCode, (app::Vertex * this_ptr));
}
