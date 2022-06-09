#include <interception_macros.h>

namespace app::methods::ServerPolygon {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, __ctor, (app::ServerPolygon * this_ptr, app::Object* data));
    IL2CPP_REGISTER_METHOD(0x0059D6D0, Object*, CreateData, (app::ServerPolygon * this_ptr, app::Object* data));
    IL2CPP_REGISTER_METHOD(0x0059D960, Component_1*, ApplyData, (app::ServerPolygon * this_ptr, app::GameObject** gameobj));
} // namespace app::methods::ServerPolygon
