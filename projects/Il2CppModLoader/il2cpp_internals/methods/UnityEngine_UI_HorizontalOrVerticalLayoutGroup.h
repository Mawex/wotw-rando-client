using namespace app;

namespace app::methods::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
IL2CPP_REGISTER_METHOD(0x024B6530, void, __ctor, (HorizontalOrVerticalLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B65B0, float, get_spacing, (HorizontalOrVerticalLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B65C0, void, set_spacing, (HorizontalOrVerticalLayoutGroup * __this, float value));
IL2CPP_REGISTER_METHOD(0x024B66B0, bool, get_childForceExpandWidth, (HorizontalOrVerticalLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B66C0, void, set_childForceExpandWidth, (HorizontalOrVerticalLayoutGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024B6750, bool, get_childForceExpandHeight, (HorizontalOrVerticalLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B6760, void, set_childForceExpandHeight, (HorizontalOrVerticalLayoutGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024B67F0, bool, get_childControlWidth, (HorizontalOrVerticalLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B6800, void, set_childControlWidth, (HorizontalOrVerticalLayoutGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024B6890, bool, get_childControlHeight, (HorizontalOrVerticalLayoutGroup * __this));
IL2CPP_REGISTER_METHOD(0x024B68A0, void, set_childControlHeight, (HorizontalOrVerticalLayoutGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024B6930, void, CalcAlongAxis, (HorizontalOrVerticalLayoutGroup * __this, int32_t axis, bool isVertical));
IL2CPP_REGISTER_METHOD(0x024B6CB0, void, SetChildrenAlongAxis, (HorizontalOrVerticalLayoutGroup * __this, int32_t axis, bool isVertical));
IL2CPP_REGISTER_METHOD(0x024B74C0, void, GetChildSizes, (HorizontalOrVerticalLayoutGroup * __this, RectTransform * child, int32_t axis, bool controlSize, bool childForceExpand, float * min, float * preferred, float * flexible));
}
