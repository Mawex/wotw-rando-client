#include <interception_macros.h>

namespace app::methods::Microsoft::Win32::SafeHandles::SafeProcessHandle {
IL2CPP_REGISTER_METHOD(0x02172280, void, __ctor, (SafeProcessHandle * __this, void * handle));
IL2CPP_REGISTER_METHOD(0x021722B0, void, __ctor, (SafeProcessHandle * __this, void * existingHandle, bool ownsHandle));
IL2CPP_REGISTER_METHOD(0x021722E0, bool, ReleaseHandle, (SafeProcessHandle * __this));
IL2CPP_REGISTER_METHOD(0x02172300, void, __cctor, ());
}
