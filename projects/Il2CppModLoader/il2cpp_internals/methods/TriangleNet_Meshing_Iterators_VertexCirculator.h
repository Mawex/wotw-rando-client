#include <interception_macros.h>

namespace app::methods::TriangleNet_Meshing_Iterators::VertexCirculator {
IL2CPP_REGISTER_METHOD(0x02B11EF0, void, __ctor, (app::VertexCirculator * this_ptr, app::Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02B12110, IEnumerable_1_TriangleNet_Geometry_Vertex_ *, EnumerateVertices, (app::VertexCirculator * this_ptr, app::Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x02B122B0, IEnumerable_1_TriangleNet_Geometry_ITriangle_ *, EnumerateTriangles, (app::VertexCirculator * this_ptr, app::Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x02B12450, void, BuildCache, (app::VertexCirculator * this_ptr, app::Vertex * vertex, bool vertices));
}
