#include <interception_macros.h>

namespace app::methods::System_Net::ExceptionHelper {
IL2CPP_REGISTER_METHOD(0x01D27350, NotImplementedException *, get_MethodNotImplementedException, ());
IL2CPP_REGISTER_METHOD(0x01D274B0, NotImplementedException *, get_PropertyNotImplementedException, ());
IL2CPP_REGISTER_METHOD(0x01D27610, NotSupportedException *, get_MethodNotSupportedException, ());
IL2CPP_REGISTER_METHOD(0x01D27770, NotSupportedException *, get_PropertyNotSupportedException, ());
IL2CPP_REGISTER_METHOD(0x01D278D0, WebException *, get_IsolatedException, ());
IL2CPP_REGISTER_METHOD(0x01D27A40, WebException *, get_RequestAbortedException, ());
IL2CPP_REGISTER_METHOD(0x01D27BB0, WebException *, get_CacheEntryNotFoundException, ());
IL2CPP_REGISTER_METHOD(0x01D27D20, WebException *, get_RequestProhibitedByCachePolicyException, ());
}
