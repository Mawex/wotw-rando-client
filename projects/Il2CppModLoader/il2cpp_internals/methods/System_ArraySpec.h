#include <interception_macros.h>

namespace app::methods::System::ArraySpec {
IL2CPP_REGISTER_METHOD(0x02298B90, void, __ctor, (ArraySpec * __this, int32_t dimensions, bool bound));
IL2CPP_REGISTER_METHOD(0x02298BA0, Type *, Resolve, (ArraySpec * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x02298C30, StringBuilder *, Append, (ArraySpec * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x02298D40, String *, ToString, (ArraySpec * __this));
}
