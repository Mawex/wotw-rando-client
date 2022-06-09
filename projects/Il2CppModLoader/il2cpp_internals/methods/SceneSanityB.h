#include <interception_macros.h>

namespace app::methods::SceneSanityB {
    IL2CPP_REGISTER_METHOD(0x00BBA2A0, String*, GetFullHierarchy, (app::GameObject * game_object));
    IL2CPP_REGISTER_METHOD(0x00BBA4D0, void, __ctor, (app::SceneSanityB * this_ptr));
} // namespace app::methods::SceneSanityB
