#include <interception_macros.h>

namespace app::methods::Unity::IO::Compression::DeflaterManaged {
IL2CPP_REGISTER_METHOD(0x02B756F0, void, __ctor, (DeflaterManaged * __this));
IL2CPP_REGISTER_METHOD(0x02B75A80, bool, NeedsInput, (DeflaterManaged * __this));
IL2CPP_REGISTER_METHOD(0x02B75B10, bool, IDeflater_NeedsInput, (DeflaterManaged * __this));
IL2CPP_REGISTER_METHOD(0x02B75B60, void, IDeflater_SetInput, (DeflaterManaged * __this, Byte__Array * inputBuffer, int32_t startIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x02B75BE0, int32_t, IDeflater_GetDeflateOutput, (DeflaterManaged * __this, Byte__Array * outputBuffer));
IL2CPP_REGISTER_METHOD(0x02B760D0, bool, IDeflater_Finish, (DeflaterManaged * __this, Byte__Array * outputBuffer, int32_t * bytesRead));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (DeflaterManaged * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (DeflaterManaged * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02B76190, bool, UseCompressed, (DeflaterManaged * __this, double ratio));
IL2CPP_REGISTER_METHOD(0x02B761A0, void, FlushInputWindows, (DeflaterManaged * __this));
IL2CPP_REGISTER_METHOD(0x02B761D0, void, WriteFinal, (DeflaterManaged * __this));
}
