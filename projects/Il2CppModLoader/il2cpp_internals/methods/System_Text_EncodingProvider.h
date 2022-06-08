#include <interception_macros.h>

namespace app::methods::System::Text::EncodingProvider {
IL2CPP_REGISTER_METHOD(0x02457590, Encoding *, GetEncoding, (EncodingProvider * __this, String * name, EncoderFallback * encoderFallback, DecoderFallback * decoderFallback));
IL2CPP_REGISTER_METHOD(0x02457710, Encoding *, GetEncoding, (EncodingProvider * __this, int32_t codepage, EncoderFallback * encoderFallback, DecoderFallback * decoderFallback));
IL2CPP_REGISTER_METHOD(0x02457890, Encoding *, GetEncodingFromProvider, (int32_t codepage));
IL2CPP_REGISTER_METHOD(0x024579F0, Encoding *, GetEncodingFromProvider, (String * encodingName));
IL2CPP_REGISTER_METHOD(0x02457B50, Encoding *, GetEncodingFromProvider, (int32_t codepage, EncoderFallback * enc, DecoderFallback * dec));
IL2CPP_REGISTER_METHOD(0x02457CD0, Encoding *, GetEncodingFromProvider, (String * encodingName, EncoderFallback * enc, DecoderFallback * dec));
IL2CPP_REGISTER_METHOD(0x02457E50, void, __cctor, ());
}
