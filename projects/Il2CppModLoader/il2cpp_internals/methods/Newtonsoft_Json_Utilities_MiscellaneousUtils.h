#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::MiscellaneousUtils {
IL2CPP_REGISTER_METHOD(0x0301E210, bool, ValueEquals, (Object * objA, Object * objB));
IL2CPP_REGISTER_METHOD(0x0301E580, ArgumentOutOfRangeException *, CreateArgumentOutOfRangeException, (String * paramName, Object * actualValue, String * message));
IL2CPP_REGISTER_METHOD(0x0301E740, String *, ToString, (Object * value));
IL2CPP_REGISTER_METHOD(0x0301E820, int32_t, ByteArrayCompare, (Byte__Array * a1, Byte__Array * a2));
IL2CPP_REGISTER_METHOD(0x0301E8C0, String *, GetPrefix, (String * qualifiedName));
IL2CPP_REGISTER_METHOD(0x0301E950, String *, GetLocalName, (String * qualifiedName));
IL2CPP_REGISTER_METHOD(0x0301E9D0, void, GetQualifiedNameParts, (String * qualifiedName, String * * prefix, String * * localName));
IL2CPP_REGISTER_METHOD(0x0301EA80, RegexOptions__Enum, GetRegexOptions, (String * optionsText));
}
