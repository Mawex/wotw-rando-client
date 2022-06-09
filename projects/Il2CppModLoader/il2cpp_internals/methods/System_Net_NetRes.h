#include <interception_macros.h>

namespace app::methods::System_Net::NetRes {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::NetRes * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E755E0, String *, GetWebStatusString_1, (app::String * res, app::WebExceptionStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x01E75720, String *, GetWebStatusString_2, (app::WebExceptionStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x01E757C0, String *, GetWebStatusCodeString_1, (app::HttpStatusCode__Enum status_code, app::String * status_description));
IL2CPP_REGISTER_METHOD(0x01E75940, String *, GetWebStatusCodeString_2, (app::FtpStatusCode__Enum status_code, app::String * status_description));
}
