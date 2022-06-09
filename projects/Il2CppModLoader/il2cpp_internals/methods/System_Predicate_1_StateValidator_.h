#include <interception_macros.h>

namespace app::methods::System::Predicate_1_StateValidator_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Predicate_1_StateValidator_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Predicate_1_StateValidator_ * this_ptr, app::StateValidator obj));
IL2CPP_REGISTER_METHOD(0x02A505A0, IAsyncResult *, BeginInvoke, (app::Predicate_1_StateValidator_ * this_ptr, app::StateValidator obj, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_StateValidator_ * this_ptr, app::IAsyncResult * result));
}
