using namespace app;

namespace app::methods::Moon::UberStateVisualization::ListViewItem {
IL2CPP_REGISTER_METHOD(0x019995A0, GUIStyle *, get_CenteredLabelStyle, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (ListViewItem * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsSelected, (ListViewItem * __this));
IL2CPP_REGISTER_METHOD(0x01999830, void, __ctor, (ListViewItem * __this, int32_t controlId, String * name, ListView * parentView));
IL2CPP_REGISTER_METHOD(0x0052A040, void, SetSelected, (ListViewItem * __this, bool selected));
IL2CPP_REGISTER_METHOD(0x01999840, void, OnHandleEvent, (ListViewItem * __this, Rect rect, Event * e));
IL2CPP_REGISTER_METHOD(0x01999970, void, OnGui, (ListViewItem * __this, Rect rect, bool isHighlighted));
IL2CPP_REGISTER_METHOD(0x01999E20, void, OnItemGui, (ListViewItem * __this, Rect rect));
}
