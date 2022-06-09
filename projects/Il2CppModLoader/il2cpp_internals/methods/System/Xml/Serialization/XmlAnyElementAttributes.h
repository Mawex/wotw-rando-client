#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlAnyElementAttributes {
    IL2CPP_REGISTER_METHOD(0x01C99DB0, app::XmlAnyElementAttribute *, get_Item, (app::XmlAnyElementAttributes * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x01C99EA0, int32_t, Add, (app::XmlAnyElementAttributes * this_ptr, app::XmlAnyElementAttribute * attribute));
    IL2CPP_REGISTER_METHOD(0x01C99F40, void, AddKeyHash, (app::XmlAnyElementAttributes * this_ptr, app::StringBuilder * sb));
    IL2CPP_REGISTER_METHOD(0x01C9A420, int32_t, get_Order, (app::XmlAnyElementAttributes * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, __ctor, (app::XmlAnyElementAttributes * this_ptr));
}
