#include <interception_macros.h>

namespace app::methods::System::IPv6AddressHelper {
IL2CPP_REGISTER_METHOD(0x0200BB50, String *, ParseCanonicalName, (String * str, int32_t start, bool * isLoopback, String * * scopeId));
IL2CPP_REGISTER_METHOD(0x0200BC50, String *, CreateCanonicalName, (uint16_t * numbers));
IL2CPP_REGISTER_METHOD(0x0200C580, KeyValuePair_2_System_Int32_System_Int32_, FindCompressionRange, (uint16_t * numbers));
IL2CPP_REGISTER_METHOD(0x0200C660, bool, ShouldHaveIpv4Embedded, (uint16_t * numbers));
IL2CPP_REGISTER_METHOD(0x0200C6D0, bool, InternalIsValid, (uint16_t * name, int32_t start, int32_t * end, bool validateStrictAddress));
IL2CPP_REGISTER_METHOD(0x0200CA30, bool, IsValid, (uint16_t * name, int32_t start, int32_t * end));
IL2CPP_REGISTER_METHOD(0x0200CA50, bool, IsValidStrict, (uint16_t * name, int32_t start, int32_t * end));
IL2CPP_REGISTER_METHOD(0x0200CA70, bool, Parse, (String * address, uint16_t * numbers, int32_t start, String * * scopeId));
}
