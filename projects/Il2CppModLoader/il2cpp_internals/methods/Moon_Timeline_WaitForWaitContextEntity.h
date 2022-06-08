#include <interception_macros.h>

namespace app::methods::Moon::Timeline::WaitForWaitContextEntity {
IL2CPP_REGISTER_METHOD(0x008693A0, float, get_CurrentTime, (WaitForWaitContextEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, IWaitContext *, get_CurrentWaitContext, (WaitForWaitContextEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E93310, void, OnStartPlayback, (WaitForWaitContextEntity * __this, IContext * context));
IL2CPP_REGISTER_METHODINFO(0x04775238, WaitForWaitContextEntity_OnStartPlayback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (WaitForWaitContextEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (WaitForWaitContextEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (WaitForWaitContextEntity * __this));
IL2CPP_REGISTER_METHOD(0x01E933F0, void, OnUpdateEntity, (WaitForWaitContextEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0074AB10, bool, HasFinished, (WaitForWaitContextEntity * __this, int32_t eventId));
IL2CPP_REGISTER_METHOD(0x01E934D0, void, __ctor, (WaitForWaitContextEntity * __this));
}
