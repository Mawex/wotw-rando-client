#include <interception_macros.h>

namespace app::methods::Microsoft_Xbox_Services_Xal::XalService_XalPlatformStorageWriteEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::XalService_XalPlatformStorageWriteEventHandler * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x0143E630, void, Invoke, (app::XalService_XalPlatformStorageWriteEventHandler * this_ptr, app::void * context, app::void * user_context, app::void * operation, app::String * key, app::void * data_size, app::void * data));
IL2CPP_REGISTER_METHOD(0x0143EB40, IAsyncResult *, BeginInvoke, (app::XalService_XalPlatformStorageWriteEventHandler * this_ptr, app::void * context, app::void * user_context, app::void * operation, app::String * key, app::void * data_size, app::void * data, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalService_XalPlatformStorageWriteEventHandler * this_ptr, app::IAsyncResult * result));
}
