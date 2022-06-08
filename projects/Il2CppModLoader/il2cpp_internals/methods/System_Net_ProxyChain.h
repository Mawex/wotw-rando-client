using namespace app;

namespace app::methods::System::Net::ProxyChain {
IL2CPP_REGISTER_METHOD(0x01BCD890, void, __ctor, (ProxyChain * __this, Uri * destination));
IL2CPP_REGISTER_METHOD(0x01BCD9F0, IEnumerator_1_System_Uri_ *, GetEnumerator, (ProxyChain * __this));
IL2CPP_REGISTER_METHOD(0x01BCDB50, IEnumerator *, IEnumerable_GetEnumerator, (ProxyChain * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (ProxyChain * __this));
IL2CPP_REGISTER_METHOD(0x01BCDB60, IEnumerator_1_System_Uri_ *, get_Enumerator, (ProxyChain * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Uri *, get_Destination, (ProxyChain * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Abort, (ProxyChain * __this));
IL2CPP_REGISTER_METHOD(0x01BCDB80, bool, HttpAbort, (ProxyChain * __this, HttpWebRequest * request, WebException * webException));
IL2CPP_REGISTER_METHODINFO(0x04798238, ProxyChain_HttpAbort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCDBA0, HttpAbortDelegate *, get_HttpAbortDelegate, (ProxyChain * __this));
}
