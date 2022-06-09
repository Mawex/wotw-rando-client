#include <interception_macros.h>

namespace app::methods::FullSerializer::fsResult {
IL2CPP_REGISTER_METHOD(0x0012C5C0, void, AddMessage, (app::fsResult__Boxed * this_ptr, app::String * message));
IL2CPP_REGISTER_METHOD(0x0012C5D0, void, AddMessages, (app::fsResult__Boxed * this_ptr, app::fsResult result));
IL2CPP_REGISTER_METHOD(0x0012C5F0, fsResult, Merge, (app::fsResult__Boxed * this_ptr, app::fsResult other));
IL2CPP_REGISTER_METHOD(0x01514BC0, fsResult, Warn, (app::String * warning));
IL2CPP_REGISTER_METHOD(0x01514D50, fsResult, Fail, (app::String * warning));
IL2CPP_REGISTER_METHOD(0x01514EE0, fsResult, operator__, (app::fsResult a, app::fsResult b));
IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_Failed, (app::fsResult__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0010E100, bool, get_Succeeded, (app::fsResult__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0012C640, bool, get_HasWarnings, (app::fsResult__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0012C6D0, fsResult, AssertSuccess, (app::fsResult__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04726208, fsResult_AssertSuccess__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012C700, fsResult, AssertSuccessWithoutWarnings, (app::fsResult__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04745B58, fsResult_AssertSuccessWithoutWarnings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012C730, Exception *, get_AsException, (app::fsResult__Boxed * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478FC90, fsResult_get_AsException__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0012C740, IEnumerable_1_System_String_ *, get_RawMessages, (app::fsResult__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x0012C750, String *, get_FormattedMessages, (app::fsResult__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x01515380, void, __cctor, ());
}
