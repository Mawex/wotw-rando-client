#include <interception_macros.h>

namespace app::methods::RandomPrefabProvider {
IL2CPP_REGISTER_METHOD(0x0072F9F0, GameObject *, Prefab, (app::RandomPrefabProvider * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x0072FB20, GameObject__Array *, GetPotentialPrefabs, (app::RandomPrefabProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x0072FBB0, void, __ctor, (app::RandomPrefabProvider * this_ptr));
}
