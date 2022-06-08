using namespace app;

namespace app::methods::Moon::Network::Web::MoonTelemetryCommunicator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MoonTelemetryCommunicator * __this));
IL2CPP_REGISTER_METHOD(0x02E97530, MoonTelemetryCommunicator *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E97710, void, Send, (MoonTelemetryCommunicator * __this, IRequest * request));
IL2CPP_REGISTER_METHOD(0x02E979F0, int32_t, get_RequestsCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartThreadHandler, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopThreadhandler, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E97AA0, void, __cctor, (MethodInfo * method));
}
