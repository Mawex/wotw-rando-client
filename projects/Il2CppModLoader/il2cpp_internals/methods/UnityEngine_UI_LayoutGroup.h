using namespace app;

namespace app::methods::UnityEngine::UI::LayoutGroup {
IL2CPP_REGISTER_METHOD(0x024CF7B0, void, __ctor, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x01F22F90, RectOffset *, get_padding, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024CFBD0, void, set_padding, (LayoutGroup * __this, RectOffset * value));
IL2CPP_REGISTER_METHOD(0x01F22020, TextAnchor__Enum, get_childAlignment, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024CFCA0, void, set_childAlignment, (LayoutGroup * __this, TextAnchor__Enum value));
IL2CPP_REGISTER_METHOD(0x024CFD40, RectTransform *, get_rectTransform, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024CFE10, List_1_UnityEngine_RectTransform_ *, get_rectChildren, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024CFE20, void, CalculateLayoutInputHorizontal, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D0190, float, get_minWidth, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D01A0, float, get_preferredWidth, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D01B0, float, get_flexibleWidth, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D01C0, float, get_minHeight, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D01D0, float, get_preferredHeight, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D01E0, float, get_flexibleHeight, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, int32_t, get_layoutPriority, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D01F0, void, OnEnable, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D0200, void, OnDisable, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D01F0, void, OnDidApplyAnimationProperties, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D02B0, float, GetTotalMinSize, (LayoutGroup * __this, int32_t axis));
IL2CPP_REGISTER_METHOD(0x024D02C0, float, GetTotalPreferredSize, (LayoutGroup * __this, int32_t axis));
IL2CPP_REGISTER_METHOD(0x024D02D0, float, GetTotalFlexibleSize, (LayoutGroup * __this, int32_t axis));
IL2CPP_REGISTER_METHOD(0x024D02E0, float, GetStartOffset, (LayoutGroup * __this, int32_t axis, float requiredSpaceWithoutPadding));
IL2CPP_REGISTER_METHOD(0x024D0560, float, GetAlignmentOnAxis, (LayoutGroup * __this, int32_t axis));
IL2CPP_REGISTER_METHOD(0x024D05B0, void, SetLayoutInputForAxis, (LayoutGroup * __this, float totalMin, float totalPreferred, float totalFlexible, int32_t axis));
IL2CPP_REGISTER_METHOD(0x024D0610, void, SetChildAlongAxis, (LayoutGroup * __this, RectTransform * rect, int32_t axis, float pos));
IL2CPP_REGISTER_METHOD(0x024D0720, void, SetChildAlongAxis, (LayoutGroup * __this, RectTransform * rect, int32_t axis, float pos, float size));
IL2CPP_REGISTER_METHOD(0x024D0810, bool, get_isRootLayoutGroup, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D0A60, void, OnRectTransformDimensionsChange, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D01F0, void, OnTransformChildrenChanged, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D0A90, void, SetDirty, (LayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024D0CD0, IEnumerator *, DelayedSetDirty, (LayoutGroup * __this, RectTransform * rectTransform));
IL2CPP_REGISTER_METHOD(0x015E69F0, void, SetProperty, (LayoutGroup * __this, Object * * currentValue, Object * newValue));
IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty, (LayoutGroup * __this, GridLayoutGroup_Corner__Enum * currentValue, GridLayoutGroup_Corner__Enum newValue));
IL2CPP_REGISTER_METHODINFO(0x04704AC0, LayoutGroup_SetProperty_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty, (LayoutGroup * __this, GridLayoutGroup_Axis__Enum * currentValue, GridLayoutGroup_Axis__Enum newValue));
IL2CPP_REGISTER_METHODINFO(0x04726E08, LayoutGroup_SetProperty_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E6B00, void, SetProperty, (LayoutGroup * __this, Vector2 * currentValue, Vector2 newValue));
IL2CPP_REGISTER_METHODINFO(0x047591F8, LayoutGroup_SetProperty_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty, (LayoutGroup * __this, GridLayoutGroup_Constraint__Enum * currentValue, GridLayoutGroup_Constraint__Enum newValue));
IL2CPP_REGISTER_METHODINFO(0x047336B8, LayoutGroup_SetProperty_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E6890, void, SetProperty, (LayoutGroup * __this, int32_t * currentValue, int32_t newValue));
IL2CPP_REGISTER_METHODINFO(0x0477A1D0, LayoutGroup_SetProperty_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E6A70, void, SetProperty, (LayoutGroup * __this, float * currentValue, float newValue));
IL2CPP_REGISTER_METHODINFO(0x0477CBE0, LayoutGroup_SetProperty_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E6800, void, SetProperty, (LayoutGroup * __this, bool * currentValue, bool newValue));
IL2CPP_REGISTER_METHODINFO(0x04793758, LayoutGroup_SetProperty_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E69F0, void, SetProperty, (LayoutGroup * __this, RectOffset * * currentValue, RectOffset * newValue));
IL2CPP_REGISTER_METHODINFO(0x04731F90, LayoutGroup_SetProperty_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty, (LayoutGroup * __this, TextAnchor__Enum * currentValue, TextAnchor__Enum newValue));
IL2CPP_REGISTER_METHODINFO(0x047086E0, LayoutGroup_SetProperty_9__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E6920, void, SetProperty, (LayoutGroup * __this, Int32Enum__Enum * currentValue, Int32Enum__Enum newValue));
}
