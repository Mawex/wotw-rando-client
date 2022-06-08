#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Guid_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Comparison_1_Guid_ * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (Comparison_1_Guid_ * __this, Guid x, Guid y));
IL2CPP_REGISTER_METHOD(0x02C7E450, IAsyncResult *, BeginInvoke, (Comparison_1_Guid_ * __this, Guid x, Guid y, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (Comparison_1_Guid_ * __this, IAsyncResult * result));
}
