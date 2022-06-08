#include <interception_macros.h>

namespace app::methods::RaceMenuScreenUISlot {
IL2CPP_REGISTER_METHOD(0x002FBB40, RaceSettings *, get_RaceSetting, (RaceMenuScreenUISlot * __this));
IL2CPP_REGISTER_METHOD(0x00710480, void, SetSetting, (RaceMenuScreenUISlot * __this, RaceSettings * race));
IL2CPP_REGISTER_METHOD(0x007109E0, void, SetSelected, (RaceMenuScreenUISlot * __this, bool selected));
IL2CPP_REGISTER_METHOD(0x00710A00, void, SetItemContext, (RaceMenuScreenUISlot * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00710AD0, void, OnItemContextDirty, (RaceMenuScreenUISlot * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x00710AE0, void, OnPressed, (RaceMenuScreenUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x04761410, RaceMenuScreenUISlot_OnPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00710F50, void, OnHighlighted, (RaceMenuScreenUISlot * __this, bool playSounds));
IL2CPP_REGISTER_METHODINFO(0x0478B4A0, RaceMenuScreenUISlot_OnHighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007114E0, void, OnUnhighlighted, (RaceMenuScreenUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x04738D30, RaceMenuScreenUISlot_OnUnhighlighted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00711650, void, OnBackPressed, (RaceMenuScreenUISlot * __this));
IL2CPP_REGISTER_METHODINFO(0x04708EE8, RaceMenuScreenUISlot_OnBackPressed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00711660, void, UpdateNotification, (RaceMenuScreenUISlot * __this));
IL2CPP_REGISTER_METHOD(0x00711770, void, ShowNotification, (RaceMenuScreenUISlot * __this, bool show));
IL2CPP_REGISTER_METHODINFO(0x0475DDF8, RaceMenuScreenUISlot_ShowNotification__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007117E0, void, FixedUpdate, (RaceMenuScreenUISlot * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RaceMenuScreenUISlot * __this));
IL2CPP_REGISTER_METHOD(0x00711850, void, __cctor, ());
}
