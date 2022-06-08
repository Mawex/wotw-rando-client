using namespace app;

namespace app::methods::System::Net::FtpWebResponse {
IL2CPP_REGISTER_METHOD(0x01D37BE0, void, __ctor, (FtpWebResponse * __this, FtpWebRequest * request, Uri * uri, String * method_1, bool keepAlive));
IL2CPP_REGISTER_METHOD(0x01D37D00, void, __ctor, (FtpWebResponse * __this, FtpWebRequest * request, Uri * uri, String * method_1, FtpStatusCode__Enum statusCode, String * statusDescription));
IL2CPP_REGISTER_METHOD(0x01D37E30, void, __ctor, (FtpWebResponse * __this, FtpWebRequest * request, Uri * uri, String * method_1, FtpStatus * status));
IL2CPP_REGISTER_METHOD(0x002FBBE0, int64_t, get_ContentLength, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D37E70, WebHeaderCollection *, get_Headers, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Uri *, get_ResponseUri, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, DateTime, get_LastModified, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_LastModified, (FtpWebResponse * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_BannerMessage, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_BannerMessage, (FtpWebResponse * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_WelcomeMessage, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_WelcomeMessage, (FtpWebResponse * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_ExitMessage, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_ExitMessage, (FtpWebResponse * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00654950, FtpStatusCode__Enum, get_StatusCode, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x00654960, void, set_StatusCode, (FtpWebResponse * __this, FtpStatusCode__Enum value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsHeaders, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, String *, get_StatusDescription, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_StatusDescription, (FtpWebResponse * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01D37FB0, void, Close, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D380B0, Stream *, GetResponseStream, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Stream, (FtpWebResponse * __this, Stream * value));
IL2CPP_REGISTER_METHOD(0x002FB950, Stream *, get_Stream, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D38290, void, UpdateStatus, (FtpWebResponse * __this, FtpStatus * status));
IL2CPP_REGISTER_METHOD(0x01D382C0, void, CheckDisposed, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x047635A8, FtpWebResponse_CheckDisposed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D383A0, bool, IsFinal, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHOD(0x01D383B0, void, __ctor, (FtpWebResponse * __this));
IL2CPP_REGISTER_METHODINFO(0x0474B800, FtpWebResponse__ctor_3__MethodInfo);
}
