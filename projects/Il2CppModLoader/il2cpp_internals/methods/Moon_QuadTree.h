#include <interception_macros.h>

namespace app::methods::Moon::QuadTree {
IL2CPP_REGISTER_METHOD(0x01994E70, void, __ctor, (QuadTree * __this, Rect rootRect));
IL2CPP_REGISTER_METHOD(0x01995310, void, Query, (QuadTree * __this, Vector3 position, List_1_Moon_IRectProvider_ * listToPopulate));
IL2CPP_REGISTER_METHOD(0x01995440, void, QueryFast, (QuadTree * __this, Vector3 position, List_1_System_Int32_ * listToPopulate));
IL2CPP_REGISTER_METHOD(0x01995550, void, GetListFromSet, (QuadTree * __this, HashSet_1_Moon_IRectProvider_ * set, List_1_Moon_IRectProvider_ * listToPopulate));
IL2CPP_REGISTER_METHOD(0x01995690, void, QueryRecursively, (QuadTree * __this, QuadTree_Node * node, Vector3 position, Byte__Array * bitmask, List_1_System_Int32_ * listToPopulate));
IL2CPP_REGISTER_METHOD(0x01995970, void, QueryRecursively, (QuadTree * __this, QuadTree_Node * node, Vector3 position, HashSet_1_Moon_IRectProvider_ * resultsMap));
IL2CPP_REGISTER_METHOD(0x01995B70, void, Query, (QuadTree * __this, Rect rect, List_1_Moon_IRectProvider_ * listToPopulate));
IL2CPP_REGISTER_METHOD(0x01995CA0, void, QueryFast, (QuadTree * __this, Rect rect, List_1_System_Int32_ * listToPopulate));
IL2CPP_REGISTER_METHOD(0x01995DA0, void, QueryRecursively, (QuadTree * __this, QuadTree_Node * node, Rect rect, HashSet_1_Moon_IRectProvider_ * resultsMap));
IL2CPP_REGISTER_METHOD(0x01996040, void, QueryRecursively, (QuadTree * __this, QuadTree_Node * node, Rect rect, Byte__Array * bitmask, List_1_System_Int32_ * listToPopulate));
IL2CPP_REGISTER_METHOD(0x019963C0, void, AddObject, (QuadTree * __this, IRectProvider * rectProvider, int32_t idx));
IL2CPP_REGISTER_METHOD(0x019963F0, void, AddObjectRecursively, (QuadTree * __this, QuadTree_Node * node, IRectProvider * rectProvider, int32_t idx));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
