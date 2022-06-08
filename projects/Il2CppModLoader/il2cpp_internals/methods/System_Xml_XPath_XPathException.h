#include <interception_macros.h>

namespace app::methods::System::Xml::XPath::XPathException {
IL2CPP_REGISTER_METHOD(0x01954E60, void, __ctor, (XPathException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01955150, void, GetObjectData, (XPathException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01955250, void, __ctor, (XPathException * __this));
IL2CPP_REGISTER_METHOD(0x019553E0, void, __ctor, (XPathException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01955520, XPathException *, Create, (String * res));
IL2CPP_REGISTER_METHOD(0x01955690, XPathException *, Create, (String * res, String * arg));
IL2CPP_REGISTER_METHOD(0x01955880, XPathException *, Create, (String * res, String * arg, String * arg2));
IL2CPP_REGISTER_METHOD(0x01955AC0, void, __ctor, (XPathException * __this, String * res, String__Array * args));
IL2CPP_REGISTER_METHOD(0x01955B20, void, __ctor, (XPathException * __this, String * res, String__Array * args, Exception * inner));
IL2CPP_REGISTER_METHOD(0x01955B90, String *, CreateMessage, (String * res, String__Array * args));
IL2CPP_REGISTER_METHOD(0x01955C70, String *, get_Message, (XPathException * __this));
}
