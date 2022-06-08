#include <interception_macros.h>

namespace app::methods::Moon::Timeline::GameplayToCinematicEntity {
IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_Time, (GameplayToCinematicEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076E700, void, Awake, (GameplayToCinematicEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076E8A0, void, OnDestroy, (GameplayToCinematicEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076EA40, void, OnGameReset, (GameplayToCinematicEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x0470AE98, GameplayToCinematicEntity_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0076EB10, void, OnStartPlayback, (GameplayToCinematicEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0076EC30, void, SetupStartingValues, (GameplayToCinematicEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076ED20, void, OnStopPlayback, (GameplayToCinematicEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076ED30, void, OnUpdateEntity, (GameplayToCinematicEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0076F150, void, RestoreToOriginalState, (GameplayToCinematicEntity * __this));
IL2CPP_REGISTER_METHOD(0x0076F300, void, SynchronizeData, (GameplayToCinematicEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x0076F390, void, __ctor, (GameplayToCinematicEntity * __this));
}
