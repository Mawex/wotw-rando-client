using namespace app;

namespace app::methods::SeinWallJumpPuppet {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftJump, (SeinWallJumpPuppet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftAwayJump, (SeinWallJumpPuppet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftTowardsJump, (SeinWallJumpPuppet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEdgeJump, (SeinWallJumpPuppet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftRegularJump, (SeinWallJumpPuppet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRightAwayJump, (SeinWallJumpPuppet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRightTowardsJump, (SeinWallJumpPuppet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRightRegularJump, (SeinWallJumpPuppet * __this));
IL2CPP_REGISTER_METHOD(0x008E77B0, int32_t, get_Id, (SeinWallJumpPuppet * __this));
IL2CPP_REGISTER_METHOD(0x00AB1530, void, Perform, (SeinWallJumpPuppet * __this, SeinWallJumpPuppet_Event__Enum e));
IL2CPP_REGISTER_METHODINFO(0x04753970, SeinWallJumpPuppet_Perform__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00AB1530, void, OnPerform, (SeinWallJumpPuppet * __this, int32_t eventId, Object__Array * parameters));
IL2CPP_REGISTER_METHOD(0x00AB1640, int32_t, PlaySpecialAnimationRandom, (SeinWallJumpPuppet * __this, MoonAnimation__Array * animations, int32_t priority, Func_1_Boolean_ * condition, Action * onStart, Action * onStop));
IL2CPP_REGISTER_METHOD(0x005D6E60, void, __ctor, (SeinWallJumpPuppet * __this));
}
