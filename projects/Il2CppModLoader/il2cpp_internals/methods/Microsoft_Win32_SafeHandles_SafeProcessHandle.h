#include <interception_macros.h>

namespace app::methods::Microsoft_Win32_SafeHandles::SafeProcessHandle {
    IL2CPP_REGISTER_METHOD(0x02172280, void, __ctor_1, (app::SafeProcessHandle * this_ptr, void * handle));
    IL2CPP_REGISTER_METHOD(0x021722B0, void, __ctor_2, (app::SafeProcessHandle * this_ptr, void * existing_handle, bool owns_handle));
    IL2CPP_REGISTER_METHOD(0x021722E0, bool, ReleaseHandle, (app::SafeProcessHandle * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02172300, void, __cctor, ());
}
