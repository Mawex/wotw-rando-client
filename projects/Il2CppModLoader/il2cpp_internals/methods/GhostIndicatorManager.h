#include <interception_macros.h>

namespace app::methods::GhostIndicatorManager {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (GhostIndicatorManager * __this, GameObject * indicator));
IL2CPP_REGISTER_METHOD(0x00E21090, void, EnableIndicators, (GhostIndicatorManager * __this, List_1_GhostPlayer_ * ghosts));
IL2CPP_REGISTER_METHOD(0x00E21320, void, DisableIndicators, (GhostIndicatorManager * __this));
}
