#include <interception_macros.h>

namespace app::methods::SoundProvider_CallbackFunction {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SoundProvider_CallbackFunction * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (SoundProvider_CallbackFunction * __this, SoundProvider * provider));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (SoundProvider_CallbackFunction * __this, SoundProvider * provider, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SoundProvider_CallbackFunction * __this, IAsyncResult * result));
}
