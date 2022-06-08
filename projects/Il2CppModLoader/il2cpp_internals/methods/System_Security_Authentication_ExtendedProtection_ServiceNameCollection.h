using namespace app;

namespace app::methods::System::Security::Authentication::ExtendedProtection::ServiceNameCollection {
IL2CPP_REGISTER_METHOD(0x021BC8D0, void, __ctor, (ServiceNameCollection * __this, ICollection * items));
IL2CPP_REGISTER_METHODINFO(0x0470A6F8, ServiceNameCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BCC00, void, AddIfNew, (ArrayList * newServiceNames, String * serviceName));
IL2CPP_REGISTER_METHODINFO(0x04776AF8, ServiceNameCollection_AddIfNew__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021BCD10, bool, Contains, (String * searchServiceName, ICollection * serviceNames));
IL2CPP_REGISTER_METHOD(0x021BCF00, String *, NormalizeServiceName, (String * inputServiceName));
IL2CPP_REGISTER_METHOD(0x021BD390, bool, Match, (String * serviceName1, String * serviceName2));
}
