#include <interception_macros.h>

namespace app::methods::GameMapShowObjective {
IL2CPP_REGISTER_METHOD(0x006A2E90, void, add_OnFinish, (GameMapShowObjective * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x006A2F80, void, remove_OnFinish, (GameMapShowObjective * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsPerforming, (GameMapShowObjective * __this));
IL2CPP_REGISTER_METHOD(0x006A3070, void, ShowObjective, (GameMapShowObjective * __this, Objective * objective, Action * onFinish));
IL2CPP_REGISTER_METHOD(0x006A36A0, void, Finish, (GameMapShowObjective * __this));
IL2CPP_REGISTER_METHOD(0x006A37F0, void, OnDisable, (GameMapShowObjective * __this));
IL2CPP_REGISTER_METHOD(0x006A3800, void, FixedUpdate, (GameMapShowObjective * __this));
IL2CPP_REGISTER_METHOD(0x006A3840, bool, get_IsComplete, (GameMapShowObjective * __this));
IL2CPP_REGISTER_METHOD(0x006A3850, bool, get_IsInEndWait, (GameMapShowObjective * __this));
IL2CPP_REGISTER_METHOD(0x006A3860, Vector3, WorldToUIPosition, (GameMapShowObjective * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x006A3980, void, ChangeState, (GameMapShowObjective * __this, GameMapShowObjective_State__Enum state));
IL2CPP_REGISTER_METHOD(0x006A3990, void, UpdateState, (GameMapShowObjective * __this));
IL2CPP_REGISTER_METHOD(0x006A40B0, void, __ctor, (GameMapShowObjective * __this));
}
