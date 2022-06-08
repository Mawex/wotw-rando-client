using namespace app;

namespace app::methods::System::Security::Cryptography::X509Certificates::X509Chain {
IL2CPP_REGISTER_METHOD(0x021CC8B0, X509ChainImpl *, get_Impl, (X509Chain * __this));
IL2CPP_REGISTER_METHOD(0x021CC970, void, __ctor, (X509Chain * __this));
IL2CPP_REGISTER_METHOD(0x021CCAC0, void, __ctor, (X509Chain * __this, bool useMachineContext));
IL2CPP_REGISTER_METHOD(0x021CCC20, X509ChainPolicy *, get_ChainPolicy, (X509Chain * __this));
IL2CPP_REGISTER_METHOD(0x021CCC50, void, set_ChainPolicy, (X509Chain * __this, X509ChainPolicy * value));
IL2CPP_REGISTER_METHOD(0x021CCC90, X509ChainStatus__Array *, get_ChainStatus, (X509Chain * __this));
IL2CPP_REGISTER_METHOD(0x021CCCC0, bool, Build, (X509Chain * __this, X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x021CCD00, X509Chain *, Create, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x021CCE40, void, Dispose, (X509Chain * __this));
IL2CPP_REGISTER_METHOD(0x021CCEF0, void, Dispose, (X509Chain * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x021CCFC0, void, Finalize, (X509Chain * __this));
}
