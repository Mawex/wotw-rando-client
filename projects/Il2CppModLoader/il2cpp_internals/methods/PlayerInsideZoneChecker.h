#include <interception_macros.h>

namespace app::methods::PlayerInsideZoneChecker {
IL2CPP_REGISTER_METHOD(0x014270D0, bool, get_IsInside, (PlayerInsideZoneChecker * __this));
IL2CPP_REGISTER_METHOD(0x01427340, bool, Validate, (PlayerInsideZoneChecker * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00735B10, void, __ctor, (PlayerInsideZoneChecker * __this));
}
