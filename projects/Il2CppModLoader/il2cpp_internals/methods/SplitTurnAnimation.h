#include <interception_macros.h>

namespace app::methods::SplitTurnAnimation {
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsDone, (SplitTurnAnimation * __this));
IL2CPP_REGISTER_METHOD(0x009A3650, void, Play, (SplitTurnAnimation * __this, ILocomotionTurningHandler * locomotion, float targetLookDirection));
IL2CPP_REGISTER_METHOD(0x009A37E0, void, Step, (SplitTurnAnimation * __this));
IL2CPP_REGISTER_METHOD(0x009A3B20, void, __ctor, (SplitTurnAnimation * __this));
}
