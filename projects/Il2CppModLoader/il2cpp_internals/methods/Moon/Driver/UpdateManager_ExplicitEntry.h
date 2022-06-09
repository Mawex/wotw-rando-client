#include <interception_macros.h>

namespace app::methods::Moon::Driver::UpdateManager_ExplicitEntry {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::IUpdateHandlerBase *, get_Handler, (app::UpdateManager_ExplicitEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0313A9E0, void, set_Handler, (app::UpdateManager_ExplicitEntry * this_ptr, app::IUpdateHandlerBase * value));
    IL2CPP_REGISTER_METHOD(0x0313AAD0, void, OnUpdate, (app::UpdateManager_ExplicitEntry * this_ptr, float delta_time));
    IL2CPP_REGISTER_METHOD(0x0313ABE0, void, Reset, (app::UpdateManager_ExplicitEntry * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0313AC10, void, __ctor, (app::UpdateManager_ExplicitEntry * this_ptr));
}
