#include <interception_macros.h>

namespace app::methods::SurfaceToSoundProviderMap_CallbackFunction {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SurfaceToSoundProviderMap_CallbackFunction * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (SurfaceToSoundProviderMap_CallbackFunction * __this, SurfaceToSoundProviderMap * provider));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (SurfaceToSoundProviderMap_CallbackFunction * __this, SurfaceToSoundProviderMap * provider, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (SurfaceToSoundProviderMap_CallbackFunction * __this, IAsyncResult * result));
}
