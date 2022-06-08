#include <interception_macros.h>

namespace app::methods::MenuTabManager {
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_WasPaused, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E7570, MenuTabEntry *, get_CurrentTab, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_CurrentTabIndex, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x002FD760, void, set_CurrentTabIndex, (MenuTabManager * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x009E7610, void, Awake, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E7720, void, UpdateBackgroundState, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E7930, void, FixedUpdate, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E7E90, void, EnableDarkBackground, (MenuTabManager * __this, bool immediate));
IL2CPP_REGISTER_METHOD(0x009E80D0, void, DisableDarkBackground, (MenuTabManager * __this, bool immediate));
IL2CPP_REGISTER_METHOD(0x009E82F0, void, EnableBlackBackground, (MenuTabManager * __this, bool immediate));
IL2CPP_REGISTER_METHOD(0x009E84F0, void, DisableBlackBackground, (MenuTabManager * __this, bool immediate));
IL2CPP_REGISTER_METHOD(0x009E86E0, void, EnableUi, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E8700, void, DisableUi, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E8730, void, EnableUiImmediate, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E87A0, void, DisableUiImmediate, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E8830, void, EnableHeaderAndTabs, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E8890, void, DisableHeaderAndTabs, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E88F0, void, UpdateTabManager, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E8B30, void, OnLastInventoryPressed, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E8EA0, bool, CantOpenInventory, (MenuTabManager * __this, bool showError));
IL2CPP_REGISTER_METHOD(0x009E8FF0, void, OpenShards, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E93C0, void, OpenInventory, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E9550, void, OpenMap, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E9970, void, BeforeScreenTabOpened, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E9D60, void, AfterScreenTabOpened, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E9D90, void, OpenCurrentTab, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009E9F40, void, HideSpiritLightNoTransition, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009EA0E0, void, OpenNextTab, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009EA110, void, OpenPreviousTab, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009EA140, void, UpdatePageNameText, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009EA620, int32_t, GetNextPageIndex, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009EA6C0, int32_t, GetPreviousPageIndex, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009EA760, int32_t, GetSafePrevIndex, (MenuTabManager * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x009EA800, int32_t, GetSafeNextIndex, (MenuTabManager * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x009EA8A0, bool, NeedToSkipMapScreen, (MenuTabManager * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x009EA990, bool, get_CanShowWorldMap, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009EAC20, void, UpdateCurrentVisibleScreen, (MenuTabManager * __this, MenuScreenManager_Screens__Enum screen));
IL2CPP_REGISTER_METHOD(0x009EAD00, void, ChangeBackgroundState, (MenuTabManager * __this, MenuTabBackground__Enum newState, bool immediate));
IL2CPP_REGISTER_METHOD(0x009EADB0, void, OnBackgroundStateExit, (MenuTabManager * __this, MenuTabBackground__Enum state, bool immediate));
IL2CPP_REGISTER_METHOD(0x009EADE0, void, OnBackgroundStateEnter, (MenuTabManager * __this, MenuTabBackground__Enum state, bool immediate));
IL2CPP_REGISTER_METHOD(0x0050B250, void, MakeNextBackgroundFadeImediate, (MenuTabManager * __this));
IL2CPP_REGISTER_METHOD(0x009EAE10, void, __ctor, (MenuTabManager * __this));
}
