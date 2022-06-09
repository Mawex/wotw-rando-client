#include <interception_macros.h>

namespace app::methods::GasballAirMoveTimelineBehaviour {
IL2CPP_REGISTER_METHOD(0x0041A160, void, OnInitializeTask, (app::GasballAirMoveTimelineBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0041A4E0, BehaviourStatus__Enum, OnExecuteTask, (app::GasballAirMoveTimelineBehaviour * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0041B060, Vector3, UpdateRotation, (app::GasballAirMoveTimelineBehaviour * this_ptr, app::Vector3 current_rotation, app::Vector3 move_direction, float d_time));
IL2CPP_REGISTER_METHOD(0x0041B290, void, ResetCurrentlyPlayingTimeline, (app::GasballAirMoveTimelineBehaviour * this_ptr));
IL2CPP_REGISTER_METHOD(0x0041B360, void, __ctor, (app::GasballAirMoveTimelineBehaviour * this_ptr));
}
