using namespace app;

namespace app::methods::System::Globalization::TimeSpanParse_TimeSpanTokenizer {
IL2CPP_REGISTER_METHOD(0x001D4590, void, Init, (TimeSpanParse_TimeSpanTokenizer__Boxed * __this, String * input));
IL2CPP_REGISTER_METHOD(0x001D45A0, void, Init, (TimeSpanParse_TimeSpanTokenizer__Boxed * __this, String * input, int32_t startPosition));
IL2CPP_REGISTER_METHOD(0x001D45B0, TimeSpanParse_TimeSpanToken, GetNextToken, (TimeSpanParse_TimeSpanTokenizer__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D45E0, bool, get_EOL, (TimeSpanParse_TimeSpanTokenizer__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D4610, uint16_t, get_NextChar, (TimeSpanParse_TimeSpanTokenizer__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001D4660, uint16_t, get_CurrentChar, (TimeSpanParse_TimeSpanTokenizer__Boxed * __this));
}
