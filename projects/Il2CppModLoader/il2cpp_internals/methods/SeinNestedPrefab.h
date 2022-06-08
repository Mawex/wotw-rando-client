#include <interception_macros.h>

namespace app::methods::SeinNestedPrefab {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (SeinNestedPrefab * __this, SeinCharacter * sein, GameObject * prefab));
IL2CPP_REGISTER_METHOD(0x008AEAC0, void, set_IsInstantiated, (SeinNestedPrefab * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008AEC20, bool, get_IsInstantiated, (SeinNestedPrefab * __this));
IL2CPP_REGISTER_METHOD(0x008AECC0, void, Instantiate, (SeinNestedPrefab * __this));
IL2CPP_REGISTER_METHOD(0x008AF050, void, Destroy, (SeinNestedPrefab * __this));
}
