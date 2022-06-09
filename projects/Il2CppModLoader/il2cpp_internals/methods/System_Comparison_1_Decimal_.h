#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Decimal_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Comparison_1_Decimal_ * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_Decimal_ * this_ptr, app::Decimal x, app::Decimal y));
IL2CPP_REGISTER_METHOD(0x02C7DE40, IAsyncResult *, BeginInvoke, (app::Comparison_1_Decimal_ * this_ptr, app::Decimal x, app::Decimal y, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Decimal_ * this_ptr, app::IAsyncResult * result));
}
