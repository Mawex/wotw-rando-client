#include <interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::DisposableBuffer {
IL2CPP_REGISTER_METHOD(0x030B10C0, void, __ctor, (DisposableBuffer * __this));
IL2CPP_REGISTER_METHOD(0x030B1170, void, __ctor, (DisposableBuffer * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x030B1220, void, Dispose, (DisposableBuffer * __this));
IL2CPP_REGISTER_METHOD(0x030B12D0, void, Dispose, (DisposableBuffer * __this, bool isDisposing));
IL2CPP_REGISTER_METHOD(0x030B1390, void, Finalize, (DisposableBuffer * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, void *, get_IntPtr, (DisposableBuffer * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_IntPtr, (DisposableBuffer * __this, void * value));
}
