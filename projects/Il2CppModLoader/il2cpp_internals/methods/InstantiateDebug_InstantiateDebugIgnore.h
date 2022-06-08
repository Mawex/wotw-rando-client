#include <interception_macros.h>

namespace app::methods::InstantiateDebug::InstantiateDebugIgnore {
IL2CPP_REGISTER_METHOD(0x0062CDF0, ICollection_1_System_String_ *, get_IgnoreCache, (InstantiateDebugIgnore * __this));
IL2CPP_REGISTER_METHOD(0x0062CE20, bool, IsIgnored, (InstantiateDebugIgnore * __this, String * prefabName));
IL2CPP_REGISTER_METHOD(0x0062CFB0, HashSet_1_System_String_ *, ConstructRuntimeCache, (InstantiateDebugIgnore * __this));
IL2CPP_REGISTER_METHOD(0x0062D1C0, void, __ctor, (InstantiateDebugIgnore * __this));
}
