#include <interception_macros.h>

namespace app::methods::System::IPv4AddressHelper {
IL2CPP_REGISTER_METHOD(0x0200AE30, String *, ParseCanonicalName, (String * str, int32_t start, int32_t end, bool * isLoopback));
IL2CPP_REGISTER_METHOD(0x0200B200, int32_t, ParseHostNumber, (String * str, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x0200B2D0, bool, IsValid, (uint16_t * name, int32_t start, int32_t * end, bool allowIPv6, bool notImplicitFile, bool unknownScheme));
IL2CPP_REGISTER_METHOD(0x0200B480, bool, IsValidCanonical, (uint16_t * name, int32_t start, int32_t * end, bool allowIPv6, bool notImplicitFile));
IL2CPP_REGISTER_METHOD(0x0200B5F0, int64_t, ParseNonCanonical, (uint16_t * name, int32_t start, int32_t * end, bool notImplicitFile));
IL2CPP_REGISTER_METHOD(0x0200BA40, bool, Parse, (String * name, uint8_t * numbers, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x0200BAB0, bool, ParseCanonical, (String * name, uint8_t * numbers, int32_t start, int32_t end));
}
