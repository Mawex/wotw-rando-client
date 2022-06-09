#include <interception_macros.h>

namespace app::methods::System_Reflection::MonoProperty_GetterAdapter {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::MonoProperty_GetterAdapter * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, Object *, Invoke, (app::MonoProperty_GetterAdapter * this_ptr, app::Object * _this));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::MonoProperty_GetterAdapter * this_ptr, app::Object * _this, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Object *, EndInvoke, (app::MonoProperty_GetterAdapter * this_ptr, app::IAsyncResult * result));
}
