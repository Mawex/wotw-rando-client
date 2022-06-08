using namespace app;

namespace app::methods::DifficultyToggler {
IL2CPP_REGISTER_METHOD(0x00B92A20, String *, get_Path, (DifficultyToggler * __this));
IL2CPP_REGISTER_METHOD(0x00B92AA0, String *, get_Name, (DifficultyToggler * __this));
IL2CPP_REGISTER_METHOD(0x00B92B20, String *, get_HelpText, (DifficultyToggler * __this));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_Column, (DifficultyToggler * __this));
IL2CPP_REGISTER_METHOD(0x00B92BA0, String__Array *, get_ToggleOptions, (DifficultyToggler * __this));
IL2CPP_REGISTER_METHOD(0x00B92DA0, int32_t, get_CurrentToggleOptionId, (DifficultyToggler * __this));
IL2CPP_REGISTER_METHOD(0x00B92E30, void, set_CurrentToggleOptionId, (DifficultyToggler * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DifficultyToggler * __this));
}
