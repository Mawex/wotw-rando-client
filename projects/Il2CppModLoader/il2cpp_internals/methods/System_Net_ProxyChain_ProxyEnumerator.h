using namespace app;

namespace app::methods::System::Net::ProxyChain_ProxyEnumerator {
IL2CPP_REGISTER_METHOD(0x01BCDD10, void, __ctor, (ProxyChain_ProxyEnumerator * __this, ProxyChain * chain));
IL2CPP_REGISTER_METHOD(0x01BCDD20, Uri *, get_Current, (ProxyChain_ProxyEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x04764460, ProxyChain_ProxyEnumerator_get_Current__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCDD20, Object *, IEnumerator_get_Current, (ProxyChain_ProxyEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x01BCDE20, bool, MoveNext, (ProxyChain_ProxyEnumerator * __this));
IL2CPP_REGISTER_METHODINFO(0x0472E848, ProxyChain_ProxyEnumerator_MoveNext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BCE170, void, Reset, (ProxyChain_ProxyEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (ProxyChain_ProxyEnumerator * __this));
}
