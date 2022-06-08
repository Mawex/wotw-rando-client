#include <interception_macros.h>

namespace app::methods::FixedUpdateScheduler {
IL2CPP_REGISTER_METHOD(0x0126F940, void, Awake, (FixedUpdateScheduler * __this));
IL2CPP_REGISTER_METHOD(0x0126F9D0, void, FixedUpdate, (FixedUpdateScheduler * __this));
IL2CPP_REGISTER_METHOD(0x0126FC10, void, ScheduleAction, (FixedUpdateScheduler * __this, ISuspendable * suspendable, Action * action, float time));
IL2CPP_REGISTER_METHOD(0x0126FDB0, void, __ctor, (FixedUpdateScheduler * __this));
}
