#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::AxisElement {
IL2CPP_REGISTER_METHOD(0x002FA280, DoubleLinkAxis *, get_CurNode, (AxisElement * __this));
IL2CPP_REGISTER_METHOD(0x019A2F80, void, __ctor, (AxisElement * __this, DoubleLinkAxis * node, int32_t depth));
IL2CPP_REGISTER_METHOD(0x019A2FA0, void, SetDepth, (AxisElement * __this, int32_t depth));
IL2CPP_REGISTER_METHOD(0x019A2FB0, void, MoveToParent, (AxisElement * __this, int32_t depth, ForwardAxis * parent));
IL2CPP_REGISTER_METHOD(0x019A30D0, bool, MoveToChild, (AxisElement * __this, String * name, String * URN, int32_t depth, ForwardAxis * parent));
}
