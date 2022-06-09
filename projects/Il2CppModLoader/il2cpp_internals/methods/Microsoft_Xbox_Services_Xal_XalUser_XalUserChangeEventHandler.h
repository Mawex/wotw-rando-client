#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::XalUser_XalUserChangeEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XalUser_XalUserChangeEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01443A00, void, Invoke, (app::XalUser_XalUserChangeEventHandler * this_ptr, app::void * context, app::XalUser_InternalXalUserLocalId user_id, app::XalUserChangeType__Enum change));
IL2CPP_REGISTER_METHOD(0x01443DB0, IAsyncResult *, BeginInvoke, (app::XalUser_XalUserChangeEventHandler * this_ptr, app::void * context, app::XalUser_InternalXalUserLocalId user_id, app::XalUserChangeType__Enum change, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalUser_XalUserChangeEventHandler * this_ptr, app::IAsyncResult * result));
}
