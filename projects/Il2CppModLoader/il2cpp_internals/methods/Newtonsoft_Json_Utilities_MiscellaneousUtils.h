#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Utilities::MiscellaneousUtils {
IL2CPP_REGISTER_METHOD(0x0301E210, bool, ValueEquals, (app::Object * obj_a, app::Object * obj_b));
IL2CPP_REGISTER_METHOD(0x0301E580, ArgumentOutOfRangeException *, CreateArgumentOutOfRangeException, (app::String * param_name, app::Object * actual_value, app::String * message));
IL2CPP_REGISTER_METHOD(0x0301E740, String *, ToString, (app::Object * value));
IL2CPP_REGISTER_METHOD(0x0301E820, int32_t, ByteArrayCompare, (app::Byte__Array * a1, app::Byte__Array * a2));
IL2CPP_REGISTER_METHOD(0x0301E8C0, String *, GetPrefix, (app::String * qualified_name));
IL2CPP_REGISTER_METHOD(0x0301E950, String *, GetLocalName, (app::String * qualified_name));
IL2CPP_REGISTER_METHOD(0x0301E9D0, void, GetQualifiedNameParts, (app::String * qualified_name, app::String * * prefix, app::String * * local_name));
IL2CPP_REGISTER_METHOD(0x0301EA80, RegexOptions__Enum, GetRegexOptions, (app::String * options_text));
}
