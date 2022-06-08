#include <interception_macros.h>

namespace app::methods::LoremasterScreen {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, MenuTabBackground__Enum, get_BackgroundMode, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F1920, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x009F19A0, CleverMenuItemSelectionManager *, get_Navigation, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F19C0, LoremasterUISlot *, get_SelectedItem, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F1AB0, void, Awake, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F1BD0, void, OnDestroy, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F1D90, void, Hide, (LoremasterScreen * __this, bool change));
IL2CPP_REGISTER_METHOD(0x009F1E80, void, ShowImmediate, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F1EF0, void, HideImmediate, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F1F30, void, Show, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F20A0, void, OnBackPressed, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHODINFO(0x0475BD60, LoremasterScreen_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009F22A0, void, PopulateItems, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F22B0, void, PopulateItems, (LoremasterScreen * __this, ReplaySetting__Array * replaySettings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItems, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_IsSuspended, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_IsSuspended, (LoremasterScreen * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00653FB0, SuspendableMask__Enum, get_Mask, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F2460, void, set_Mask, (LoremasterScreen * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x009F2520, void, OnPostTimeSlicedEnable, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F2630, void, OnInstantiate, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F2AF0, void, FixedUpdate, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F2BD0, void, UpdateLabel, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F2F30, bool, IsSelectedReplayUnlocked, (LoremasterScreen * __this));
IL2CPP_REGISTER_METHOD(0x009F3070, void, __ctor, (LoremasterScreen * __this));
}
