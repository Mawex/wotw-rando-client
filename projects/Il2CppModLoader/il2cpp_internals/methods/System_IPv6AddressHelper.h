#include <interception_macros.h>

namespace app::methods::System::IPv6AddressHelper {
IL2CPP_REGISTER_METHOD(0x0200BB50, String *, ParseCanonicalName, (app::String * str, int32_t start, app::bool * is_loopback, app::String * * scope_id));
IL2CPP_REGISTER_METHOD(0x0200BC50, String *, CreateCanonicalName, (app::uint16_t * numbers));
IL2CPP_REGISTER_METHOD(0x0200C580, KeyValuePair_2_System_Int32_System_Int32_, FindCompressionRange, (app::uint16_t * numbers));
IL2CPP_REGISTER_METHOD(0x0200C660, bool, ShouldHaveIpv4Embedded, (app::uint16_t * numbers));
IL2CPP_REGISTER_METHOD(0x0200C6D0, bool, InternalIsValid, (app::uint16_t * name, int32_t start, app::int32_t * end, bool validate_strict_address));
IL2CPP_REGISTER_METHOD(0x0200CA30, bool, IsValid, (app::uint16_t * name, int32_t start, app::int32_t * end));
IL2CPP_REGISTER_METHOD(0x0200CA50, bool, IsValidStrict, (app::uint16_t * name, int32_t start, app::int32_t * end));
IL2CPP_REGISTER_METHOD(0x0200CA70, bool, Parse, (app::String * address, app::uint16_t * numbers, int32_t start, app::String * * scope_id));
}
