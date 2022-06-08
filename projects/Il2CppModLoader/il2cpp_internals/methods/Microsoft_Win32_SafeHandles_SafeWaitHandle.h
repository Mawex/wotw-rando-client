#include <interception_macros.h>

namespace app::methods::Microsoft::Win32::SafeHandles::SafeWaitHandle {
IL2CPP_REGISTER_METHOD(0x021722B0, void, __ctor, (SafeWaitHandle * __this, void * existingHandle, bool ownsHandle));
IL2CPP_REGISTER_METHOD(0x023B65E0, bool, ReleaseHandle, (SafeWaitHandle * __this));
}
