#include <interception_macros.h>

namespace app::methods::System::Net::NetRes {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NetRes * __this));
IL2CPP_REGISTER_METHOD(0x01E755E0, String *, GetWebStatusString, (String * Res, WebExceptionStatus__Enum Status));
IL2CPP_REGISTER_METHOD(0x01E75720, String *, GetWebStatusString, (WebExceptionStatus__Enum Status));
IL2CPP_REGISTER_METHOD(0x01E757C0, String *, GetWebStatusCodeString, (HttpStatusCode__Enum statusCode, String * statusDescription));
IL2CPP_REGISTER_METHOD(0x01E75940, String *, GetWebStatusCodeString, (FtpStatusCode__Enum statusCode, String * statusDescription));
}
