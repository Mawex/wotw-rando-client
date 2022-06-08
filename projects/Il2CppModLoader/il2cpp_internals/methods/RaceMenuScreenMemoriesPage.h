#include <interception_macros.h>

namespace app::methods::RaceMenuScreenMemoriesPage {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x0070D380, CleverMenuItemSelectionManager *, get_Navigation, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070D450, MemoryUISlot *, get_SelectedItem, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070D540, void, Awake, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070D5B0, void, OnDestroy, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070D7A0, void, OnEnable, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070D9E0, void, OnBackPressed, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0476D7C8, RaceMenuScreenMemoriesPage_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0070DAD0, void, OnNavigate, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHODINFO(0x0478FEB0, RaceMenuScreenMemoriesPage_OnNavigate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0070DD00, void, PopulateItems, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070DD10, void, PopulateItems, (RaceMenuScreenMemoriesPage * __this, ReplaySetting__Array * replaySettings));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItems, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsSuspended, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsSuspended, (RaceMenuScreenMemoriesPage * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0070DEC0, SuspendableMask__Enum, get_Mask, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070DED0, void, set_Mask, (RaceMenuScreenMemoriesPage * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostTimeSlicedEnable, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070DF90, void, OnInstantiate, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070E2E0, void, FixedUpdate, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070E3C0, void, UpdateLabel, (RaceMenuScreenMemoriesPage * __this));
IL2CPP_REGISTER_METHOD(0x0070E700, void, __ctor, (RaceMenuScreenMemoriesPage * __this));
}
