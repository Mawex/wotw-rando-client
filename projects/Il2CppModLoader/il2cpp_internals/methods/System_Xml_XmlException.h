#include <interception_macros.h>

namespace app::methods::System::Xml::XmlException {
IL2CPP_REGISTER_METHOD(0x01DB7C90, void, __ctor, (XmlException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01DB80D0, void, GetObjectData, (XmlException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01DB8220, void, __ctor, (XmlException * __this));
IL2CPP_REGISTER_METHOD(0x01DB8250, void, __ctor, (XmlException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01DB8280, void, __ctor, (XmlException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01DB82B0, void, __ctor, (XmlException * __this, String * message, Exception * innerException, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x01DB82E0, void, __ctor, (XmlException * __this, String * message, Exception * innerException, int32_t lineNumber, int32_t linePosition, String * sourceUri));
IL2CPP_REGISTER_METHOD(0x01DB8550, void, __ctor, (XmlException * __this, String * res, String__Array * args));
IL2CPP_REGISTER_METHOD(0x01DB85D0, void, __ctor, (XmlException * __this, String * res, String * arg));
IL2CPP_REGISTER_METHOD(0x01DB8730, void, __ctor, (XmlException * __this, String * res, String * arg, String * sourceUri));
IL2CPP_REGISTER_METHOD(0x01DB8860, void, __ctor, (XmlException * __this, String * res, String * arg, IXmlLineInfo * lineInfo));
IL2CPP_REGISTER_METHOD(0x01DB8980, void, __ctor, (XmlException * __this, String * res, String__Array * args, IXmlLineInfo * lineInfo));
IL2CPP_REGISTER_METHOD(0x01DB89A0, void, __ctor, (XmlException * __this, String * res, String__Array * args, IXmlLineInfo * lineInfo, String * sourceUri));
IL2CPP_REGISTER_METHOD(0x01DB8AB0, void, __ctor, (XmlException * __this, String * res, String * arg, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x01DB8BE0, void, __ctor, (XmlException * __this, String * res, String * arg, int32_t lineNumber, int32_t linePosition, String * sourceUri));
IL2CPP_REGISTER_METHOD(0x01DB8D20, void, __ctor, (XmlException * __this, String * res, String__Array * args, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x01DB8D50, void, __ctor, (XmlException * __this, String * res, String__Array * args, int32_t lineNumber, int32_t linePosition, String * sourceUri));
IL2CPP_REGISTER_METHOD(0x01DB8D90, void, __ctor, (XmlException * __this, String * res, String__Array * args, Exception * innerException, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x01DB8DC0, void, __ctor, (XmlException * __this, String * res, String__Array * args, Exception * innerException, int32_t lineNumber, int32_t linePosition, String * sourceUri));
IL2CPP_REGISTER_METHOD(0x01DB8E70, String *, FormatUserMessage, (String * message, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x01DB8FB0, String *, CreateMessage, (String * res, String__Array * args, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x01DB9220, String__Array *, BuildCharExceptionArgs, (String * data, int32_t invCharIndex));
IL2CPP_REGISTER_METHOD(0x01DB9280, String__Array *, BuildCharExceptionArgs, (Char__Array * data, int32_t length, int32_t invCharIndex));
IL2CPP_REGISTER_METHOD(0x01DB9300, String__Array *, BuildCharExceptionArgs, (uint16_t invChar, uint16_t nextChar));
IL2CPP_REGISTER_METHOD(0x00736620, int32_t, get_LineNumber, (XmlException * __this));
IL2CPP_REGISTER_METHOD(0x007007F0, int32_t, get_LinePosition, (XmlException * __this));
IL2CPP_REGISTER_METHOD(0x01DB9740, String *, get_Message, (XmlException * __this));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_ResString, (XmlException * __this));
}
