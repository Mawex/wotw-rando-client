using namespace app;

namespace app::methods::UnityEngine::RectTransform {
IL2CPP_REGISTER_METHOD(0x0296E8B0, void, add_reapplyDrivenProperties, (RectTransform_ReapplyDrivenProperties * value));
IL2CPP_REGISTER_METHOD(0x0296E9B0, void, remove_reapplyDrivenProperties, (RectTransform_ReapplyDrivenProperties * value));
IL2CPP_REGISTER_METHOD(0x0296EAB0, Rect, get_rect, (RectTransform * __this));
IL2CPP_REGISTER_METHOD(0x0296EB30, Vector2, get_anchorMin, (RectTransform * __this));
IL2CPP_REGISTER_METHOD(0x0296EBA0, void, set_anchorMin, (RectTransform * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0296EC00, Vector2, get_anchorMax, (RectTransform * __this));
IL2CPP_REGISTER_METHOD(0x0296EC70, void, set_anchorMax, (RectTransform * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0296ECD0, Vector2, get_anchoredPosition, (RectTransform * __this));
IL2CPP_REGISTER_METHOD(0x0296ED40, void, set_anchoredPosition, (RectTransform * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0296EDA0, Vector2, get_sizeDelta, (RectTransform * __this));
IL2CPP_REGISTER_METHOD(0x0296EE10, void, set_sizeDelta, (RectTransform * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0296EE70, Vector2, get_pivot, (RectTransform * __this));
IL2CPP_REGISTER_METHOD(0x0296EEE0, void, set_pivot, (RectTransform * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0296EF40, void, set_offsetMin, (RectTransform * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0296F2F0, void, set_offsetMax, (RectTransform * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0296F6B0, void, GetLocalCorners, (RectTransform * __this, Vector3__Array * fourCornersArray));
IL2CPP_REGISTER_METHOD(0x0296F8F0, void, GetWorldCorners, (RectTransform * __this, Vector3__Array * fourCornersArray));
IL2CPP_REGISTER_METHOD(0x0296FBF0, void, SetInsetAndSizeFromParentEdge, (RectTransform * __this, RectTransform_Edge__Enum edge, float inset, float size));
IL2CPP_REGISTER_METHOD(0x0296FFB0, void, SetSizeWithCurrentAnchors, (RectTransform * __this, RectTransform_Axis__Enum axis, float size));
IL2CPP_REGISTER_METHOD(0x029701C0, void, SendReapplyDrivenProperties, (RectTransform * driven));
IL2CPP_REGISTER_METHOD(0x02970260, Vector2, GetParentSize, (RectTransform * __this));
IL2CPP_REGISTER_METHOD(0x02970420, void, get_rect_Injected, (RectTransform * __this, Rect * ret));
IL2CPP_REGISTER_METHOD(0x02970480, void, get_anchorMin_Injected, (RectTransform * __this, Vector2 * ret));
IL2CPP_REGISTER_METHOD(0x029704E0, void, set_anchorMin_Injected, (RectTransform * __this, Vector2 * value));
IL2CPP_REGISTER_METHOD(0x02970540, void, get_anchorMax_Injected, (RectTransform * __this, Vector2 * ret));
IL2CPP_REGISTER_METHOD(0x029705A0, void, set_anchorMax_Injected, (RectTransform * __this, Vector2 * value));
IL2CPP_REGISTER_METHOD(0x02970600, void, get_anchoredPosition_Injected, (RectTransform * __this, Vector2 * ret));
IL2CPP_REGISTER_METHOD(0x02970660, void, set_anchoredPosition_Injected, (RectTransform * __this, Vector2 * value));
IL2CPP_REGISTER_METHOD(0x029706C0, void, get_sizeDelta_Injected, (RectTransform * __this, Vector2 * ret));
IL2CPP_REGISTER_METHOD(0x02970720, void, set_sizeDelta_Injected, (RectTransform * __this, Vector2 * value));
IL2CPP_REGISTER_METHOD(0x02970780, void, get_pivot_Injected, (RectTransform * __this, Vector2 * ret));
IL2CPP_REGISTER_METHOD(0x029707E0, void, set_pivot_Injected, (RectTransform * __this, Vector2 * value));
}
