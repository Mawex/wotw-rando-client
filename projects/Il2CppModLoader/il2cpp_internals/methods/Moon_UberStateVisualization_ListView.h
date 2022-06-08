#include <interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::ListView {
IL2CPP_REGISTER_METHOD(0x019976D0, void, add_OnSelectionChanged, (ListView * __this, Action_1_Moon_UberStateVisualization_ListViewItem_ * value));
IL2CPP_REGISTER_METHOD(0x019977C0, void, remove_OnSelectionChanged, (ListView * __this, Action_1_Moon_UberStateVisualization_ListViewItem_ * value));
IL2CPP_REGISTER_METHOD(0x019978B0, void, __ctor, (ListView * __this, int32_t controlId));
IL2CPP_REGISTER_METHOD(0x002FB940, void, SetHeader, (ListView * __this, GUIContent * header));
IL2CPP_REGISTER_METHOD(0x01997CB0, void, SelectItem, (ListView * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01997D80, void, SelectItem, (ListView * __this, ListViewItem * item));
IL2CPP_REGISTER_METHOD(0x01997F90, void, MakeSureSelectionFramed, (ListView * __this));
IL2CPP_REGISTER_METHOD(0x01998150, void, UpdateRect, (ListView * __this, Rect newRect));
IL2CPP_REGISTER_METHOD(0x019982E0, void, AddItem, (ListView * __this, ListViewItem * item));
IL2CPP_REGISTER_METHOD(0x01998380, void, RemoveItem, (ListView * __this, ListViewItem * item));
IL2CPP_REGISTER_METHOD(0x01998450, void, OnGui, (ListView * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x01998F50, void, HandleInput, (ListView * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x019991F0, void, TryMoveSelectionDown, (ListView * __this));
IL2CPP_REGISTER_METHOD(0x019992C0, void, TryMoveSelectionUp, (ListView * __this));
IL2CPP_REGISTER_METHOD(0x01999380, void, Recalculate, (ListView * __this));
IL2CPP_REGISTER_METHOD(0x002FBCC0, ListViewItem *, get_SelectedItem, (ListView * __this));
IL2CPP_REGISTER_METHOD(0x002FBCE0, ListViewItem *, get_HoveredItem, (ListView * __this));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_HoveredItem, (ListView * __this, ListViewItem * value));
IL2CPP_REGISTER_METHOD(0x002FBD00, List_1_Moon_UberStateVisualization_ListViewItem_ *, get_Items, (ListView * __this));
IL2CPP_REGISTER_METHOD(0x01999450, Rect, get_ContentRect, (ListView * __this));
}
