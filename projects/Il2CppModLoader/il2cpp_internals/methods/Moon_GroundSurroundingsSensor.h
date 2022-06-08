using namespace app;

namespace app::methods::Moon::GroundSurroundingsSensor {
IL2CPP_REGISTER_METHOD(0x0012B830, bool, get_MoreSpaceInTheFront, (GroundSurroundingsSensor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012B840, void, UpdateWallData, (GroundSurroundingsSensor__Boxed * __this, GroundEntityLocomotion * locomotion, Vector3 center));
IL2CPP_REGISTER_METHOD(0x0012B870, bool, EnoughDistanceFromWallsAndLedgeFront, (GroundSurroundingsSensor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012B890, bool, EnoughDistanceFromWallsAndLedgeBack, (GroundSurroundingsSensor__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012B8B0, bool, EnoughDistanceFromWallsAndLedge, (GroundSurroundingsSensor__Boxed * __this));
}
