using namespace app;

namespace app::methods::System::IriHelper {
IL2CPP_REGISTER_METHOD(0x0200D2B0, bool, CheckIriUnicodeRange, (uint16_t unicode, bool isQuery));
IL2CPP_REGISTER_METHOD(0x0200D320, bool, CheckIriUnicodeRange, (uint16_t highSurr, uint16_t lowSurr, bool * surrogatePair, bool isQuery));
IL2CPP_REGISTER_METHOD(0x0200DBB0, bool, CheckIsReserved, (uint16_t ch, UriComponents__Enum component));
IL2CPP_REGISTER_METHOD(0x0200DD90, String *, EscapeUnescapeIri, (uint16_t * pInput, int32_t start, int32_t end, UriComponents__Enum component));
IL2CPP_REGISTER_METHODINFO(0x04732F18, IriHelper_EscapeUnescapeIri__MethodInfo);
}
