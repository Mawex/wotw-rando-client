#include <interception_macros.h>

namespace app::methods::System::Net::DirectProxy {
IL2CPP_REGISTER_METHOD(0x01EB0B10, void, __ctor, (DirectProxy * __this, Uri * destination));
IL2CPP_REGISTER_METHOD(0x01EB0B20, bool, GetNextProxy, (DirectProxy * __this, Uri * * proxy));
}
