#include <interception_macros.h>

namespace app::methods::System::DomainNameHelper {
IL2CPP_REGISTER_METHOD(0x020056B0, String *, ParseCanonicalName, (app::String * str, int32_t start, int32_t end, app::bool * loopback));
IL2CPP_REGISTER_METHOD(0x020058A0, bool, IsValid, (app::uint16_t * name, uint16_t pos, app::int32_t * returned_end, app::bool * not_canonical, bool not_implicit_file));
IL2CPP_REGISTER_METHOD(0x020059F0, bool, IsValidByIri, (app::uint16_t * name, uint16_t pos, app::int32_t * returned_end, app::bool * not_canonical, bool not_implicit_file));
IL2CPP_REGISTER_METHOD(0x02005BD0, String *, IdnEquivalent_1, (app::uint16_t * hostname, int32_t start, int32_t end, app::bool * all_ascii, app::bool * at_least_one_valid_idn));
IL2CPP_REGISTER_METHOD(0x02005F00, String *, IdnEquivalent_2, (app::uint16_t * hostname, int32_t start, int32_t end, app::bool * all_ascii, app::String * * bidi_stripped_host));
IL2CPP_REGISTER_METHODINFO(0x04739188, DomainNameHelper_IdnEquivalent_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02006160, bool, IsIdnAce_1, (app::String * input, int32_t index));
IL2CPP_REGISTER_METHOD(0x020061E0, bool, IsIdnAce_2, (app::uint16_t * input, int32_t index));
IL2CPP_REGISTER_METHOD(0x02006210, String *, UnicodeEquivalent_1, (app::String * idn_host, app::uint16_t * hostname, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x020063C0, String *, UnicodeEquivalent_2, (app::uint16_t * hostname, int32_t start, int32_t end, app::bool * all_ascii, app::bool * at_least_one_valid_idn));
IL2CPP_REGISTER_METHODINFO(0x04744640, DomainNameHelper_UnicodeEquivalent_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02006890, bool, IsASCIILetterOrDigit, (uint16_t character, app::bool * not_canonical));
IL2CPP_REGISTER_METHOD(0x020068C0, bool, IsValidDomainLabelCharacter, (uint16_t character, app::bool * not_canonical));
}
