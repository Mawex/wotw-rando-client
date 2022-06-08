using namespace app;

namespace app::methods::InstanciationToggler {
IL2CPP_REGISTER_METHOD(0x0062A360, void, OnApplicationQuit, (InstanciationToggler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpReports, (InstanciationToggler * __this));
IL2CPP_REGISTER_METHOD(0x0062A3F0, String *, get_Path, (InstanciationToggler * __this));
IL2CPP_REGISTER_METHOD(0x0062A470, String *, get_Name, (InstanciationToggler * __this));
IL2CPP_REGISTER_METHOD(0x0062A4F0, String *, get_HelpText, (InstanciationToggler * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (InstanciationToggler * __this));
IL2CPP_REGISTER_METHOD(0x0062A570, String__Array *, get_ToggleOptions, (InstanciationToggler * __this));
IL2CPP_REGISTER_METHOD(0x0062A6B0, int32_t, get_CurrentToggleOptionId, (InstanciationToggler * __this));
IL2CPP_REGISTER_METHOD(0x0062A6C0, void, set_CurrentToggleOptionId, (InstanciationToggler * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (InstanciationToggler * __this));
}
