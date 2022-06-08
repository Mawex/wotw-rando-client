#include <interception_macros.h>

namespace app::methods::System::Net::StaticProxy {
IL2CPP_REGISTER_METHOD(0x020A5B70, void, __ctor, (StaticProxy * __this, Uri * destination, Uri * proxy));
IL2CPP_REGISTER_METHODINFO(0x0477D568, StaticProxy__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x020A5C60, bool, GetNextProxy, (StaticProxy * __this, Uri * * proxy));
}
