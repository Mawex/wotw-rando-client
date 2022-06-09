#include <interception_macros.h>

namespace app::methods::EntityContext {
    IL2CPP_REGISTER_METHOD(0x002FA280, Entity*, get_Entity, (app::EntityContext * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Entity, (app::EntityContext * this_ptr, app::Entity* value));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::EntityContext * this_ptr, app::Entity* entity));
} // namespace app::methods::EntityContext
