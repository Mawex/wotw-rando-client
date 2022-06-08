#include <interception_macros.h>

namespace app::methods::UnityEngineInternal::Input::NativeUpdateCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (NativeUpdateCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (NativeUpdateCallback * __this, NativeInputUpdateType__Enum updateType, NativeInputEventBuffer * buffer));
IL2CPP_REGISTER_METHOD(0x031C3640, IAsyncResult *, BeginInvoke, (NativeUpdateCallback * __this, NativeInputUpdateType__Enum updateType, NativeInputEventBuffer * buffer, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (NativeUpdateCallback * __this, IAsyncResult * result));
}
