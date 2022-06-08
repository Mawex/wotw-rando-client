#include <interception_macros.h>

namespace app::methods::FinishHandlerService {
IL2CPP_REGISTER_METHOD(0x01255F50, void, Setup, (FinishHandlerService * __this, List_1_GhostPlayer_ * ghosts));
IL2CPP_REGISTER_METHOD(0x01256000, void, Update, (FinishHandlerService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x01256210, void, OnGhostArrived, (FinishHandlerService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x01256320, void, OnPlayerArrived, (FinishHandlerService * __this, RaceStateMachineContext * ctx));
IL2CPP_REGISTER_METHOD(0x012563E0, void, Dispose, (FinishHandlerService * __this));
IL2CPP_REGISTER_METHOD(0x012563F0, void, __ctor, (FinishHandlerService * __this));
}
