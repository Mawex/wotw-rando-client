#include <interception_macros.h>

namespace app::methods::System::PointerSpec {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (PointerSpec * __this, int32_t pointer_level));
IL2CPP_REGISTER_METHOD(0x022804B0, Type *, Resolve, (PointerSpec * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x02280500, StringBuilder *, Append, (PointerSpec * __this, StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x02280530, String *, ToString, (PointerSpec * __this));
}
