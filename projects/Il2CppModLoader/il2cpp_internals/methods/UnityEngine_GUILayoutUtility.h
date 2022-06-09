#include <interception_macros.h>

namespace app::methods::UnityEngine::GUILayoutUtility {
IL2CPP_REGISTER_METHOD(0x029EBA90, Rect, Internal_GetWindowRect, (int32_t window_i_d));
IL2CPP_REGISTER_METHOD(0x029EBB90, void, Internal_MoveWindow, (int32_t window_i_d, app::Rect r));
IL2CPP_REGISTER_METHOD(0x029EBC70, GUILayoutUtility_LayoutCache *, SelectIDList, (int32_t instance_i_d, bool is_window));
IL2CPP_REGISTER_METHOD(0x029EBF90, void, Begin, (int32_t instance_i_d));
IL2CPP_REGISTER_METHOD(0x029EC3F0, void, BeginWindow, (int32_t window_i_d, app::GUIStyle * style, app::GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x029EC970, void, Layout, ());
IL2CPP_REGISTER_METHOD(0x029ECDE0, void, LayoutFromEditorWindow, ());
IL2CPP_REGISTER_METHOD(0x029ED160, void, LayoutFreeGroup, (app::GUILayoutGroup * toplevel));
IL2CPP_REGISTER_METHOD(0x029ED360, void, LayoutSingleGroup, (app::GUILayoutGroup * i));
IL2CPP_REGISTER_METHOD(0x029ED760, GUILayoutGroup *, CreateGUILayoutGroupInstanceOfType, (app::Type * layout_type));
IL2CPP_REGISTER_METHODINFO(0x0473A3A0, GUILayoutUtility_CreateGUILayoutGroupInstanceOfType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029ED8D0, GUILayoutGroup *, BeginLayoutGroup, (app::GUIStyle * style, app::GUILayoutOption__Array * options, app::Type * layout_type));
IL2CPP_REGISTER_METHODINFO(0x047216A8, GUILayoutUtility_BeginLayoutGroup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029EDC60, void, EndLayoutGroup, ());
IL2CPP_REGISTER_METHOD(0x029EDFD0, GUILayoutGroup *, BeginLayoutArea, (app::GUIStyle * style, app::Type * layout_type));
IL2CPP_REGISTER_METHODINFO(0x0475F5A8, GUILayoutUtility_BeginLayoutArea__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029EE310, Rect, GetRect_1, (app::GUIContent * content, app::GUIStyle * style, app::GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x029EE3F0, Rect, DoGetRect_1, (app::GUIContent * content, app::GUIStyle * style, app::GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x029EEA90, Rect, GetRect_2, (float width, float height, app::GUIStyle * style, app::GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x029EEB90, Rect, DoGetRect_2, (float min_width, float max_width, float min_height, float max_height, app::GUIStyle * style, app::GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x029EEEC0, Rect, GetLastRect, ());
IL2CPP_REGISTER_METHOD(0x029EF050, GUIStyle *, get_spaceStyle, ());
IL2CPP_REGISTER_METHOD(0x029EF290, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x029EF5F0, void, Internal_GetWindowRect_Injected, (int32_t window_i_d, app::Rect * ret));
IL2CPP_REGISTER_METHOD(0x029EF650, void, Internal_MoveWindow_Injected, (int32_t window_i_d, app::Rect * r));
}
