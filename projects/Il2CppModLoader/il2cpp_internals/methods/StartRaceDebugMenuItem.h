#include <interception_macros.h>

namespace app::methods::StartRaceDebugMenuItem {
IL2CPP_REGISTER_METHOD(0x009B24D0, void, __ctor, (StartRaceDebugMenuItem * __this, String * path, String * text));
IL2CPP_REGISTER_METHOD(0x009B26A0, void, OnSelectedFixedUpdate, (StartRaceDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x009B2C10, void, NextRace, ());
IL2CPP_REGISTER_METHOD(0x009B2D60, void, PreviousRace, ());
IL2CPP_REGISTER_METHOD(0x009B2EB0, bool, StartRace, (StartRaceDebugMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x009B3170, void, OnFinishedLoadingRaceScene, (StartRaceDebugMenuItem * __this));
IL2CPP_REGISTER_METHODINFO(0x04778720, StartRaceDebugMenuItem_OnFinishedLoadingRaceScene__MethodInfo);
}
