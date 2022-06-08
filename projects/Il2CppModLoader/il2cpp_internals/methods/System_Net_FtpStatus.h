#include <interception_macros.h>

namespace app::methods::System::Net::FtpStatus {
IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor, (FtpStatus * __this, FtpStatusCode__Enum statusCode, String * statusDescription));
IL2CPP_REGISTER_METHOD(0x002FC6D0, FtpStatusCode__Enum, get_StatusCode, (FtpStatus * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_StatusDescription, (FtpStatus * __this));
}
