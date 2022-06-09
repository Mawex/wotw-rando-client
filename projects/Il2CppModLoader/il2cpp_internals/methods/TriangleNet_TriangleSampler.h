#include <interception_macros.h>

namespace app::methods::TriangleNet::TriangleSampler {
IL2CPP_REGISTER_METHOD(0x02AA7540, void, __ctor_1, (app::TriangleSampler * this_ptr, app::Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02AA76A0, void, __ctor_2, (app::TriangleSampler * this_ptr, app::Mesh_1 * mesh, app::Random * random));
IL2CPP_REGISTER_METHOD(0x02AA76B0, void, Reset, (app::TriangleSampler * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AA76C0, void, Update, (app::TriangleSampler * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AA7730, IEnumerator_1_TriangleNet_Topology_Triangle_ *, GetEnumerator, (app::TriangleSampler * this_ptr));
IL2CPP_REGISTER_METHOD(0x02AA77F0, IEnumerator *, IEnumerable_GetEnumerator, (app::TriangleSampler * this_ptr));
}
