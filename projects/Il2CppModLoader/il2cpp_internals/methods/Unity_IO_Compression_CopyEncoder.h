#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::CopyEncoder {
IL2CPP_REGISTER_METHOD(0x02B71C80, void, GetBlock, (CopyEncoder * __this, DeflateInput * input, OutputBuffer * output, bool isFinal));
IL2CPP_REGISTER_METHOD(0x02B71EC0, void, WriteLenNLen, (CopyEncoder * __this, uint16_t len, OutputBuffer * output));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CopyEncoder * __this));
}
