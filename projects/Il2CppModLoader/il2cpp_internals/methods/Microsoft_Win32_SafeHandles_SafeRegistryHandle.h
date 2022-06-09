#include <interception_macros.h>

namespace app::methods::Microsoft_Win32_SafeHandles::SafeRegistryHandle {
    IL2CPP_REGISTER_METHOD(0x021722B0, void, __ctor, (app::SafeRegistryHandle * this_ptr, void * preexisting_handle, bool owns_handle));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ReleaseHandle, (app::SafeRegistryHandle * this_ptr));
}
