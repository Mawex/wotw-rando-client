using namespace app;

namespace app::methods::System::DomainNameHelper {
IL2CPP_REGISTER_METHOD(0x020056B0, String *, ParseCanonicalName, (String * str, int32_t start, int32_t end, bool * loopback));
IL2CPP_REGISTER_METHOD(0x020058A0, bool, IsValid, (uint16_t * name, uint16_t pos, int32_t * returnedEnd, bool * notCanonical, bool notImplicitFile));
IL2CPP_REGISTER_METHOD(0x020059F0, bool, IsValidByIri, (uint16_t * name, uint16_t pos, int32_t * returnedEnd, bool * notCanonical, bool notImplicitFile));
IL2CPP_REGISTER_METHOD(0x02005BD0, String *, IdnEquivalent, (uint16_t * hostname, int32_t start, int32_t end, bool * allAscii, bool * atLeastOneValidIdn));
IL2CPP_REGISTER_METHOD(0x02005F00, String *, IdnEquivalent, (uint16_t * hostname, int32_t start, int32_t end, bool * allAscii, String * * bidiStrippedHost));
IL2CPP_REGISTER_METHODINFO(0x04739188, DomainNameHelper_IdnEquivalent_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02006160, bool, IsIdnAce, (String * input, int32_t index));
IL2CPP_REGISTER_METHOD(0x020061E0, bool, IsIdnAce, (uint16_t * input, int32_t index));
IL2CPP_REGISTER_METHOD(0x02006210, String *, UnicodeEquivalent, (String * idnHost, uint16_t * hostname, int32_t start, int32_t end));
IL2CPP_REGISTER_METHOD(0x020063C0, String *, UnicodeEquivalent, (uint16_t * hostname, int32_t start, int32_t end, bool * allAscii, bool * atLeastOneValidIdn));
IL2CPP_REGISTER_METHODINFO(0x04744640, DomainNameHelper_UnicodeEquivalent_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02006890, bool, IsASCIILetterOrDigit, (uint16_t character, bool * notCanonical));
IL2CPP_REGISTER_METHOD(0x020068C0, bool, IsValidDomainLabelCharacter, (uint16_t character, bool * notCanonical));
}
