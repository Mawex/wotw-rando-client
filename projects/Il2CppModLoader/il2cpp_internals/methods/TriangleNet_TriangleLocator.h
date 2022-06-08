using namespace app;

namespace app::methods::TriangleNet::TriangleLocator {
IL2CPP_REGISTER_METHOD(0x02AA50E0, void, __ctor, (TriangleLocator * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02AA51A0, void, __ctor, (TriangleLocator * __this, Mesh_1 * mesh, IPredicates * predicates));
IL2CPP_REGISTER_METHOD(0x02AA5420, void, Update, (TriangleLocator * __this, Otri * otri));
IL2CPP_REGISTER_METHOD(0x02AA5430, void, Reset, (TriangleLocator * __this));
IL2CPP_REGISTER_METHOD(0x02AA5460, LocateResult__Enum, PreciseLocate, (TriangleLocator * __this, Point * searchpoint, Otri * searchtri, bool stopatsubsegment));
IL2CPP_REGISTER_METHOD(0x02AA5950, LocateResult__Enum, Locate, (TriangleLocator * __this, Point * searchpoint, Otri * searchtri));
}
