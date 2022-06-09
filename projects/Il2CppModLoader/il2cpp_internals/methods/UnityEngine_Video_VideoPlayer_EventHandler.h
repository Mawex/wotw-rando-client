#include <interception_macros.h>

namespace app::methods::UnityEngine_Video::VideoPlayer_EventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::VideoPlayer_EventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::VideoPlayer_EventHandler * this_ptr, app::VideoPlayer * source));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::VideoPlayer_EventHandler * this_ptr, app::VideoPlayer * source, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::VideoPlayer_EventHandler * this_ptr, app::IAsyncResult * result));
}
