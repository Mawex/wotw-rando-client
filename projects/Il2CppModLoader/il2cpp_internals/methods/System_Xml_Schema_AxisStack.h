#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::AxisStack {
IL2CPP_REGISTER_METHOD(0x002FB930, ForwardAxis *, get_Subtree, (AxisStack * __this));
IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Length, (AxisStack * __this));
IL2CPP_REGISTER_METHOD(0x019A3240, void, __ctor, (AxisStack * __this, ForwardAxis * faxis, ActiveAxis * parent));
IL2CPP_REGISTER_METHOD(0x019A33C0, void, Push, (AxisStack * __this, int32_t depth));
IL2CPP_REGISTER_METHOD(0x019A3550, void, Pop, (AxisStack * __this));
IL2CPP_REGISTER_METHOD(0x019A35A0, bool, Equal, (String * thisname, String * thisURN, String * name, String * URN));
IL2CPP_REGISTER_METHOD(0x019A3650, void, MoveToParent, (AxisStack * __this, String * name, String * URN, int32_t depth));
IL2CPP_REGISTER_METHOD(0x019A3A10, bool, MoveToChild, (AxisStack * __this, String * name, String * URN, int32_t depth));
IL2CPP_REGISTER_METHOD(0x019A3C70, bool, MoveToAttribute, (AxisStack * __this, String * name, String * URN, int32_t depth));
}
