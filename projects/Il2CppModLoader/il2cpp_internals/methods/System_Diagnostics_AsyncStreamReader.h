#include <interception_macros.h>

namespace app::methods::System::Diagnostics::AsyncStreamReader {
IL2CPP_REGISTER_METHOD(0x01A8DC40, void, Close, (AsyncStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x01FFE440, void, IDisposable_Dispose, (AsyncStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x01FFE4F0, void, Dispose, (AsyncStreamReader * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x00DC8A40, void, CancelOperation, (AsyncStreamReader * __this));
IL2CPP_REGISTER_METHOD(0x01FFE620, void, WaitUtilEOF, (AsyncStreamReader * __this));
}
