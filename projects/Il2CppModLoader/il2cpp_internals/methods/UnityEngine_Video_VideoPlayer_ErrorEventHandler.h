#include <interception_macros.h>

namespace app::methods::UnityEngine_Video::VideoPlayer_ErrorEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::VideoPlayer_ErrorEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::VideoPlayer_ErrorEventHandler * this_ptr, app::VideoPlayer * source, app::String * message));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (app::VideoPlayer_ErrorEventHandler * this_ptr, app::VideoPlayer * source, app::String * message, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::VideoPlayer_ErrorEventHandler * this_ptr, app::IAsyncResult * result));
}
