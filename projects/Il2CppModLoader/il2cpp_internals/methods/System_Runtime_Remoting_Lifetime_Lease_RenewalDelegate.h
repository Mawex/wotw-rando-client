#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Lifetime::Lease_RenewalDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::Lease_RenewalDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, TimeSpan, Invoke, (app::Lease_RenewalDelegate * this_ptr, app::ILease * lease));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::Lease_RenewalDelegate * this_ptr, app::ILease * lease, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, TimeSpan, EndInvoke, (app::Lease_RenewalDelegate * this_ptr, app::IAsyncResult * result));
}
