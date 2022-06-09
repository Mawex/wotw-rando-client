#include <interception_macros.h>

namespace app::methods::TriangleNet::Voronoi::StandardVoronoi {
    IL2CPP_REGISTER_METHOD(0x02AAE8D0, void, __ctor_1, (app::StandardVoronoi * this_ptr, app::Mesh_1 * mesh));
    IL2CPP_REGISTER_METHOD(0x02AAEA70, void, __ctor_2, (app::StandardVoronoi * this_ptr, app::Mesh_1 * mesh, app::Rectangle * box));
    IL2CPP_REGISTER_METHOD(0x02AAEC00, void, __ctor_3, (app::StandardVoronoi * this_ptr, app::Mesh_1 * mesh, app::Rectangle * box, app::IVoronoiFactory * factory, app::IPredicates * predicates));
    IL2CPP_REGISTER_METHOD(0x02AAED80, void, PostProcess, (app::StandardVoronoi * this_ptr, app::Rectangle * box));
}
