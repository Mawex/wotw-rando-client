using namespace app;

namespace app::methods::System::Security::Util::Parser {
IL2CPP_REGISTER_METHOD(0x01E21CD0, SecurityElement *, GetTopElement, (Parser * __this));
IL2CPP_REGISTER_METHOD(0x01E21D00, void, GetRequiredSizes, (Parser * __this, TokenizerStream * stream, int32_t * index));
IL2CPP_REGISTER_METHODINFO(0x04794370, Parser_GetRequiredSizes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E22510, int32_t, DetermineFormat, (Parser * __this, TokenizerStream * stream));
IL2CPP_REGISTER_METHODINFO(0x047364A8, Parser_DetermineFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E227D0, void, ParseContents, (Parser * __this));
IL2CPP_REGISTER_METHODINFO(0x0472E460, Parser_ParseContents__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E22E80, void, __ctor, (Parser * __this, Tokenizer * t));
IL2CPP_REGISTER_METHOD(0x01E22FB0, void, __ctor, (Parser * __this, String * input));
}
