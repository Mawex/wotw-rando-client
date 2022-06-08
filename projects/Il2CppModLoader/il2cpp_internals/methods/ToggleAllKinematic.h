using namespace app;

namespace app::methods::ToggleAllKinematic {
IL2CPP_REGISTER_METHOD(0x00AFBA80, String *, get_Path, (ToggleAllKinematic * __this));
IL2CPP_REGISTER_METHOD(0x00AFBB00, void, Awake, (ToggleAllKinematic * __this));
IL2CPP_REGISTER_METHOD(0x00AFBB10, String *, get_Name, (ToggleAllKinematic * __this));
IL2CPP_REGISTER_METHOD(0x00AFBB90, String *, get_HelpText, (ToggleAllKinematic * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (ToggleAllKinematic * __this));
IL2CPP_REGISTER_METHOD(0x00AFBC10, String__Array *, get_ToggleOptions, (ToggleAllKinematic * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentToggleOptionId, (ToggleAllKinematic * __this));
IL2CPP_REGISTER_METHOD(0x00AFBD50, void, set_CurrentToggleOptionId, (ToggleAllKinematic * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00AFC330, void, __ctor, (ToggleAllKinematic * __this));
}
