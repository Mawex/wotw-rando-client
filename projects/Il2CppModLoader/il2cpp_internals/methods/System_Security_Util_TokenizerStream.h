using namespace app;

namespace app::methods::System::Security::Util::TokenizerStream {
IL2CPP_REGISTER_METHOD(0x01E24D80, void, __ctor, (TokenizerStream * __this));
IL2CPP_REGISTER_METHOD(0x01E24FB0, void, AddToken, (TokenizerStream * __this, int16_t token));
IL2CPP_REGISTER_METHOD(0x01E251B0, void, AddString, (TokenizerStream * __this, String * str));
IL2CPP_REGISTER_METHOD(0x01E253E0, void, Reset, (TokenizerStream * __this));
IL2CPP_REGISTER_METHOD(0x01E25400, int16_t, GetNextFullToken, (TokenizerStream * __this));
IL2CPP_REGISTER_METHOD(0x01E25490, int16_t, GetNextToken, (TokenizerStream * __this));
IL2CPP_REGISTER_METHOD(0x01E254B0, String *, GetNextString, (TokenizerStream * __this));
IL2CPP_REGISTER_METHOD(0x01E25540, void, ThrowAwayNextString, (TokenizerStream * __this));
IL2CPP_REGISTER_METHOD(0x01E25550, void, TagLastToken, (TokenizerStream * __this, int16_t tag));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetTokenCount, (TokenizerStream * __this));
IL2CPP_REGISTER_METHOD(0x01E25610, void, GoToPosition, (TokenizerStream * __this, int32_t position));
}
