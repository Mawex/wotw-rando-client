#include <interception_macros.h>

namespace app::methods::LeaderboardEntryData {
IL2CPP_REGISTER_METHOD(0x015B77D0, int32_t, get_Time, (LeaderboardEntryData * __this));
IL2CPP_REGISTER_METHOD(0x015B7800, void, set_Time, (LeaderboardEntryData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x015B7840, int32_t, get_DeathCount, (LeaderboardEntryData * __this));
IL2CPP_REGISTER_METHOD(0x015B7870, void, set_DeathCount, (LeaderboardEntryData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x015B78B0, int32_t, get_CompletionPercentage, (LeaderboardEntryData * __this));
IL2CPP_REGISTER_METHOD(0x015B78D0, void, set_CompletionPercentage, (LeaderboardEntryData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x015B78F0, void, __ctor, (LeaderboardEntryData * __this, int32_t time, int32_t deaths, int32_t completion));
IL2CPP_REGISTER_METHOD(0x015B7D20, void, __ctor, (LeaderboardEntryData * __this));
IL2CPP_REGISTER_METHOD(0x015B8000, int32_t, EncodeExplorer, (LeaderboardEntryData * __this));
IL2CPP_REGISTER_METHOD(0x015B8060, int32_t, DecodeExplorer, (LeaderboardEntryData * __this, int32_t data));
IL2CPP_REGISTER_METHOD(0x015B8100, int32_t, EncodeSpeedRunner, (LeaderboardEntryData * __this));
IL2CPP_REGISTER_METHOD(0x015B8160, void, DecodeSpeedRunner, (LeaderboardEntryData * __this, int32_t data));
IL2CPP_REGISTER_METHOD(0x015B81F0, int32_t, EncodeSurvivor, (LeaderboardEntryData * __this));
IL2CPP_REGISTER_METHOD(0x015B8250, int32_t, DecodeSurvivor, (LeaderboardEntryData * __this, int32_t data));
}
