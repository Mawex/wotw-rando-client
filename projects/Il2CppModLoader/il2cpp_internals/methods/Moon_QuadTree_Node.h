#include <interception_macros.h>

namespace app::methods::Moon::QuadTree_Node {
    IL2CPP_REGISTER_METHOD(0x01996640, void, __ctor_1, (app::QuadTree_Node * this_ptr, app::Rect rect, int32_t depth));
    IL2CPP_REGISTER_METHOD(0x01996930, void, __ctor_2, (app::QuadTree_Node * this_ptr, float x, float y, float width, float height, int32_t depth));
    IL2CPP_REGISTER_METHOD(0x01996C70, void, Subdivide, (app::QuadTree_Node * this_ptr));
    IL2CPP_REGISTER_METHOD(0x019974A0, void, AddObject, (app::QuadTree_Node * this_ptr, app::IRectProvider * rect_provider, int32_t idx));
}
