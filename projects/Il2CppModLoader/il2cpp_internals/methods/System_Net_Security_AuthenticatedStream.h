#include <interception_macros.h>

namespace app::methods::System::Net::Security::AuthenticatedStream {
IL2CPP_REGISTER_METHOD(0x01BD0C70, void, __ctor, (AuthenticatedStream * __this, Stream * innerStream, bool leaveInnerStreamOpen));
IL2CPP_REGISTER_METHODINFO(0x04742A20, AuthenticatedStream__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB00, Stream *, get_InnerStream, (AuthenticatedStream * __this));
IL2CPP_REGISTER_METHOD(0x01BD0E40, void, Dispose, (AuthenticatedStream * __this, bool disposing));
}
