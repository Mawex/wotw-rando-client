using namespace app;

namespace app::methods::System::Net::EndPointManager {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EndPointManager * __this));
IL2CPP_REGISTER_METHOD(0x01EB6B90, void, AddListener, (HttpListener * listener));
IL2CPP_REGISTER_METHODINFO(0x047138A0, EndPointManager_AddListener__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB70B0, void, AddPrefix, (String * prefix, HttpListener * listener));
IL2CPP_REGISTER_METHOD(0x01EB7250, void, AddPrefixInternal, (String * p, HttpListener * listener));
IL2CPP_REGISTER_METHODINFO(0x04751790, EndPointManager_AddPrefixInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB74E0, EndPointListener *, GetEPListener, (String * host, int32_t port, HttpListener * listener, bool secure));
IL2CPP_REGISTER_METHOD(0x01EB7AF0, void, RemoveEndPoint, (EndPointListener * epl, IPEndPoint * ep));
IL2CPP_REGISTER_METHOD(0x01EB7DE0, void, RemoveListener, (HttpListener * listener));
IL2CPP_REGISTER_METHOD(0x01EB8050, void, RemovePrefix, (String * prefix, HttpListener * listener));
IL2CPP_REGISTER_METHOD(0x01EB81F0, void, RemovePrefixInternal, (String * prefix, HttpListener * listener));
IL2CPP_REGISTER_METHOD(0x01EB8420, void, __cctor, (MethodInfo * method));
}
