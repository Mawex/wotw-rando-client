using namespace app;

namespace app::methods::InteractionToggler {
IL2CPP_REGISTER_METHOD(0x0063B910, String *, get_Path, (InteractionToggler * __this));
IL2CPP_REGISTER_METHOD(0x0063B990, String *, get_Name, (InteractionToggler * __this));
IL2CPP_REGISTER_METHOD(0x0063BA10, String *, get_HelpText, (InteractionToggler * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (InteractionToggler * __this));
IL2CPP_REGISTER_METHOD(0x0063BA90, String__Array *, get_ToggleOptions, (InteractionToggler * __this));
IL2CPP_REGISTER_METHOD(0x0062A6B0, int32_t, get_CurrentToggleOptionId, (InteractionToggler * __this));
IL2CPP_REGISTER_METHOD(0x0063BBD0, void, set_CurrentToggleOptionId, (InteractionToggler * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (InteractionToggler * __this));
}
