#include <interception_macros.h>

namespace app::methods::System::Net::WebUtility {
IL2CPP_REGISTER_METHOD(0x021B8A50, String *, HtmlEncode, (String * value));
IL2CPP_REGISTER_METHOD(0x021B8C70, void, HtmlEncode, (String * value, TextWriter * output));
IL2CPP_REGISTER_METHODINFO(0x047357C0, WebUtility_HtmlEncode_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B9060, String *, HtmlDecode, (String * value));
IL2CPP_REGISTER_METHOD(0x021B9270, void, HtmlDecode, (String * value, TextWriter * output));
IL2CPP_REGISTER_METHODINFO(0x04741B48, WebUtility_HtmlDecode_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021B96F0, int32_t, IndexOfHtmlEncodingChars, (String * s, int32_t startPos));
IL2CPP_REGISTER_METHOD(0x021B9880, UnicodeDecodingConformance__Enum, get_HtmlDecodeConformance, ());
IL2CPP_REGISTER_METHOD(0x021B99F0, UnicodeEncodingConformance__Enum, get_HtmlEncodeConformance, ());
IL2CPP_REGISTER_METHOD(0x021B9B60, Byte__Array *, UrlEncode, (Byte__Array * bytes, int32_t offset, int32_t count, bool alwaysCreateNewReturnValue));
IL2CPP_REGISTER_METHOD(0x021B9CF0, Byte__Array *, UrlEncode, (Byte__Array * bytes, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x021BA090, String *, UrlEncode, (String * value));
IL2CPP_REGISTER_METHOD(0x021BA240, Byte__Array *, UrlEncodeToBytes, (Byte__Array * value, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x021BA310, String *, UrlDecodeInternal, (String * value, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x021BA700, Byte__Array *, UrlDecodeInternal, (Byte__Array * bytes, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x021BA990, String *, UrlDecode, (String * encodedValue));
IL2CPP_REGISTER_METHOD(0x021BAA60, Byte__Array *, UrlDecodeToBytes, (Byte__Array * encodedValue, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHOD(0x021BAB20, void, ConvertSmpToUtf16, (uint32_t smpChar, uint16_t * leadingSurrogate, uint16_t * trailingSurrogate));
IL2CPP_REGISTER_METHOD(0x021BAB60, int32_t, GetNextUnicodeScalarValueFromUtf16Surrogate, (uint16_t * * pch, int32_t * charsRemaining));
IL2CPP_REGISTER_METHOD(0x021BAC60, int32_t, HexToInt, (uint16_t h));
IL2CPP_REGISTER_METHOD(0x021BACA0, uint16_t, IntToHex, (int32_t n));
IL2CPP_REGISTER_METHOD(0x021BACB0, bool, IsUrlSafeChar, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x021BAD30, bool, ValidateUrlEncodingParameters, (Byte__Array * bytes, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04758880, WebUtility_ValidateUrlEncodingParameters__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BAE80, bool, StringRequiresHtmlDecoding, (String * s));
IL2CPP_REGISTER_METHOD(0x021BAFE0, void, __cctor, ());
}
