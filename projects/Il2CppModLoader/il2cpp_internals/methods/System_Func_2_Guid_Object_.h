#include <interception_macros.h>

namespace app::methods::System::Func_2_Guid_Object_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Func_2_Guid_Object_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02887790, Object *, Invoke, (app::Func_2_Guid_Object_ * this_ptr, app::Guid arg));
IL2CPP_REGISTER_METHOD(0x02F9ED20, IAsyncResult *, BeginInvoke, (app::Func_2_Guid_Object_ * this_ptr, app::Guid arg, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Object *, EndInvoke, (app::Func_2_Guid_Object_ * this_ptr, app::IAsyncResult * result));
}
