#include <interception_macros.h>

namespace app::methods::TriangleNet::Smoothing::VoronoiFactory {
IL2CPP_REGISTER_METHOD(0x02A92FF0, void, __ctor, (VoronoiFactory * __this));
IL2CPP_REGISTER_METHOD(0x02A933A0, void, Initialize, (VoronoiFactory * __this, int32_t vertexCount, int32_t edgeCount, int32_t faceCount));
IL2CPP_REGISTER_METHOD(0x02A93990, void, Reset, (VoronoiFactory * __this));
IL2CPP_REGISTER_METHOD(0x02A93A40, Vertex_1 *, CreateVertex, (VoronoiFactory * __this, double x, double y));
IL2CPP_REGISTER_METHOD(0x02A93C50, HalfEdge *, CreateHalfEdge, (VoronoiFactory * __this, Vertex_1 * origin, Face * face));
IL2CPP_REGISTER_METHOD(0x02A93E60, Face *, CreateFace, (VoronoiFactory * __this, Vertex * vertex));
}
