using namespace app;

namespace app::methods::Moon::UberStateVisualization::UberStateVisualizationView {
IL2CPP_REGISTER_METHOD(0x030C4940, void, __ctor, (UberStateVisualizationView * __this));
IL2CPP_REGISTER_METHOD(0x030C5050, void, OnSpaceMongerSelectionChanged, (UberStateVisualizationView * __this, UberStateData uberState));
IL2CPP_REGISTER_METHODINFO(0x0473D3E8, UberStateVisualizationView_OnSpaceMongerSelectionChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030C51D0, void, UpdateWithModel, (UberStateVisualizationView * __this, UberStateValueStore * uberStateValueStore));
IL2CPP_REGISTER_METHOD(0x030C62A0, void, OnGroupsListViewSelectionChanged, (UberStateVisualizationView * __this, ListViewItem * selectedItem));
IL2CPP_REGISTER_METHODINFO(0x04718300, UberStateVisualizationView_OnGroupsListViewSelectionChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030C6C00, void, OnStatesListViewSelectionChanged, (UberStateVisualizationView * __this, ListViewItem * selectedItem));
IL2CPP_REGISTER_METHODINFO(0x04759E18, UberStateVisualizationView_OnStatesListViewSelectionChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030C6E60, void, OnGui, (UberStateVisualizationView * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x030C6EA0, void, Layout, (UberStateVisualizationView * __this, Rect viewRect));
IL2CPP_REGISTER_METHOD(0x030C7260, void, Render, (UberStateVisualizationView * __this));
IL2CPP_REGISTER_METHOD(0x030C73E0, void, RenderToolbar, (UberStateVisualizationView * __this));
IL2CPP_REGISTER_METHOD(0x030C74D0, void, DrawSplitter, (UberStateVisualizationView * __this, Rect splitterRect));
IL2CPP_REGISTER_METHOD(0x030C7600, ControllerInput *, UpdateInput, (UberStateVisualizationView * __this));
IL2CPP_REGISTER_METHOD(0x030C7CF0, void, HandleInput, (UberStateVisualizationView * __this));
IL2CPP_REGISTER_METHOD(0x030C8030, void, Clear, (UberStateVisualizationView * __this));
IL2CPP_REGISTER_METHOD(0x030C8090, UberStateData, CreateStateData, (UberStateVisualizationView * __this, UberID * id, UberID * groupId, int64_t size, Color color, String * stringValue));
IL2CPP_REGISTER_METHOD(0x030C8210, int32_t, GetStateKey, (UberStateVisualizationView * __this, int32_t stateId, int32_t groupId));
IL2CPP_REGISTER_METHOD(0x030C82F0, UberStateGroupData, badCreateGroupData, (UberStateVisualizationView * __this, UberID * id, UberStateValueGroup * stateValueGroup, Color color));
IL2CPP_REGISTER_METHOD(0x030CA120, int64_t, badGetGroupSize, (UberStateVisualizationView * __this, UberStateValueGroup * valueGroup));
IL2CPP_REGISTER_METHOD(0x030CAA60, int32_t, badGetStatesAmount, (UberStateVisualizationView * __this, UberStateValueGroup * valueGroup));
}
