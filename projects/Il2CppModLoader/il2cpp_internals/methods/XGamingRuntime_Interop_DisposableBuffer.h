#include <interception_macros.h>

namespace app::methods::XGamingRuntime_Interop::DisposableBuffer {
    IL2CPP_REGISTER_METHOD(0x030B10C0, void, __ctor_1, (app::DisposableBuffer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x030B1170, void, __ctor_2, (app::DisposableBuffer * this_ptr, int32_t size));
    IL2CPP_REGISTER_METHOD(0x030B1220, void, Dispose_1, (app::DisposableBuffer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x030B12D0, void, Dispose_2, (app::DisposableBuffer * this_ptr, bool is_disposing));
    IL2CPP_REGISTER_METHOD(0x030B1390, void, Finalize, (app::DisposableBuffer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA280, void *, get_IntPtr, (app::DisposableBuffer * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_IntPtr, (app::DisposableBuffer * this_ptr, void * value));
}
