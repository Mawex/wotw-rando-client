#pragma once
#include <interception_macros.h>

namespace app::methods::System::Data::RBTree_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02FB3CE0, int32_t, get_Item, (app::RBTree_1_System_Int32_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04791818, RBTree_1_System_Int32__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E8F70, bool, get_HasDuplicates, (app::RBTree_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047935E0, RBTree_1_System_Int32__get_HasDuplicates__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB24A0, int32_t, DeleteByIndex, (app::RBTree_1_System_Int32_ * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHODINFO(0x047074F8, RBTree_1_System_Int32__DeleteByIndex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB3E70, int32_t, GetIndexByKey, (app::RBTree_1_System_Int32_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04707CB8, RBTree_1_System_Int32__GetIndexByKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB5890, int32_t, Key, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHODINFO(0x04784710, RBTree_1_System_Int32__Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB5610, int32_t, Left, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHODINFO(0x0474A580, RBTree_1_System_Int32__Left__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB5590, int32_t, Right, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHODINFO(0x04766E50, RBTree_1_System_Int32__Right__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB3EF0, int32_t, GetIndexByNode, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node))
    IL2CPP_REGISTER_METHODINFO(0x047603E8, RBTree_1_System_Int32__GetIndexByNode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB5790, int32_t, Next, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHODINFO(0x047719A0, RBTree_1_System_Int32__Next__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB5810, int32_t, SubTreeSize, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHODINFO(0x04706B60, RBTree_1_System_Int32__SubTreeSize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB4A40, int32_t, InsertAt, (app::RBTree_1_System_Int32_ * this_ptr, int32_t position, int32_t item, bool append))
    IL2CPP_REGISTER_METHODINFO(0x0470AC78, RBTree_1_System_Int32__InsertAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB23D0, void, UpdateNodeKey, (app::RBTree_1_System_Int32_ * this_ptr, int32_t current_key, int32_t new_key))
    IL2CPP_REGISTER_METHODINFO(0x0477C520, RBTree_1_System_Int32__UpdateNodeKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB4770, int32_t, Insert_1, (app::RBTree_1_System_Int32_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHODINFO(0x0471E6A8, RBTree_1_System_Int32__Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FAF680, void, ctor, (app::RBTree_1_System_Int32_ * this_ptr, app::TreeAccessMethod__Enum access_method))
    IL2CPP_REGISTER_METHODINFO(0x047384E8, RBTree_1_System_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FAF6B0, void, InitTree, (app::RBTree_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAF910, void, FreePage, (app::RBTree_1_System_Int32_ * this_ptr, app::RBTree_1_K_TreePage_System_Int32_ * page))
    IL2CPP_REGISTER_METHOD(0x02FAF9C0, app::RBTree_1_K_TreePage_System_Int32_ *, AllocPage, (app::RBTree_1_System_Int32_ * this_ptr, int32_t size))
    IL2CPP_REGISTER_METHOD(0x02FAFED0, void, MarkPageFull, (app::RBTree_1_System_Int32_ * this_ptr, app::RBTree_1_K_TreePage_System_Int32_ * page))
    IL2CPP_REGISTER_METHOD(0x02FAFF90, void, MarkPageFree, (app::RBTree_1_System_Int32_ * this_ptr, app::RBTree_1_K_TreePage_System_Int32_ * page))
    IL2CPP_REGISTER_METHOD(0x02FB0050, int32_t, GetIntValueFromBitMap, (uint32_t bit_map))
    IL2CPP_REGISTER_METHOD(0x02FB00C0, void, FreeNode, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHOD(0x02FB0260, int32_t, GetIndexOfPageWithFreeSlot, (app::RBTree_1_System_Int32_ * this_ptr, bool allocated_page))
    IL2CPP_REGISTER_METHODINFO(0x04727B28, RBTree_1_System_Int32__GetIndexOfPageWithFreeSlot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB04C0, int32_t, get_Count, (app::RBTree_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FB04D0, int32_t, GetNewNode, (app::RBTree_1_System_Int32_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04717CB0, RBTree_1_System_Int32__GetNewNode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB0800, int32_t, Successor_1, (app::RBTree_1_System_Int32_ * this_ptr, int32_t x_id))
    IL2CPP_REGISTER_METHOD(0x02FB0900, bool, Successor_2, (app::RBTree_1_System_Int32_ * this_ptr, int32_t * node_id, int32_t * main_tree_node_id))
    IL2CPP_REGISTER_METHODINFO(0x04729578, RBTree_1_System_Int32__Successor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB0AB0, int32_t, Minimum, (app::RBTree_1_System_Int32_ * this_ptr, int32_t x_id))
    IL2CPP_REGISTER_METHOD(0x02FB0B30, int32_t, LeftRotate, (app::RBTree_1_System_Int32_ * this_ptr, int32_t root_id, int32_t x_id, int32_t main_tree_node))
    IL2CPP_REGISTER_METHOD(0x02FB1000, int32_t, RightRotate, (app::RBTree_1_System_Int32_ * this_ptr, int32_t root_id, int32_t x_id, int32_t main_tree_node))
    IL2CPP_REGISTER_METHOD(0x02FB14C0, int32_t, RBInsert, (app::RBTree_1_System_Int32_ * this_ptr, int32_t root_id, int32_t x_id, int32_t main_tree_node_i_d, int32_t position, bool append))
    IL2CPP_REGISTER_METHODINFO(0x0475F030, RBTree_1_System_Int32__RBInsert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB2550, int32_t, RBDelete, (app::RBTree_1_System_Int32_ * this_ptr, int32_t z_id))
    IL2CPP_REGISTER_METHOD(0x02FB2590, int32_t, RBDeleteX, (app::RBTree_1_System_Int32_ * this_ptr, int32_t root_id, int32_t z_id, int32_t main_tree_node_i_d))
    IL2CPP_REGISTER_METHODINFO(0x04755250, RBTree_1_System_Int32__RBDeleteX__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB3220, int32_t, RBDeleteFixup, (app::RBTree_1_System_Int32_ * this_ptr, int32_t root_id, int32_t x_id, int32_t px_id, int32_t main_tree_node_i_d))
    IL2CPP_REGISTER_METHODINFO(0x04782C50, RBTree_1_System_Int32__RBDeleteFixup__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB3B90, int32_t, SearchSubTree, (app::RBTree_1_System_Int32_ * this_ptr, int32_t root_id, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04743AA8, RBTree_1_System_Int32__SearchSubTree__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB3D40, app::RBTree_1_K_NodePath_System_Int32_, GetNodeByKey, (app::RBTree_1_System_Int32_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02FB4010, int32_t, GetIndexByNodePath, (app::RBTree_1_System_Int32_ * this_ptr, app::RBTree_1_K_NodePath_System_Int32_ path))
    IL2CPP_REGISTER_METHOD(0x02FB40D0, int32_t, ComputeIndexByNode, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHOD(0x02FB41F0, int32_t, ComputeIndexWithSatelliteByNode, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHOD(0x02FB4370, app::RBTree_1_K_NodePath_System_Int32_, GetNodeByIndex, (app::RBTree_1_System_Int32_ * this_ptr, int32_t user_index))
    IL2CPP_REGISTER_METHODINFO(0x0477A140, RBTree_1_System_Int32__GetNodeByIndex__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB44A0, int32_t, ComputeNodeByIndex_1, (app::RBTree_1_System_Int32_ * this_ptr, int32_t index, int32_t * satellite_root_id))
    IL2CPP_REGISTER_METHOD(0x02FB46B0, int32_t, ComputeNodeByIndex_2, (app::RBTree_1_System_Int32_ * this_ptr, int32_t x_id, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02FB4770, int32_t, Add, (app::RBTree_1_System_Int32_ * this_ptr, int32_t item))
    IL2CPP_REGISTER_METHOD(0x02FB47F0, app::IEnumerator *, GetEnumerator, (app::RBTree_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FB4880, int32_t, IndexOf, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id, int32_t item))
    IL2CPP_REGISTER_METHOD(0x02FB4A10, int32_t, Insert_2, (app::RBTree_1_System_Int32_ * this_ptr, int32_t position, int32_t item))
    IL2CPP_REGISTER_METHOD(0x02FB4AE0, void, RemoveAt, (app::RBTree_1_System_Int32_ * this_ptr, int32_t position))
    IL2CPP_REGISTER_METHOD(0x02FB4B10, void, Clear, (app::RBTree_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FB4B40, void, CopyTo_1, (app::RBTree_1_System_Int32_ * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478FB68, RBTree_1_System_Int32__CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB4D70, void, CopyTo_2, (app::RBTree_1_System_Int32_ * this_ptr, app::Int32__Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04779DB8, RBTree_1_System_Int32__CopyTo_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FB4F70, void, SetRight, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id, int32_t right_node_id))
    IL2CPP_REGISTER_METHOD(0x02FB4FF0, void, SetLeft, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id, int32_t left_node_id))
    IL2CPP_REGISTER_METHOD(0x02FB5070, void, SetParent, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id, int32_t parent_node_id))
    IL2CPP_REGISTER_METHOD(0x02FB50F0, void, SetColor, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id, app::RBTree_1_K_NodeColor_System_Int32_ * color))
    IL2CPP_REGISTER_METHOD(0x02FB5170, void, SetKey, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id, int32_t key))
    IL2CPP_REGISTER_METHOD(0x02FB51F0, void, SetNext, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id, int32_t next_node_id))
    IL2CPP_REGISTER_METHOD(0x02FB5270, void, SetSubTreeSize, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id, int32_t size))
    IL2CPP_REGISTER_METHOD(0x02FB52F0, void, IncreaseSize, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHOD(0x02FB5370, void, RecomputeSize, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHOD(0x02FB5510, void, DecreaseSize, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHOD(0x02FB5690, int32_t, Parent, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
    IL2CPP_REGISTER_METHOD(0x02FB5710, app::RBTree_1_K_NodeColor_System_Int32_ *, color, (app::RBTree_1_System_Int32_ * this_ptr, int32_t node_id))
}
