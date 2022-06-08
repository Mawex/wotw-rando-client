#include <interception_macros.h>

namespace app::methods::TriangleNet::Tools::AdjacencyMatrix {
IL2CPP_REGISTER_METHOD(0x002FB930, Int32__Array *, get_ColumnPointers, (AdjacencyMatrix * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Int32__Array *, get_RowIndices, (AdjacencyMatrix * __this));
IL2CPP_REGISTER_METHOD(0x02A94070, void, __ctor, (AdjacencyMatrix * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02A94270, void, __ctor, (AdjacencyMatrix * __this, Int32__Array * pcol, Int32__Array * irow));
IL2CPP_REGISTER_METHODINFO(0x0472F690, AdjacencyMatrix__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A943D0, int32_t, Bandwidth, (AdjacencyMatrix * __this));
IL2CPP_REGISTER_METHOD(0x02A94590, Int32__Array *, AdjacencyCount, (AdjacencyMatrix * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02A94BF0, Int32__Array *, AdjacencySet, (AdjacencyMatrix * __this, Mesh_1 * mesh, Int32__Array * pcol));
IL2CPP_REGISTER_METHOD(0x02A952F0, void, SortIndices, (AdjacencyMatrix * __this));
}
