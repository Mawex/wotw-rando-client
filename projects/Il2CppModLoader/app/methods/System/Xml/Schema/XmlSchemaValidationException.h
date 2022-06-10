#pragma once
#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaValidationException {
    IL2CPP_REGISTER_METHOD(0x0191EC50, void, ctor_1, (app::XmlSchemaValidationException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0191EC70, void, GetObjectData, (app::XmlSchemaValidationException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0191EC90, void, ctor_2, (app::XmlSchemaValidationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191ECC0, void, ctor_3, (app::XmlSchemaValidationException * this_ptr, app::String * res, app::String * arg, app::String * source_uri, int32_t line_number, int32_t line_position))
    IL2CPP_REGISTER_METHOD(0x0191EE30, void, ctor_4, (app::XmlSchemaValidationException * this_ptr, app::String * res, app::String__Array * args, app::String * source_uri, int32_t line_number, int32_t line_position))
    IL2CPP_REGISTER_METHOD(0x0191EEC0, void, ctor_5, (app::XmlSchemaValidationException * this_ptr, app::String * res, app::String__Array * args, app::Exception * inner_exception, app::String * source_uri, int32_t line_number, int32_t line_position))
}
