using namespace app;

namespace app::methods::TriangleNet::Voronoi::DefaultVoronoiFactory {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (DefaultVoronoiFactory * __this, int32_t vertexCount, int32_t edgeCount, int32_t faceCount));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (DefaultVoronoiFactory * __this));
IL2CPP_REGISTER_METHOD(0x02AA8360, Vertex_1 *, CreateVertex, (DefaultVoronoiFactory * __this, double x, double y));
IL2CPP_REGISTER_METHOD(0x02AA84D0, HalfEdge *, CreateHalfEdge, (DefaultVoronoiFactory * __this, Vertex_1 * origin, Face * face));
IL2CPP_REGISTER_METHOD(0x02AA8630, Face *, CreateFace, (DefaultVoronoiFactory * __this, Vertex * vertex));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (DefaultVoronoiFactory * __this));
}
