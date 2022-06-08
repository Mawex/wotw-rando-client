#include <interception_macros.h>

namespace app::methods::FullSerializer::fsResult {
IL2CPP_REGISTER_METHOD(0x0012C5C0, void, AddMessage, (fsResult__Boxed * __this, String * message));
IL2CPP_REGISTER_METHOD(0x0012C5D0, void, AddMessages, (fsResult__Boxed * __this, fsResult result));
IL2CPP_REGISTER_METHOD(0x0012C5F0, fsResult, Merge, (fsResult__Boxed * __this, fsResult other));
IL2CPP_REGISTER_METHOD(0x01514BC0, fsResult, Warn, (String * warning));
IL2CPP_REGISTER_METHOD(0x01514D50, fsResult, Fail, (String * warning));
IL2CPP_REGISTER_METHOD(0x01514EE0, fsResult, operator__, (fsResult a, fsResult b));
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_Failed, (fsResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010E100, bool, get_Succeeded, (fsResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012C640, bool, get_HasWarnings, (fsResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012C6D0, fsResult, AssertSuccess, (fsResult__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04726208, fsResult_AssertSuccess__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012C700, fsResult, AssertSuccessWithoutWarnings, (fsResult__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04745B58, fsResult_AssertSuccessWithoutWarnings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012C730, Exception *, get_AsException, (fsResult__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0478FC90, fsResult_get_AsException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012C740, IEnumerable_1_System_String_ *, get_RawMessages, (fsResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0012C750, String *, get_FormattedMessages, (fsResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01515380, void, __cctor, ());
}
