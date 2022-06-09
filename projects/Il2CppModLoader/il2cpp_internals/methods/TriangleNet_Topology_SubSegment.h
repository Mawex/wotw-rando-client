#include <interception_macros.h>

namespace app::methods::TriangleNet_Topology::SubSegment {
IL2CPP_REGISTER_METHOD(0x02AA4B40, void, __ctor, (app::SubSegment * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AA4C00, int32_t, get_P0, (app::SubSegment * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AA4C50, int32_t, get_P1, (app::SubSegment * this_ptr));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Label, (app::SubSegment * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AA4CA0, Vertex *, GetVertex, (app::SubSegment * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x02AA4CE0, ITriangle *, GetTriangle, (app::SubSegment * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (app::SubSegment * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AA4D40, String *, ToString, (app::SubSegment * this_ptr));
}
