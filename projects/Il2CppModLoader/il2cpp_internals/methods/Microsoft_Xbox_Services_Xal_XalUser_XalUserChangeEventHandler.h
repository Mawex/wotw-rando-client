#include <interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalUser_XalUserChangeEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XalUser_XalUserChangeEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01443A00, void, Invoke, (XalUser_XalUserChangeEventHandler * __this, void * context, XalUser_InternalXalUserLocalId userId, XalUserChangeType__Enum change));
IL2CPP_REGISTER_METHOD(0x01443DB0, IAsyncResult *, BeginInvoke, (XalUser_XalUserChangeEventHandler * __this, void * context, XalUser_InternalXalUserLocalId userId, XalUserChangeType__Enum change, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XalUser_XalUserChangeEventHandler * __this, IAsyncResult * result));
}
