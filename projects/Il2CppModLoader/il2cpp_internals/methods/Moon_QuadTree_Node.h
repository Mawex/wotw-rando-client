#include <interception_macros.h>

namespace app::methods::Moon::QuadTree_Node {
IL2CPP_REGISTER_METHOD(0x01996640, void, __ctor, (QuadTree_Node * __this, Rect rect, int32_t depth));
IL2CPP_REGISTER_METHOD(0x01996930, void, __ctor, (QuadTree_Node * __this, float x, float y, float width, float height, int32_t depth));
IL2CPP_REGISTER_METHOD(0x01996C70, void, Subdivide, (QuadTree_Node * __this));
IL2CPP_REGISTER_METHOD(0x019974A0, void, AddObject, (QuadTree_Node * __this, IRectProvider * rectProvider, int32_t idx));
}
