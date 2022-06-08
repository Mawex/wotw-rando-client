#include <interception_macros.h>

namespace app::methods::WormHole {
IL2CPP_REGISTER_METHOD(0x0058DF50, void, Start, (WormHole * __this));
IL2CPP_REGISTER_METHOD(0x0058DFD0, void, Serialize, (WormHole * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (WormHole * __this));
IL2CPP_REGISTER_METHOD(0x0058E220, Quaternion, get_Rotation, (WormHole * __this));
IL2CPP_REGISTER_METHOD(0x0058E300, void, OnEmerge, (WormHole * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (WormHole * __this));
}
