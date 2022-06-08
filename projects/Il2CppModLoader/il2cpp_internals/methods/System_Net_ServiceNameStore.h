using namespace app;

namespace app::methods::System::Net::ServiceNameStore {
IL2CPP_REGISTER_METHOD(0x01BD3990, ServiceNameCollection *, get_ServiceNames, (ServiceNameStore * __this));
IL2CPP_REGISTER_METHOD(0x01BD3AF0, void, __ctor, (ServiceNameStore * __this));
IL2CPP_REGISTER_METHOD(0x01BD3C40, bool, AddSingleServiceName, (ServiceNameStore * __this, String * spn));
IL2CPP_REGISTER_METHOD(0x01BD3D20, bool, Add, (ServiceNameStore * __this, String * uriPrefix));
IL2CPP_REGISTER_METHOD(0x01BD3F20, bool, Remove, (ServiceNameStore * __this, String * uriPrefix));
IL2CPP_REGISTER_METHOD(0x01BD40A0, bool, Contains, (ServiceNameStore * __this, String * newServiceName));
IL2CPP_REGISTER_METHOD(0x01BD40C0, void, Clear, (ServiceNameStore * __this));
IL2CPP_REGISTER_METHOD(0x01BD4170, String *, ExtractHostname, (ServiceNameStore * __this, String * uriPrefix, bool allowInvalidUriStrings));
IL2CPP_REGISTER_METHOD(0x01BD43F0, String *, BuildSimpleServiceName, (ServiceNameStore * __this, String * uriPrefix));
IL2CPP_REGISTER_METHOD(0x01BD44B0, String__Array *, BuildServiceNames, (ServiceNameStore * __this, String * uriPrefix));
}
