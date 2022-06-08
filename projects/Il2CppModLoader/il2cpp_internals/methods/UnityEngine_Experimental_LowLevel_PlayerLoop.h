#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::LowLevel::PlayerLoop {
IL2CPP_REGISTER_METHOD(0x02431FB0, PlayerLoopSystem, GetDefaultPlayerLoop, ());
IL2CPP_REGISTER_METHOD(0x02432040, void, SetPlayerLoop, (PlayerLoopSystem loop));
IL2CPP_REGISTER_METHOD(0x02432330, int32_t, PlayerLoopSystemToInternal, (PlayerLoopSystem sys, List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * * internalSys));
IL2CPP_REGISTER_METHOD(0x024325C0, PlayerLoopSystem, InternalToPlayerLoopSystem, (PlayerLoopSystemInternal__Array * internalSys, int32_t * offset));
IL2CPP_REGISTER_METHOD(0x02432A20, PlayerLoopSystemInternal__Array *, GetDefaultPlayerLoopInternal, ());
IL2CPP_REGISTER_METHOD(0x02432A70, void, SetPlayerLoopInternal, (PlayerLoopSystemInternal__Array * loop));
}
