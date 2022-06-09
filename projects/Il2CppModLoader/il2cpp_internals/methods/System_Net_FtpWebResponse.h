#include <interception_macros.h>

namespace app::methods::System_Net::FtpWebResponse {
IL2CPP_REGISTER_METHOD(0x01D37BE0, void, __ctor_1, (app::FtpWebResponse * this_ptr, app::FtpWebRequest * request, app::Uri * uri, app::String * method_1, bool keep_alive));
IL2CPP_REGISTER_METHOD(0x01D37D00, void, __ctor_2, (app::FtpWebResponse * this_ptr, app::FtpWebRequest * request, app::Uri * uri, app::String * method_1, app::FtpStatusCode__Enum status_code, app::String * status_description));
IL2CPP_REGISTER_METHOD(0x01D37E30, void, __ctor_3, (app::FtpWebResponse * this_ptr, app::FtpWebRequest * request, app::Uri * uri, app::String * method_1, app::FtpStatus * status));
IL2CPP_REGISTER_METHOD(0x002FBBE0, int64_t, get_ContentLength, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D37E70, WebHeaderCollection *, get_Headers, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Uri *, get_ResponseUri, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, DateTime, get_LastModified, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_LastModified, (app::FtpWebResponse * this_ptr, app::DateTime value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_BannerMessage, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_BannerMessage, (app::FtpWebResponse * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_WelcomeMessage, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_WelcomeMessage, (app::FtpWebResponse * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ExitMessage, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_ExitMessage, (app::FtpWebResponse * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x00654950, FtpStatusCode__Enum, get_StatusCode, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_StatusCode, (app::FtpWebResponse * this_ptr, app::FtpStatusCode__Enum value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsHeaders, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_StatusDescription, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_StatusDescription, (app::FtpWebResponse * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x01D37FB0, void, Close, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D380B0, Stream *, GetResponseStream, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Stream, (app::FtpWebResponse * this_ptr, app::Stream * value));
IL2CPP_REGISTER_METHOD(0x002FB950, Stream *, get_Stream, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D38290, void, UpdateStatus, (app::FtpWebResponse * this_ptr, app::FtpStatus * status));
IL2CPP_REGISTER_METHOD(0x01D382C0, void, CheckDisposed, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047635A8, FtpWebResponse_CheckDisposed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D383A0, bool, IsFinal, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D383B0, void, __ctor_4, (app::FtpWebResponse * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474B800, FtpWebResponse__ctor_3__MethodInfo);
}
