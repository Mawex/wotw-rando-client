#include <interception_macros.h>

namespace app::methods::AkSoundEngine_GameObjectHashFunction {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AkSoundEngine_GameObjectHashFunction * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, uint64_t, Invoke, (AkSoundEngine_GameObjectHashFunction * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (AkSoundEngine_GameObjectHashFunction * __this, GameObject * gameObject, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, uint64_t, EndInvoke, (AkSoundEngine_GameObjectHashFunction * __this, IAsyncResult * result));
}
