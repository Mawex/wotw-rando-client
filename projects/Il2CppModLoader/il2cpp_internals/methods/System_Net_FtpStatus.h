#include <interception_macros.h>

namespace app::methods::System_Net::FtpStatus {
IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor, (app::FtpStatus * this_ptr, app::FtpStatusCode__Enum status_code, app::String * status_description));
IL2CPP_REGISTER_METHOD(0x002FC6D0, FtpStatusCode__Enum, get_StatusCode, (app::FtpStatus * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_StatusDescription, (app::FtpStatus * this_ptr));
}
