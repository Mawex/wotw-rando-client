#include <interception_macros.h>

namespace app::methods::UnityEngineInternal::WebRequestUtils {
IL2CPP_REGISTER_METHOD(0x03181C00, String *, RedirectTo, (String * baseUri, String * redirectUri));
IL2CPP_REGISTER_METHOD(0x03182010, String *, MakeInitialUrl, (String * targetUrl, String * localUrl));
IL2CPP_REGISTER_METHODINFO(0x04726450, WebRequestUtils_MakeInitialUrl__MethodInfo);
IL2CPP_REGISTER_METHOD(0x031825F0, String *, MakeUriString, (Uri * targetUri, String * targetUrl, bool prependProtocol));
IL2CPP_REGISTER_METHOD(0x03182A90, String *, URLDecode, (String * encoded));
IL2CPP_REGISTER_METHOD(0x03182B80, void, __cctor, ());
}
