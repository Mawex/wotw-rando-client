#include <interception_macros.h>

namespace app::methods::System::IPv4AddressHelper {
IL2CPP_REGISTER_METHOD(0x0200AE30, String *, ParseCanonicalName, (app::String * str, int32_t start, int32_t end, app::bool * is_loopback));
IL2CPP_REGISTER_METHOD(0x0200B200, int32_t, ParseHostNumber, (app::String * str, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x0200B2D0, bool, IsValid, (app::uint16_t * name, int32_t start, app::int32_t * end, bool allow_i_pv6, bool not_implicit_file, bool unknown_scheme));
IL2CPP_REGISTER_METHOD(0x0200B480, bool, IsValidCanonical, (app::uint16_t * name, int32_t start, app::int32_t * end, bool allow_i_pv6, bool not_implicit_file));
IL2CPP_REGISTER_METHOD(0x0200B5F0, int64_t, ParseNonCanonical, (app::uint16_t * name, int32_t start, app::int32_t * end, bool not_implicit_file));
IL2CPP_REGISTER_METHOD(0x0200BA40, bool, Parse, (app::String * name, app::uint8_t * numbers, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x0200BAB0, bool, ParseCanonical, (app::String * name, app::uint8_t * numbers, int32_t start, int32_t end));
}
