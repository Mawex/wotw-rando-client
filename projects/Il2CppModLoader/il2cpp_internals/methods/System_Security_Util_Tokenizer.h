#include <interception_macros.h>

namespace app::methods::System::Security::Util::Tokenizer {
IL2CPP_REGISTER_METHOD(0x01E231C0, void, BasicInitialization, (Tokenizer * __this));
IL2CPP_REGISTER_METHOD(0x01E23290, void, Recycle, (Tokenizer * __this));
IL2CPP_REGISTER_METHOD(0x01E23330, void, __ctor, (Tokenizer * __this, String * input));
IL2CPP_REGISTER_METHOD(0x01E23420, void, ChangeFormat, (Tokenizer * __this, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x01E23880, void, GetTokens, (Tokenizer * __this, TokenizerStream * stream, int32_t maxNum, bool endAfterKet));
IL2CPP_REGISTER_METHODINFO(0x04788400, Tokenizer_GetTokens__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E245A0, String *, GetStringToken, (Tokenizer * __this));
}
