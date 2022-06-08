#include <interception_macros.h>

namespace app::methods::UberDelegate {
IL2CPP_REGISTER_METHOD(0x013E5FA0, void, Clear, (UberDelegate * __this));
IL2CPP_REGISTER_METHOD(0x013E6080, void, Add, (UberDelegate * __this, Action * act));
IL2CPP_REGISTER_METHOD(0x013E6200, void, Print, (UberDelegate * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x013E63F0, void, Call, (UberDelegate * __this));
IL2CPP_REGISTER_METHOD(0x013E6870, void, Remove, (UberDelegate * __this, Action * act));
IL2CPP_REGISTER_METHOD(0x013E6960, void, __ctor, (UberDelegate * __this));
}
