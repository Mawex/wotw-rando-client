#include <interception_macros.h>

namespace app::methods::CleverMenuItemGroup {
IL2CPP_REGISTER_METHOD(0x012B08D0, bool, get_AutoSelectFirstItemOnEnable, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B09A0, bool, get_IsVisible, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B09C0, void, set_IsVisible, (CleverMenuItemGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012B0B50, bool, get_CanBeEntered, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B0C30, bool, get_IsActive, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B0C50, void, set_IsActive, (CleverMenuItemGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012B0E80, void, OnDisable, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B0FA0, bool, get_IsHighlightVisible, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B0FC0, void, set_IsHighlightVisible, (CleverMenuItemGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012B0FE0, void, OnSelectionManagerBackPressed, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x047213A8, CleverMenuItemGroup_OnSelectionManagerBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012B1000, void, Awake, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B1730, void, OnDestroy, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B1FA0, void, Start, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B21B0, void, OnEnable, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B24F0, void, OnOptionBackPressed, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x0477F978, CleverMenuItemGroup_OnOptionBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012B2750, void, OnMenuItemChange, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x04726F50, CleverMenuItemGroup_OnMenuItemChange__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012B2A10, bool, OnMenuItemChangedInGroup, (CleverMenuItemGroup * __this, CleverMenuItemGroup * group));
IL2CPP_REGISTER_METHOD(0x012B2C20, void, OnMenuItemPressed, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x0475F708, CleverMenuItemGroup_OnMenuItemPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012B30D0, void, UpdateHighlight, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B3270, void, OnEnteredChildGroup, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B3290, void, EnterInGroup, (CleverMenuItemGroup * __this));
IL2CPP_REGISTER_METHOD(0x012B3440, void, __ctor, (CleverMenuItemGroup * __this));
}
