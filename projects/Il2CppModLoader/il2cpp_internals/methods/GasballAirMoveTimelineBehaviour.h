#include <interception_macros.h>

namespace app::methods::GasballAirMoveTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x0041A160, void, OnInitializeTask, (GasballAirMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041A4E0, BehaviourStatus__Enum, OnExecuteTask, (GasballAirMoveTimelineBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0041B060, Vector3, UpdateRotation, (GasballAirMoveTimelineBehaviour * __this, Vector3 currentRotation, Vector3 moveDirection, float dTime));
IL2CPP_REGISTER_METHOD(0x0041B290, void, ResetCurrentlyPlayingTimeline, (GasballAirMoveTimelineBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0041B360, void, __ctor, (GasballAirMoveTimelineBehaviour * __this));
}
