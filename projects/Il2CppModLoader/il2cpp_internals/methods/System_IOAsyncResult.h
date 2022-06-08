#include <interception_macros.h>

namespace app::methods::System::IOAsyncResult {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (IOAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0200AA90, void, Init, (IOAsyncResult * __this, AsyncCallback * async_callback, Object * async_state));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (IOAsyncResult * __this, AsyncCallback * async_callback, Object * async_state));
IL2CPP_REGISTER_METHOD(0x002FA280, AsyncCallback *, get_AsyncCallback, (IOAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, get_AsyncState, (IOAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0200AAB0, WaitHandle *, get_AsyncWaitHandle, (IOAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CompletedSynchronously, (IOAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_CompletedSynchronously, (IOAsyncResult * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_IsCompleted, (IOAsyncResult * __this));
IL2CPP_REGISTER_METHOD(0x0200ACF0, void, set_IsCompleted, (IOAsyncResult * __this, bool value));
}
