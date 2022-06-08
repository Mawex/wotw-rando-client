#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabEventAPI {
IL2CPP_REGISTER_METHOD(0x002FA280, IPlayFabEventRouter *, get_EventRouter, (PlayFabEventAPI * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_EventRouter, (PlayFabEventAPI * __this, IPlayFabEventRouter * value));
IL2CPP_REGISTER_METHOD(0x01A29160, void, __ctor, (PlayFabEventAPI * __this, ILogger_1 * logger));
IL2CPP_REGISTER_METHOD(0x01A29380, IEnumerable_1_System_Threading_Tasks_Task_1_ *, EmitEvent, (PlayFabEventAPI * __this, IPlayFabEvent * playFabEvent));
}
