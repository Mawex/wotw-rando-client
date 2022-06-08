#include <interception_macros.h>

namespace app::methods::TriangleNet::Meshing::Iterators::EdgeIterator {
IL2CPP_REGISTER_METHOD(0x02B10CF0, void, __ctor, (EdgeIterator * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Edge *, get_Current, (EdgeIterator * __this));
IL2CPP_REGISTER_METHOD(0x02B10DD0, void, Dispose, (EdgeIterator * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, Object *, IEnumerator_get_Current, (EdgeIterator * __this));
IL2CPP_REGISTER_METHOD(0x02B10E60, bool, MoveNext, (EdgeIterator * __this));
IL2CPP_REGISTER_METHOD(0x02B110F0, void, Reset, (EdgeIterator * __this));
}
