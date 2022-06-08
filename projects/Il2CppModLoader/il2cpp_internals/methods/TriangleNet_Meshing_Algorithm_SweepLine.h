#include <interception_macros.h>

namespace app::methods::TriangleNet::Meshing::Algorithm::SweepLine {
IL2CPP_REGISTER_METHOD(0x02636B70, int32_t, randomnation, (int32_t choices));
IL2CPP_REGISTER_METHOD(0x02636C60, IMesh *, Triangulate, (SweepLine * __this, IList_1_TriangleNet_Geometry_Vertex_ * points, Configuration_1 * config));
IL2CPP_REGISTER_METHODINFO(0x04782238, SweepLine_Triangulate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02638200, void, HeapInsert, (SweepLine * __this, SweepLine_SweepEvent__Array * heap, int32_t heapsize, SweepLine_SweepEvent * newevent));
IL2CPP_REGISTER_METHOD(0x026383A0, void, Heapify, (SweepLine * __this, SweepLine_SweepEvent__Array * heap, int32_t heapsize, int32_t eventnum));
IL2CPP_REGISTER_METHOD(0x02638630, void, HeapDelete, (SweepLine * __this, SweepLine_SweepEvent__Array * heap, int32_t heapsize, int32_t eventnum));
IL2CPP_REGISTER_METHOD(0x02638840, void, CreateHeap, (SweepLine * __this, SweepLine_SweepEvent__Array * * eventheap, int32_t size));
IL2CPP_REGISTER_METHOD(0x02638B50, SweepLine_SplayNode *, Splay, (SweepLine * __this, SweepLine_SplayNode * splaytree, Point * searchpoint, Otri * searchtri));
IL2CPP_REGISTER_METHOD(0x02638EB0, SweepLine_SplayNode *, SplayInsert, (SweepLine * __this, SweepLine_SplayNode * splayroot, Otri newkey, Point * searchpoint));
IL2CPP_REGISTER_METHOD(0x026390A0, SweepLine_SplayNode *, FrontLocate, (SweepLine * __this, SweepLine_SplayNode * splayroot, Otri bottommost, Vertex * searchvertex, Otri * searchtri, bool * farright));
IL2CPP_REGISTER_METHOD(0x02639160, SweepLine_SplayNode *, CircleTopInsert, (SweepLine * __this, SweepLine_SplayNode * splayroot, Otri newkey, Vertex * pa, Vertex * pb, Vertex * pc, double topy));
IL2CPP_REGISTER_METHOD(0x02639400, bool, RightOfHyperbola, (SweepLine * __this, Otri * fronttri, Point * newsite));
IL2CPP_REGISTER_METHOD(0x026395F0, double, CircleTop, (SweepLine * __this, Vertex * pa, Vertex * pb, Vertex * pc, double ccwabc));
IL2CPP_REGISTER_METHOD(0x026397F0, void, Check4DeadEvent, (SweepLine * __this, Otri * checktri, SweepLine_SweepEvent__Array * eventheap, int32_t * heapsize));
IL2CPP_REGISTER_METHOD(0x02639910, int32_t, RemoveGhosts, (SweepLine * __this, Otri * startghost));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SweepLine * __this));
IL2CPP_REGISTER_METHOD(0x02639D50, void, __cctor, ());
}
