#include <interception_macros.h>

namespace app::methods::fsm::State {
IL2CPP_REGISTER_METHOD(0x00B8BEC0, void, UpdateState, (State_2 * __this));
IL2CPP_REGISTER_METHOD(0x00F6DFB0, void, OnEnter, (State_2 * __this));
IL2CPP_REGISTER_METHOD(0x00F6DFD0, void, OnExit, (State_2 * __this));
IL2CPP_REGISTER_METHOD(0x00F6DFF0, void, __ctor, (State_2 * __this));
IL2CPP_REGISTER_METHOD(0x00F6E460, void, __ctor, (State_2 * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, SetID, (State_2 * __this, int32_t id));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetStateId, (State_2 * __this));
}
