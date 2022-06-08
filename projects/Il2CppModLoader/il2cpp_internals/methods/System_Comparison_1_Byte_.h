#include <interception_macros.h>

namespace app::methods::System::Comparison_1_Byte_ {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Comparison_1_Byte_ * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02C7C9B0, int32_t, Invoke, (Comparison_1_Byte_ * __this, uint8_t x, uint8_t y));
IL2CPP_REGISTER_METHOD(0x02C7CD20, IAsyncResult *, BeginInvoke, (Comparison_1_Byte_ * __this, uint8_t x, uint8_t y, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (Comparison_1_Byte_ * __this, IAsyncResult * result));
}
