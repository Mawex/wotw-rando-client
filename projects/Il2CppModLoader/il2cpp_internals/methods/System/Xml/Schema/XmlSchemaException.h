#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaException {
    IL2CPP_REGISTER_METHOD(0x01CA7F70, void, __ctor_1, (app::XmlSchemaException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x01CA8360, void, GetObjectData, (app::XmlSchemaException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x0191EC90, void, __ctor_2, (app::XmlSchemaException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CA84B0, void, __ctor_3, (app::XmlSchemaException * this_ptr, app::String * message));
    IL2CPP_REGISTER_METHOD(0x01CA84D0, void, __ctor_4, (app::XmlSchemaException * this_ptr, app::String * message, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x01CA84F0, void, __ctor_5, (app::XmlSchemaException * this_ptr, app::String * message, app::Exception * inner_exception, int32_t line_number, int32_t line_position));
    IL2CPP_REGISTER_METHOD(0x01CA8680, void, __ctor_6, (app::XmlSchemaException * this_ptr, app::String * res, app::String__Array * args));
    IL2CPP_REGISTER_METHOD(0x01CA8700, void, __ctor_7, (app::XmlSchemaException * this_ptr, app::String * res, app::String * arg));
    IL2CPP_REGISTER_METHOD(0x01CA8860, void, __ctor_8, (app::XmlSchemaException * this_ptr, app::String * res, app::String * arg, app::String * source_uri, int32_t line_number, int32_t line_position));
    IL2CPP_REGISTER_METHOD(0x01CA89D0, void, __ctor_9, (app::XmlSchemaException * this_ptr, app::String * res, app::String * source_uri, int32_t line_number, int32_t line_position));
    IL2CPP_REGISTER_METHOD(0x0191EE30, void, __ctor_10, (app::XmlSchemaException * this_ptr, app::String * res, app::String__Array * args, app::String * source_uri, int32_t line_number, int32_t line_position));
    IL2CPP_REGISTER_METHOD(0x01CA8A60, void, __ctor_11, (app::XmlSchemaException * this_ptr, app::String * res, app::XmlSchemaObject * source));
    IL2CPP_REGISTER_METHOD(0x01CA8A80, void, __ctor_12, (app::XmlSchemaException * this_ptr, app::String * res, app::String * arg, app::XmlSchemaObject * source));
    IL2CPP_REGISTER_METHOD(0x01CA8BA0, void, __ctor_13, (app::XmlSchemaException * this_ptr, app::String * res, app::String__Array * args, app::XmlSchemaObject * source));
    IL2CPP_REGISTER_METHOD(0x01CA8C60, void, __ctor_14, (app::XmlSchemaException * this_ptr, app::String * res, app::String__Array * args, app::Exception * inner_exception, app::String * source_uri, int32_t line_number, int32_t line_position, app::XmlSchemaObject * source));
    IL2CPP_REGISTER_METHOD(0x01CA8D00, app::String *, CreateMessage, (app::String * res, app::String__Array * args));
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String *, get_GetRes, (app::XmlSchemaException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String__Array *, get_Args, (app::XmlSchemaException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::String *, get_SourceUri, (app::XmlSchemaException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x010F4B70, int32_t, get_LineNumber, (app::XmlSchemaException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0057A5A0, int32_t, get_LinePosition, (app::XmlSchemaException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::XmlSchemaObject *, get_SourceSchemaObject, (app::XmlSchemaException * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01CA8DC0, void, SetSource_1, (app::XmlSchemaException * this_ptr, app::String * source_uri, int32_t line_number, int32_t line_position));
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, SetSchemaObject, (app::XmlSchemaException * this_ptr, app::XmlSchemaObject * source));
    IL2CPP_REGISTER_METHOD(0x01CA8DE0, void, SetSource_2, (app::XmlSchemaException * this_ptr, app::XmlSchemaObject * source));
    IL2CPP_REGISTER_METHOD(0x01CA8E20, app::String *, get_Message, (app::XmlSchemaException * this_ptr));
}
