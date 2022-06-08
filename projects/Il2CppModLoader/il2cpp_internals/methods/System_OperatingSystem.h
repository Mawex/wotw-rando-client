using namespace app;

namespace app::methods::System::OperatingSystem {
IL2CPP_REGISTER_METHOD(0x0227BA00, void, __ctor, (OperatingSystem * __this, PlatformID__Enum platform, Version * version));
IL2CPP_REGISTER_METHODINFO(0x0472BF30, OperatingSystem__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0227BB50, void, __ctor, (OperatingSystem * __this, SerializationInfo * information, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FC6D0, PlatformID__Enum, get_Platform, (OperatingSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Version *, get_Version, (OperatingSystem * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_ServicePack, (OperatingSystem * __this));
IL2CPP_REGISTER_METHOD(0x0227BCE0, Object *, Clone, (OperatingSystem * __this));
IL2CPP_REGISTER_METHOD(0x0227BE40, void, GetObjectData, (OperatingSystem * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0227BF30, String *, ToString, (OperatingSystem * __this));
}
