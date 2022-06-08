#include <interception_macros.h>

namespace app::methods::System::Net::NclUtilities {
IL2CPP_REGISTER_METHOD(0x01E70E40, bool, IsThreadPoolLow, ());
IL2CPP_REGISTER_METHOD(0x01E70E70, bool, get_HasShutdownStarted, ());
IL2CPP_REGISTER_METHOD(0x01E70FC0, bool, IsCredentialFailure, (SecurityStatus__Enum error));
IL2CPP_REGISTER_METHOD(0x01E70FF0, bool, IsClientFault, (SecurityStatus__Enum error));
IL2CPP_REGISTER_METHOD(0x01E71020, ContextCallback *, get_ContextRelativeDemandCallback, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, DemandCallback, (Object * state));
IL2CPP_REGISTER_METHODINFO(0x0475E8F8, NclUtilities_DemandCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E711C0, bool, GuessWhetherHostIsLoopback, (String * host));
IL2CPP_REGISTER_METHOD(0x01E712B0, bool, IsFatal, (Exception * exception));
IL2CPP_REGISTER_METHOD(0x01E713B0, bool, IsAddressLocal, (IPAddress * ipAddress));
IL2CPP_REGISTER_METHOD(0x01E71450, IPHostEntry *, GetLocalHost, ());
IL2CPP_REGISTER_METHOD(0x01E714F0, IPAddress__Array *, get_LocalAddresses, ());
IL2CPP_REGISTER_METHOD(0x01E71B90, Object *, get_LocalAddressesLock, ());
}
