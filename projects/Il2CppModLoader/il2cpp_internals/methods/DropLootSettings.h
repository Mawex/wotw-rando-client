using namespace app;

namespace app::methods::DropLootSettings {
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsEnemyLoot, (DropLootSettings * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsEnemyLoot, (DropLootSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00BDD210, float, get_HeartChance, (DropLootSettings * __this));
IL2CPP_REGISTER_METHOD(0x00BDD440, float, get_EnergyShardChance, (DropLootSettings * __this));
IL2CPP_REGISTER_METHOD(0x00BDD670, int32_t, get_HeartCount, (DropLootSettings * __this));
IL2CPP_REGISTER_METHOD(0x00BDD860, int32_t, get_EnergyCount, (DropLootSettings * __this));
IL2CPP_REGISTER_METHOD(0x00BDDA50, void, __ctor, (DropLootSettings * __this));
}
