#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::InteractionLookAt {
IL2CPP_REGISTER_METHOD(0x02A0A870, void, Look, (InteractionLookAt * __this, Transform * target, float time));
IL2CPP_REGISTER_METHOD(0x02A0AAE0, void, Update, (InteractionLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02A0AFD0, void, SolveSpine, (InteractionLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02A0B1A0, void, SolveHead, (InteractionLookAt * __this));
IL2CPP_REGISTER_METHOD(0x02A0B2F0, void, __ctor, (InteractionLookAt * __this));
}
