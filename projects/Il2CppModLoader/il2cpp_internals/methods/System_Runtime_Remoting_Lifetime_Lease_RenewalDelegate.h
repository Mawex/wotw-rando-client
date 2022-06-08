using namespace app;

namespace app::methods::System::Runtime::Remoting::Lifetime::Lease_RenewalDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Lease_RenewalDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x014347E0, TimeSpan, Invoke, (Lease_RenewalDelegate * __this, ILease * lease));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (Lease_RenewalDelegate * __this, ILease * lease, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F52480, TimeSpan, EndInvoke, (Lease_RenewalDelegate * __this, IAsyncResult * result));
}
