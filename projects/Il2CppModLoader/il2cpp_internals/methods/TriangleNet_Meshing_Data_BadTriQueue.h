#include <interception_macros.h>

namespace app::methods::TriangleNet::Meshing::Data::BadTriQueue {
IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_Count, (BadTriQueue * __this));
IL2CPP_REGISTER_METHOD(0x02B0E8A0, void, __ctor, (BadTriQueue * __this));
IL2CPP_REGISTER_METHOD(0x02B0E970, void, Enqueue, (BadTriQueue * __this, BadTriangle * badtri));
IL2CPP_REGISTER_METHOD(0x02B0ECD0, void, Enqueue, (BadTriQueue * __this, Otri * enqtri, double minedge, Vertex * apex, Vertex * org, Vertex * dest));
IL2CPP_REGISTER_METHOD(0x02B0EE70, BadTriangle *, Dequeue, (BadTriQueue * __this));
}
