using namespace app;

namespace app::methods::GameMapSavePedestals {
IL2CPP_REGISTER_METHOD(0x006A1160, List_1_GameMapSavePedestal_ *, get_Pedestals, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A1240, void, ShowPedestals, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A13A0, void, HidePedestals, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A1500, void, ChangeSelection, (GameMapSavePedestals * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x006A17D0, int32_t, TeleporterUnderMouse, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A1A30, void, AdvanceAreaMap, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A1D50, void, Advance, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A22C0, void, OnDisable, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A2440, GameMapSavePedestal *, get_SelectedPedestal, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A24E0, void, Select, (GameMapSavePedestals * __this, String * identifier));
IL2CPP_REGISTER_METHOD(0x006A2770, void, SetOriginIndex, (GameMapSavePedestals * __this, String * identifier));
IL2CPP_REGISTER_METHOD(0x006A29F0, void, ResetOriginIndex, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A2A00, bool, HasOriginIndex, (GameMapSavePedestals * __this));
IL2CPP_REGISTER_METHOD(0x006A2A10, String *, GetIdentifierForIndex, (GameMapSavePedestals * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x006A2B00, void, SetIndex, (GameMapSavePedestals * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x006A2E70, void, __ctor, (GameMapSavePedestals * __this));
}
