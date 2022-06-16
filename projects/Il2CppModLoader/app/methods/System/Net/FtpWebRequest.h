#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::FtpWebRequest {
    IL2CPP_REGISTER_METHOD(0x01D2EF90, void, ctor_1, (app::FtpWebRequest * this_ptr, app::Uri * uri))
    IL2CPP_REGISTER_METHOD(0x01D2F150, app::Exception *, GetMustImplement, ())
    IL2CPP_REGISTER_METHOD(0x01D2F290, app::X509CertificateCollection_1 *, get_ClientCertificates, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787E90, FtpWebRequest_get_ClientCertificates__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2F330, void, set_ClientCertificates, (app::FtpWebRequest * this_ptr, app::X509CertificateCollection_1 * value))
    IL2CPP_REGISTER_METHODINFO(0x04767698, FtpWebRequest_set_ClientCertificates__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2F3D0, app::String *, get_ConnectionGroupName, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746810, FtpWebRequest_get_ConnectionGroupName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2F470, void, set_ConnectionGroupName, (app::FtpWebRequest * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x047233E8, FtpWebRequest_set_ConnectionGroupName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2F510, app::String *, get_ContentType, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D938, FtpWebRequest_get_ContentType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2F560, void, set_ContentType, (app::FtpWebRequest * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x047382D8, FtpWebRequest_set_ContentType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, get_ContentLength, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_ContentLength, (app::FtpWebRequest * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FBC80, int64_t, get_ContentOffset, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2F5B0, void, set_ContentOffset, (app::FtpWebRequest * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x0476EB58, FtpWebRequest_set_ContentOffset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::ICredentials *, get_Credentials, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2F670, void, set_Credentials, (app::FtpWebRequest * this_ptr, app::ICredentials * value))
    IL2CPP_REGISTER_METHODINFO(0x04773748, FtpWebRequest_set_Credentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005035A0, bool, get_EnableSsl, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2F7D0, void, set_EnableSsl, (app::FtpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01D2F800, app::WebHeaderCollection *, get_Headers, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764118, FtpWebRequest_get_Headers__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2F8A0, void, set_Headers, (app::FtpWebRequest * this_ptr, app::WebHeaderCollection * value))
    IL2CPP_REGISTER_METHODINFO(0x0474E2A8, FtpWebRequest_set_Headers__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2F940, bool, get_KeepAlive, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2F950, void, set_KeepAlive, (app::FtpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::String *, get_Method, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2F960, void, set_Method, (app::FtpWebRequest * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04757BC8, FtpWebRequest_set_Method__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2FB80, bool, get_PreAuthenticate, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C098, FtpWebRequest_get_PreAuthenticate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2FBD0, void, set_PreAuthenticate, (app::FtpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x047701C0, FtpWebRequest_set_PreAuthenticate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IWebProxy *, get_Proxy, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2FC20, void, set_Proxy, (app::FtpWebRequest * this_ptr, app::IWebProxy * value))
    IL2CPP_REGISTER_METHOD(0x007007F0, int32_t, get_ReadWriteTimeout, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2FC50, void, set_ReadWriteTimeout, (app::FtpWebRequest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04759BB0, FtpWebRequest_set_ReadWriteTimeout__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::String *, get_RenameTo, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2FD10, void, set_RenameTo, (app::FtpWebRequest * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0472A878, FtpWebRequest_set_RenameTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Uri *, get_RequestUri, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2FDF0, app::ServicePoint *, get_ServicePoint, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2FE00, bool, get_UsePassive, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2FE10, void, set_UsePassive, (app::FtpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01D2FE40, bool, get_UseDefaultCredentials, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771618, FtpWebRequest_get_UseDefaultCredentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D2FEE0, void, set_UseDefaultCredentials, (app::FtpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0475B6F8, FtpWebRequest_set_UseDefaultCredentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_UseBinary, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2FF80, void, set_UseBinary, (app::FtpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00736620, int32_t, get_Timeout, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D2FFB0, void, set_Timeout, (app::FtpWebRequest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04752470, FtpWebRequest_set_Timeout__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D30070, app::String *, get_DataType, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D30100, app::FtpWebRequest_RequestState__Enum, get_State, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D301F0, void, set_State, (app::FtpWebRequest * this_ptr, app::FtpWebRequest_RequestState__Enum value))
    IL2CPP_REGISTER_METHOD(0x01D303A0, void, Abort, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D30670, app::IAsyncResult *, BeginGetResponse, (app::FtpWebRequest * this_ptr, app::AsyncCallback * callback, app::Object * state))
    IL2CPP_REGISTER_METHODINFO(0x0470AF08, FtpWebRequest_BeginGetResponse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D30B60, app::WebResponse *, EndGetResponse, (app::FtpWebRequest * this_ptr, app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHODINFO(0x0473E3E0, FtpWebRequest_EndGetResponse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D30D50, app::WebResponse *, GetResponse, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D30D90, app::IAsyncResult *, BeginGetRequestStream, (app::FtpWebRequest * this_ptr, app::AsyncCallback * callback, app::Object * state))
    IL2CPP_REGISTER_METHODINFO(0x04773BE0, FtpWebRequest_BeginGetRequestStream__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D312C0, app::Stream *, EndGetRequestStream, (app::FtpWebRequest * this_ptr, app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHODINFO(0x0473F3A8, FtpWebRequest_EndGetRequestStream__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D31520, app::Stream *, GetRequestStream, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D31560, app::ServicePoint *, GetServicePoint, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D31630, void, ResolveHost, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047195D0, FtpWebRequest_ResolveHost__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D317B0, void, ProcessRequest, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752918, FtpWebRequest_ProcessRequest__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D31B70, void, SetType, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734C40, FtpWebRequest_SetType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D31D30, app::String *, GetRemoteFolderPath, (app::FtpWebRequest * this_ptr, app::Uri * uri))
    IL2CPP_REGISTER_METHOD(0x01D32290, void, CWDAndSetFileName, (app::FtpWebRequest * this_ptr, app::Uri * uri))
    IL2CPP_REGISTER_METHODINFO(0x04751780, FtpWebRequest_CWDAndSetFileName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D324B0, void, ProcessMethod, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470EF58, FtpWebRequest_ProcessMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D32BE0, void, CloseControlConnection, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D32CB0, void, CloseDataConnection, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D32CE0, void, CloseConnection, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D32DD0, void, ProcessSimpleMethod, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F818, FtpWebRequest_ProcessSimpleMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D33570, void, UploadData, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D33720, void, DownloadData, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D338C0, void, CheckRequestStarted, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C3C0, FtpWebRequest_CheckRequestStarted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D33970, void, OpenControlConnection, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F0D0, FtpWebRequest_OpenControlConnection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D34140, app::String *, GetInitialPath, (app::FtpStatus * status))
    IL2CPP_REGISTER_METHODINFO(0x047012D8, FtpWebRequest_GetInitialPath__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D34390, app::Socket *, SetupPassiveConnection, (app::FtpWebRequest * this_ptr, app::String * status_description, bool ipv6))
    IL2CPP_REGISTER_METHODINFO(0x0473FEB8, FtpWebRequest_SetupPassiveConnection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D34720, int32_t, GetPortV4, (app::FtpWebRequest * this_ptr, app::String * response_string))
    IL2CPP_REGISTER_METHODINFO(0x047799F0, FtpWebRequest_GetPortV4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D34A10, int32_t, GetPortV6, (app::FtpWebRequest * this_ptr, app::String * response_string))
    IL2CPP_REGISTER_METHODINFO(0x04718958, FtpWebRequest_GetPortV6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D34CD0, app::String *, FormatAddress, (app::FtpWebRequest * this_ptr, app::IPAddress * address, int32_t port))
    IL2CPP_REGISTER_METHOD(0x01D35170, app::String *, FormatAddressV6, (app::FtpWebRequest * this_ptr, app::IPAddress * address, int32_t port))
    IL2CPP_REGISTER_METHOD(0x01D35380, app::Exception *, CreateExceptionFromResponse, (app::FtpWebRequest * this_ptr, app::FtpStatus * status))
    IL2CPP_REGISTER_METHOD(0x01D35610, void, SetTransferCompleted, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D356B0, void, OperationCompleted, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D356D0, void, SetCompleteWithError, (app::FtpWebRequest * this_ptr, app::Exception * exc))
    IL2CPP_REGISTER_METHOD(0x01D35700, app::Socket *, InitDataConnection, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047180D0, FtpWebRequest_InitDataConnection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D35C60, void, OpenDataConnection, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726328, FtpWebRequest_OpenDataConnection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D361E0, void, Authenticate, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716450, FtpWebRequest_Authenticate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D369A0, app::FtpStatus *, SendCommand_1, (app::FtpWebRequest * this_ptr, app::String * command, app::String__Array * parameters))
    IL2CPP_REGISTER_METHOD(0x01D369C0, app::FtpStatus *, SendCommand_2, (app::FtpWebRequest * this_ptr, bool wait_response, app::String * command, app::String__Array * parameters))
    IL2CPP_REGISTER_METHOD(0x01D36C50, app::FtpStatus *, ServiceNotAvailable, ())
    IL2CPP_REGISTER_METHOD(0x01D36DA0, app::FtpStatus *, GetResponseStatus, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D37170, void, InitiateSecureConnection, (app::FtpWebRequest * this_ptr, app::Stream * * stream))
    IL2CPP_REGISTER_METHODINFO(0x04798CA8, FtpWebRequest_InitiateSecureConnection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D372C0, bool, ChangeToSSLSocket, (app::FtpWebRequest * this_ptr, app::Stream * * stream))
    IL2CPP_REGISTER_METHOD(0x01D37440, bool, InFinalState, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D37490, bool, InProgress, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D374E0, void, CheckIfAborted, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795FC0, FtpWebRequest_CheckIfAborted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D375A0, void, CheckFinalState, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751EB8, FtpWebRequest_CheckFinalState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D37670, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01D37BB0, void, ctor_2, (app::FtpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775B18, FtpWebRequest__ctor_1__MethodInfo)
}
