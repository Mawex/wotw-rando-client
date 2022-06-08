#include <interception_macros.h>

namespace app::methods::System::Net::Sockets::SafeSocketHandle {
IL2CPP_REGISTER_METHOD(0x01BE38C0, void, __ctor, (SafeSocketHandle * __this, void * preexistingHandle, bool ownsHandle));
IL2CPP_REGISTER_METHOD(0x01BE3A80, bool, ReleaseHandle, (SafeSocketHandle * __this));
IL2CPP_REGISTER_METHODINFO(0x04792BA8, SafeSocketHandle_ReleaseHandle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BE4180, void, RegisterForBlockingSyscall, (SafeSocketHandle * __this));
IL2CPP_REGISTER_METHODINFO(0x047600A0, SafeSocketHandle_RegisterForBlockingSyscall__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BE45E0, void, UnRegisterForBlockingSyscall, (SafeSocketHandle * __this));
IL2CPP_REGISTER_METHOD(0x01BE4800, void, __cctor, ());
}
