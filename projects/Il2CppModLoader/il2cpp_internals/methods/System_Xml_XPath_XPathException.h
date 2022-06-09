#include <interception_macros.h>

namespace app::methods::System_Xml_XPath::XPathException {
IL2CPP_REGISTER_METHOD(0x01954E60, void, __ctor_1, (app::XPathException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01955150, void, GetObjectData, (app::XPathException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01955250, void, __ctor_2, (app::XPathException * this_ptr));
IL2CPP_REGISTER_METHOD(0x019553E0, void, __ctor_3, (app::XPathException * this_ptr, app::String * message, app::Exception * inner_exception));
IL2CPP_REGISTER_METHOD(0x01955520, XPathException *, Create_1, (app::String * res));
IL2CPP_REGISTER_METHOD(0x01955690, XPathException *, Create_2, (app::String * res, app::String * arg));
IL2CPP_REGISTER_METHOD(0x01955880, XPathException *, Create_3, (app::String * res, app::String * arg, app::String * arg2));
IL2CPP_REGISTER_METHOD(0x01955AC0, void, __ctor_4, (app::XPathException * this_ptr, app::String * res, app::String__Array * args));
IL2CPP_REGISTER_METHOD(0x01955B20, void, __ctor_5, (app::XPathException * this_ptr, app::String * res, app::String__Array * args, app::Exception * inner));
IL2CPP_REGISTER_METHOD(0x01955B90, String *, CreateMessage, (app::String * res, app::String__Array * args));
IL2CPP_REGISTER_METHOD(0x01955C70, String *, get_Message, (app::XPathException * this_ptr));
}
