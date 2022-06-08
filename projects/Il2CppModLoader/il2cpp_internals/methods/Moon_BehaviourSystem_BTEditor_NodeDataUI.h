using namespace app;

namespace app::methods::Moon::BehaviourSystem::BTEditor::NodeDataUI {
IL2CPP_REGISTER_METHOD(0x002FA280, BehaviourNode *, get_Node, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ID, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_ID, (NodeDataUI * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_IsCollapsed, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_IsCollapsed, (NodeDataUI * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00E71230, Vector2, get_Position, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x00E71250, void, set_Position, (NodeDataUI * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x010655D0, Vector2, get_Size, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x010655F0, void, set_Size, (NodeDataUI * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x031C07D0, Rect, get_Rect, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x02071D00, void, set_Rect, (NodeDataUI * __this, Rect value));
IL2CPP_REGISTER_METHOD(0x005C3FE0, Color, get_NodeColor, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x0060A8A0, void, set_NodeColor, (NodeDataUI * __this, Color value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_Name, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Name, (NodeDataUI * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_Comments, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Comments, (NodeDataUI * __this, String * value));
IL2CPP_REGISTER_METHOD(0x031C0820, void, __ctor, (NodeDataUI * __this));
IL2CPP_REGISTER_METHOD(0x031C0840, void, __ctor, (NodeDataUI * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x031C0860, void, __ctor, (NodeDataUI * __this, int32_t id, BehaviourNode * node));
IL2CPP_REGISTER_METHOD(0x031C0890, void, Update, (NodeDataUI * __this, NodeDataUI * source));
}
