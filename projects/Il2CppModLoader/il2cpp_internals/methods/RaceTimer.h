#include <interception_macros.h>

namespace app::methods::RaceTimer {
IL2CPP_REGISTER_METHOD(0x00446960, float, get_ElapsedTime, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724010, void, set_ElapsedTime, (RaceTimer * __this, float value));
IL2CPP_REGISTER_METHOD(0x00447340, float, get_PersonalBestTime, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00447350, void, set_PersonalBestTime, (RaceTimer * __this, float value));
IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_TimeLimit, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_TimeLimit, (RaceTimer * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724020, float, get_BestTime, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724030, void, set_BestTime, (RaceTimer * __this, float value));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_TimeToBeat, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_TimeToBeat, (RaceTimer * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724040, float, get_PreviousElapsedTime, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724050, void, set_PreviousElapsedTime, (RaceTimer * __this, float value));
IL2CPP_REGISTER_METHOD(0x00724060, float, get_AdjustedElapsedTime, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724130, void, set_AdjustedElapsedTime, (RaceTimer * __this, float value));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (RaceTimer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF7D0, SuspendableMask__Enum, get_Mask, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724150, void, set_Mask, (RaceTimer * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00724200, bool, get_IsOvertime, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724320, void, Awake, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x007243D0, void, OnDestroy, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724470, void, Update, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724560, void, TimeoutWarning, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724630, void, BestTimeNotBeaten, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x006A5EC0, void, SetTimeLimit, (RaceTimer * __this, float seconds));
IL2CPP_REGISTER_METHOD(0x00724720, void, StartTimer, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724730, void, Stop, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724740, void, Reset, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724760, void, DebugDraw, (RaceTimer * __this));
IL2CPP_REGISTER_METHOD(0x00724950, void, __ctor, (RaceTimer * __this));
}
