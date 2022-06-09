#include <interception_macros.h>

namespace app::methods::SceneSanity {
    IL2CPP_REGISTER_METHOD(0x00BBA030, String*, GetFullHierarchy, (app::GameObject * go));
    IL2CPP_REGISTER_METHOD(0x00BBA210, void, __ctor, (app::SceneSanity * this_ptr));
} // namespace app::methods::SceneSanity
