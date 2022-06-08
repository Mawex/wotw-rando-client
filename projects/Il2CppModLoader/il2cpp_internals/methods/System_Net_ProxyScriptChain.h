using namespace app;

namespace app::methods::System::Net::ProxyScriptChain {
IL2CPP_REGISTER_METHOD(0x01BCE180, void, __ctor, (ProxyScriptChain * __this, WebProxy * proxy, Uri * destination));
IL2CPP_REGISTER_METHOD(0x01BCE1B0, bool, GetNextProxy, (ProxyScriptChain * __this, Uri * * proxy));
IL2CPP_REGISTER_METHOD(0x01BCE3F0, void, Abort, (ProxyScriptChain * __this));
}
