#include <interception_macros.h>

namespace app::methods::DelayedActionExecuter {
IL2CPP_REGISTER_METHOD(0x00724010, void, set_StartTime, (DelayedActionExecuter * __this, float value));
IL2CPP_REGISTER_METHOD(0x00446960, float, get_StartTime, (DelayedActionExecuter * __this));
IL2CPP_REGISTER_METHOD(0x00B80300, void, ExecuteAction, (DelayedActionExecuter * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B803C0, void, StopAction, (DelayedActionExecuter * __this));
IL2CPP_REGISTER_METHOD(0x00B80520, ActionWithDuration *, get_ActionWithDuration, (DelayedActionExecuter * __this));
IL2CPP_REGISTER_METHOD(0x00B80630, ActionMethod *, get_ActionMethod, (DelayedActionExecuter * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DelayedActionExecuter * __this));
}
