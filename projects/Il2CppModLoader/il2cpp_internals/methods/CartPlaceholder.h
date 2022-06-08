#include <interception_macros.h>

namespace app::methods::CartPlaceholder {
IL2CPP_REGISTER_METHOD(0x002FBCA0, Cart *, get_ActiveCart, (CartPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00B3C920, void, Start, (CartPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00B3C9B0, bool, get_CanSpawn, (CartPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00B3CD10, LegacyEntity *, Instantiate, (CartPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FBCD0, void, RegisterCartSet, (CartPlaceholder * __this, CartSet * cartSet));
IL2CPP_REGISTER_METHOD(0x00B3D4E0, void, UpdateSpawnState, (CartPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00B3D6C0, void, __ctor, (CartPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00B3D770, void, _Instantiate_b__15_0, (CartPlaceholder * __this));
IL2CPP_REGISTER_METHODINFO(0x0470A7B8, CartPlaceholder__Instantiate_b__15_0__MethodInfo);
}
