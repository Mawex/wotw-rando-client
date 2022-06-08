using namespace app;

namespace app::methods::System::Xml::CharEntityEncoderFallback {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CharEntityEncoderFallback * __this));
IL2CPP_REGISTER_METHOD(0x021E80E0, EncoderFallbackBuffer *, CreateFallbackBuffer, (CharEntityEncoderFallback * __this));
IL2CPP_REGISTER_METHOD(0x00ADC4A0, int32_t, get_MaxCharCount, (CharEntityEncoderFallback * __this));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_StartOffset, (CharEntityEncoderFallback * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x021E82B0, void, Reset, (CharEntityEncoderFallback * __this, Int32__Array * textContentMarks, int32_t endMarkPos));
IL2CPP_REGISTER_METHOD(0x021E82C0, bool, CanReplaceAt, (CharEntityEncoderFallback * __this, int32_t index));
}
