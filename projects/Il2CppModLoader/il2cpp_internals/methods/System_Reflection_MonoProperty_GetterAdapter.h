#include <interception_macros.h>

namespace app::methods::System::Reflection::MonoProperty_GetterAdapter {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (MonoProperty_GetterAdapter * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, Object *, Invoke, (MonoProperty_GetterAdapter * __this, Object * _this));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (MonoProperty_GetterAdapter * __this, Object * _this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Object *, EndInvoke, (MonoProperty_GetterAdapter * __this, IAsyncResult * result));
}
