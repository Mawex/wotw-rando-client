using namespace app;

namespace app::methods::System::Xml::Schema::XmlSchemaException {
IL2CPP_REGISTER_METHOD(0x01CA7F70, void, __ctor, (XmlSchemaException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x01CA8360, void, GetObjectData, (XmlSchemaException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0191EC90, void, __ctor, (XmlSchemaException * __this));
IL2CPP_REGISTER_METHOD(0x01CA84B0, void, __ctor, (XmlSchemaException * __this, String * message));
IL2CPP_REGISTER_METHOD(0x01CA84D0, void, __ctor, (XmlSchemaException * __this, String * message, Exception * innerException));
IL2CPP_REGISTER_METHOD(0x01CA84F0, void, __ctor, (XmlSchemaException * __this, String * message, Exception * innerException, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x01CA8680, void, __ctor, (XmlSchemaException * __this, String * res, String__Array * args));
IL2CPP_REGISTER_METHOD(0x01CA8700, void, __ctor, (XmlSchemaException * __this, String * res, String * arg));
IL2CPP_REGISTER_METHOD(0x01CA8860, void, __ctor, (XmlSchemaException * __this, String * res, String * arg, String * sourceUri, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x01CA89D0, void, __ctor, (XmlSchemaException * __this, String * res, String * sourceUri, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x0191EE30, void, __ctor, (XmlSchemaException * __this, String * res, String__Array * args, String * sourceUri, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x01CA8A60, void, __ctor, (XmlSchemaException * __this, String * res, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x01CA8A80, void, __ctor, (XmlSchemaException * __this, String * res, String * arg, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x01CA8BA0, void, __ctor, (XmlSchemaException * __this, String * res, String__Array * args, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x01CA8C60, void, __ctor, (XmlSchemaException * __this, String * res, String__Array * args, Exception * innerException, String * sourceUri, int32_t lineNumber, int32_t linePosition, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x01CA8D00, String *, CreateMessage, (String * res, String__Array * args));
IL2CPP_REGISTER_METHOD(0x002FBC20, String *, get_GetRes, (XmlSchemaException * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, String__Array *, get_Args, (XmlSchemaException * __this));
IL2CPP_REGISTER_METHOD(0x002FBC60, String *, get_SourceUri, (XmlSchemaException * __this));
IL2CPP_REGISTER_METHOD(0x010F4B70, int32_t, get_LineNumber, (XmlSchemaException * __this));
IL2CPP_REGISTER_METHOD(0x0057A5A0, int32_t, get_LinePosition, (XmlSchemaException * __this));
IL2CPP_REGISTER_METHOD(0x002FBCA0, XmlSchemaObject *, get_SourceSchemaObject, (XmlSchemaException * __this));
IL2CPP_REGISTER_METHOD(0x01CA8DC0, void, SetSource, (XmlSchemaException * __this, String * sourceUri, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x002FBCB0, void, SetSchemaObject, (XmlSchemaException * __this, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x01CA8DE0, void, SetSource, (XmlSchemaException * __this, XmlSchemaObject * source));
IL2CPP_REGISTER_METHOD(0x01CA8E20, String *, get_Message, (XmlSchemaException * __this));
}
