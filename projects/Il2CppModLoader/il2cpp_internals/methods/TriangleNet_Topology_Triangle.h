#include <interception_macros.h>

namespace app::methods::TriangleNet::Topology::Triangle {
IL2CPP_REGISTER_METHOD(0x02AA4E20, void, __ctor, (Triangle * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_ID, (Triangle * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_ID, (Triangle * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Label, (Triangle * __this));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_Label, (Triangle * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01BC1650, double, get_Area, (Triangle * __this));
IL2CPP_REGISTER_METHOD(0x01BC1660, void, set_Area, (Triangle * __this, double value));
IL2CPP_REGISTER_METHOD(0x02AA4CA0, Vertex *, GetVertex, (Triangle * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02AA4ED0, int32_t, GetVertexID, (Triangle * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02AA4F20, ITriangle *, GetNeighbor, (Triangle * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02AA4F80, int32_t, GetNeighborID, (Triangle * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02AA4CE0, ISegment *, GetSegment, (Triangle * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, (Triangle * __this));
IL2CPP_REGISTER_METHOD(0x02AA5000, String *, ToString, (Triangle * __this));
}
