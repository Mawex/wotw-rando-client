using namespace app;

namespace app::methods::TriangleNet::Meshing::Iterators::VertexCirculator {
IL2CPP_REGISTER_METHOD(0x02B11EF0, void, __ctor, (VertexCirculator * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02B12110, IEnumerable_1_TriangleNet_Geometry_Vertex_ *, EnumerateVertices, (VertexCirculator * __this, Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x02B122B0, IEnumerable_1_TriangleNet_Geometry_ITriangle_ *, EnumerateTriangles, (VertexCirculator * __this, Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x02B12450, void, BuildCache, (VertexCirculator * __this, Vertex * vertex, bool vertices));
}
