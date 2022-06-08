#include <interception_macros.h>

namespace app::methods::System::Net::HttpListenerRequestUriBuilder {
IL2CPP_REGISTER_METHOD(0x01D4A6A0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01D4A9D0, void, __ctor, (HttpListenerRequestUriBuilder * __this, String * rawUri, String * cookedUriScheme, String * cookedUriHost, String * cookedUriPath, String * cookedUriQuery));
IL2CPP_REGISTER_METHOD(0x01D4AAC0, Uri *, GetRequestUri, (String * rawUri, String * cookedUriScheme, String * cookedUriHost, String * cookedUriPath, String * cookedUriQuery));
IL2CPP_REGISTER_METHOD(0x01D4ADD0, Uri *, Build, (HttpListenerRequestUriBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01D4AF10, void, BuildRequestUriUsingCookedPath, (HttpListenerRequestUriBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01D4B330, void, BuildRequestUriUsingRawPath, (HttpListenerRequestUriBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01D4B890, Encoding *, GetEncoding, (HttpListenerRequestUriBuilder_EncodingType__Enum type));
IL2CPP_REGISTER_METHOD(0x01D4B970, HttpListenerRequestUriBuilder_ParsingResult__Enum, BuildRequestUriUsingRawPath, (HttpListenerRequestUriBuilder * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01D4BE80, HttpListenerRequestUriBuilder_ParsingResult__Enum, ParseRawPath, (HttpListenerRequestUriBuilder * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01D4C030, bool, AppendUnicodeCodePointValuePercentEncoded, (HttpListenerRequestUriBuilder * __this, String * codePoint));
IL2CPP_REGISTER_METHOD(0x01D4C370, bool, AddPercentEncodedOctetToRawOctetsList, (HttpListenerRequestUriBuilder * __this, Encoding * encoding, String * escapedCharacter));
IL2CPP_REGISTER_METHOD(0x01D4C570, bool, EmptyDecodeAndAppendRawOctetsList, (HttpListenerRequestUriBuilder * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01D4C9F0, void, AppendOctetsPercentEncoded, (StringBuilder * target, IEnumerable_1_System_Byte_ * octets));
IL2CPP_REGISTER_METHOD(0x01D4CBE0, String *, GetOctetsAsString, (IEnumerable_1_System_Byte_ * octets));
IL2CPP_REGISTER_METHOD(0x01D4CEF0, String *, GetPath, (String * uriString));
IL2CPP_REGISTER_METHOD(0x01D4D220, String *, AddSlashToAsteriskOnlyPath, (String * path));
IL2CPP_REGISTER_METHOD(0x01D4D2D0, void, LogWarning, (HttpListenerRequestUriBuilder * __this, String * methodName, String * message, Object__Array * args));
}
