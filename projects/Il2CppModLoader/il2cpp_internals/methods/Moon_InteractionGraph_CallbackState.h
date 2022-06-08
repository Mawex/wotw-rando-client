#include <interception_macros.h>

namespace app::methods::Moon::InteractionGraph::CallbackState {
IL2CPP_REGISTER_METHOD(0x0198B7F0, CallbackState *, AddUpdateStateAction, (CallbackState * __this, Action * updateStateAction));
IL2CPP_REGISTER_METHOD(0x0198B8B0, void, __ctor, (CallbackState * __this, IState_1 * state));
IL2CPP_REGISTER_METHOD(0x0198BD30, void, UpdateState, (CallbackState * __this));
IL2CPP_REGISTER_METHOD(0x0198BDE0, void, OnEnter, (CallbackState * __this));
IL2CPP_REGISTER_METHOD(0x0198BE90, void, OnExit, (CallbackState * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (CallbackState * __this));
}
