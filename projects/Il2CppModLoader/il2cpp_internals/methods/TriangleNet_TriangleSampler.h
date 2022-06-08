#include <interception_macros.h>

namespace app::methods::TriangleNet::TriangleSampler {
IL2CPP_REGISTER_METHOD(0x02AA7540, void, __ctor, (TriangleSampler * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02AA76A0, void, __ctor, (TriangleSampler * __this, Mesh_1 * mesh, Random * random));
IL2CPP_REGISTER_METHOD(0x02AA76B0, void, Reset, (TriangleSampler * __this));
IL2CPP_REGISTER_METHOD(0x02AA76C0, void, Update, (TriangleSampler * __this));
IL2CPP_REGISTER_METHOD(0x02AA7730, IEnumerator_1_TriangleNet_Topology_Triangle_ *, GetEnumerator, (TriangleSampler * __this));
IL2CPP_REGISTER_METHOD(0x02AA77F0, IEnumerator *, IEnumerable_GetEnumerator, (TriangleSampler * __this));
}
