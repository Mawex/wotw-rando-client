#include <interception_macros.h>

namespace app::methods::PathFollower {
IL2CPP_REGISTER_METHOD(0x00446940, Vector3, get_WorldPosition, (PathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_WorldAngle, (PathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_ReachedTheEnd, (PathFollower * __this));
IL2CPP_REGISTER_METHOD(0x00446980, void, set_ReachedTheEnd, (PathFollower * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00446990, void, Reset, (PathFollower * __this));
IL2CPP_REGISTER_METHOD(0x004469A0, void, UpdateFollower, (PathFollower * __this, float dt));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (PathFollower * __this));
}
