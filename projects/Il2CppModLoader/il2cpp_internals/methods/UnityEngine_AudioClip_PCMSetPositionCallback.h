#include <interception_macros.h>

namespace app::methods::UnityEngine::AudioClip_PCMSetPositionCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (AudioClip_PCMSetPositionCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (AudioClip_PCMSetPositionCallback * __this, int32_t position));
IL2CPP_REGISTER_METHOD(0x0313EA60, IAsyncResult *, BeginInvoke, (AudioClip_PCMSetPositionCallback * __this, int32_t position, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (AudioClip_PCMSetPositionCallback * __this, IAsyncResult * result));
}
