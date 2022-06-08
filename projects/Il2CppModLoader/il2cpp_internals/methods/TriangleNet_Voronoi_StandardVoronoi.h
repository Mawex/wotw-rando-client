#include <interception_macros.h>

namespace app::methods::TriangleNet::Voronoi::StandardVoronoi {
IL2CPP_REGISTER_METHOD(0x02AAE8D0, void, __ctor, (StandardVoronoi * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02AAEA70, void, __ctor, (StandardVoronoi * __this, Mesh_1 * mesh, Rectangle * box));
IL2CPP_REGISTER_METHOD(0x02AAEC00, void, __ctor, (StandardVoronoi * __this, Mesh_1 * mesh, Rectangle * box, IVoronoiFactory * factory, IPredicates * predicates));
IL2CPP_REGISTER_METHOD(0x02AAED80, void, PostProcess, (StandardVoronoi * __this, Rectangle * box));
}
