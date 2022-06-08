#include <interception_macros.h>

namespace app::methods::fsm::CompoundState {
IL2CPP_REGISTER_METHOD(0x00F6D490, void, __ctor, (CompoundState_1 * __this, IState_2__Array * states));
IL2CPP_REGISTER_METHOD(0x00F6D910, void, OnEnter, (CompoundState_1 * __this));
IL2CPP_REGISTER_METHOD(0x00F6DAB0, void, OnExit, (CompoundState_1 * __this));
IL2CPP_REGISTER_METHOD(0x00F6DC50, void, UpdateState, (CompoundState_1 * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (CompoundState_1 * __this));
}
