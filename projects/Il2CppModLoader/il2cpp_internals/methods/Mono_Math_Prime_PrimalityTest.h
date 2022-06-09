#include <interception_macros.h>

namespace app::methods::Mono_Math_Prime::PrimalityTest {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor_1, (app::PrimalityTest * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x023CD700, bool, Invoke_1, (app::PrimalityTest * this_ptr, app::BigInteger * bi, app::ConfidenceFactor__Enum confidence));
IL2CPP_REGISTER_METHOD(0x023CDC30, IAsyncResult *, BeginInvoke_1, (app::PrimalityTest * this_ptr, app::BigInteger * bi, app::ConfidenceFactor__Enum confidence, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_1, (app::PrimalityTest * this_ptr, app::IAsyncResult * result));
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor_2, (app::PrimalityTest_1 * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x023CD700, bool, Invoke_2, (app::PrimalityTest_1 * this_ptr, app::BigInteger_1 * bi, app::ConfidenceFactor__Enum_1 confidence));
IL2CPP_REGISTER_METHOD(0x02A35940, IAsyncResult *, BeginInvoke_2, (app::PrimalityTest_1 * this_ptr, app::BigInteger_1 * bi, app::ConfidenceFactor__Enum_1 confidence, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke_2, (app::PrimalityTest_1 * this_ptr, app::IAsyncResult * result));
}
