using namespace app;

namespace app::methods::HierarchyDebugMenu_GameObjectItem {
IL2CPP_REGISTER_METHOD(0x00B52660, void, __ctor, (HierarchyDebugMenu_GameObjectItem * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x00B52F70, void, UpdateDataFromTarget, (HierarchyDebugMenu_GameObjectItem * __this));
IL2CPP_REGISTER_METHOD(0x00B53940, void, UpdateDataOnTargetAndChildren, (HierarchyDebugMenu_GameObjectItem * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, HierarchyDebugMenu_CompareType__Enum, get_CurrentSortType, (HierarchyDebugMenu_GameObjectItem * __this));
IL2CPP_REGISTER_METHOD(0x00B53A90, void, SortChildren, (HierarchyDebugMenu_GameObjectItem * __this, HierarchyDebugMenu_CompareType__Enum comparisonType));
IL2CPP_REGISTER_METHODINFO(0x0475A0D8, HierarchyDebugMenu_GameObjectItem_SortChildren__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B53E80, bool, get_HasChildren, (HierarchyDebugMenu_GameObjectItem * __this));
}
