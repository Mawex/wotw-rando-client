#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::ActiveAxis {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_CurrentDepth, (app::ActiveAxis * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0199FCF0, void, Reactivate, (app::ActiveAxis * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0199FD00, void, __ctor, (app::ActiveAxis * this_ptr, app::Asttree * axis_tree));
    IL2CPP_REGISTER_METHOD(0x019A00B0, bool, MoveToStartElement, (app::ActiveAxis * this_ptr, app::String * localname, app::String * u_r_n));
    IL2CPP_REGISTER_METHOD(0x019A0290, bool, EndElement, (app::ActiveAxis * this_ptr, app::String * localname, app::String * u_r_n));
    IL2CPP_REGISTER_METHOD(0x019A0460, bool, MoveToAttribute, (app::ActiveAxis * this_ptr, app::String * localname, app::String * u_r_n));
}
