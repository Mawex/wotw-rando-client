using namespace app;

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateStats {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Completed, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F436E0, void, set_Completed, (PlayerUberStateStats * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_WasKilled, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F436F0, void, set_WasKilled, (PlayerUberStateStats * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F43700, bool, get_CompletedWithEverything, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F43710, void, set_CompletedWithEverything, (PlayerUberStateStats * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_Health, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_Health, (PlayerUberStateStats * __this, float value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_MaxHealth, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F43720, void, set_MaxHealth, (PlayerUberStateStats * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Energy, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_Energy, (PlayerUberStateStats * __this, float value));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_MaxEnergy, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F43730, void, set_MaxEnergy, (PlayerUberStateStats * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Completion, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F43740, void, set_Completion, (PlayerUberStateStats * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Hours, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F43750, void, set_Hours, (PlayerUberStateStats * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Minutes, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F43760, void, set_Minutes, (PlayerUberStateStats * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_Seconds, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F43770, void, set_Seconds, (PlayerUberStateStats * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_MinRespawnHealth, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_MinRespawnHealth, (PlayerUberStateStats * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00F43780, void, __ctor, (PlayerUberStateStats * __this, Action * setDirtyCallback));
IL2CPP_REGISTER_METHOD(0x00F43960, void, Save, (PlayerUberStateStats * __this, UberStateArchive * archive, PlayerUberStateStats * abilities));
IL2CPP_REGISTER_METHOD(0x00F43B50, void, Load, (PlayerUberStateStats * __this, UberStateArchive * archive, int32_t storeVersion));
IL2CPP_REGISTER_METHOD(0x00F43E80, void, OnGui, (PlayerUberStateStats * __this, NavigableOnGUI * gui));
IL2CPP_REGISTER_METHOD(0x00E3FFC0, int64_t, get_Size, (PlayerUberStateStats * __this));
IL2CPP_REGISTER_METHOD(0x00F43FE0, void, RunSetDirtyCallback, (PlayerUberStateStats * __this));
}
