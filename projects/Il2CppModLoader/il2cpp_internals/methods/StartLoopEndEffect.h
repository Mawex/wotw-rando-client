#include <interception_macros.h>

namespace app::methods::StartLoopEndEffect {
IL2CPP_REGISTER_METHOD(0x009B19A0, void, OnEnable, (StartLoopEndEffect * __this));
IL2CPP_REGISTER_METHOD(0x009B19C0, void, OnDisable, (StartLoopEndEffect * __this));
IL2CPP_REGISTER_METHOD(0x009B19D0, void, EndEffect, (StartLoopEndEffect * __this));
IL2CPP_REGISTER_METHOD(0x009B19F0, void, CancelEffect, (StartLoopEndEffect * __this));
IL2CPP_REGISTER_METHOD(0x009B1A10, void, OnStartTimelineEnded, (StartLoopEndEffect * __this));
IL2CPP_REGISTER_METHODINFO(0x04759D18, StartLoopEndEffect_OnStartTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B1A40, void, OnEndTimelineEnded, (StartLoopEndEffect * __this));
IL2CPP_REGISTER_METHODINFO(0x0470EA40, StartLoopEndEffect_OnEndTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B1B30, void, OnCancelTimelineEnded, (StartLoopEndEffect * __this));
IL2CPP_REGISTER_METHODINFO(0x0474FEC8, StartLoopEndEffect_OnCancelTimelineEnded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009B1C20, void, ChangeState, (StartLoopEndEffect * __this, StartLoopEndEffect_State__Enum newState));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (StartLoopEndEffect * __this));
}
