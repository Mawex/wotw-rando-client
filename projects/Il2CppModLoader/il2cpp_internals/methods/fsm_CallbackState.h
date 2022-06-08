using namespace app;

namespace app::methods::fsm::CallbackState {
IL2CPP_REGISTER_METHOD(0x00F6CC00, CallbackState_1 *, AddUpdateStateAction, (CallbackState_1 * __this, Action * updateStateAction));
IL2CPP_REGISTER_METHOD(0x00F6CCC0, void, __ctor, (CallbackState_1 * __this, IState_2 * state));
IL2CPP_REGISTER_METHOD(0x00F6D140, void, UpdateState, (CallbackState_1 * __this));
IL2CPP_REGISTER_METHOD(0x00F6D1F0, void, OnEnter, (CallbackState_1 * __this));
IL2CPP_REGISTER_METHOD(0x00F6D2A0, void, OnExit, (CallbackState_1 * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (CallbackState_1 * __this));
}
