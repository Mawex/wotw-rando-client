#include <interception_macros.h>

namespace app::methods::AnimatingFloat {
IL2CPP_REGISTER_METHOD(0x004FBCF0, bool, Update, (AnimatingFloat * __this, float dt));
IL2CPP_REGISTER_METHOD(0x004FBD80, bool, get_IsValueAtStart, (AnimatingFloat * __this));
IL2CPP_REGISTER_METHOD(0x004FBDA0, bool, get_IsValueAtEnd, (AnimatingFloat * __this));
IL2CPP_REGISTER_METHOD(0x004FBDC0, void, Serialize, (AnimatingFloat * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x004FBE40, void, __ctor, (AnimatingFloat * __this));
}
