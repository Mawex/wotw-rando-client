#include <interception_macros.h>

namespace app::methods::System::Net::WebPermission {
IL2CPP_REGISTER_METHOD(0x01D77B80, Regex *, get_MatchAllRegex, ());
IL2CPP_REGISTER_METHOD(0x01D77D10, IEnumerator *, get_ConnectList, (WebPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D78130, IEnumerator *, get_AcceptList, (WebPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D78550, void, __ctor, (WebPermission * __this, PermissionState__Enum state));
IL2CPP_REGISTER_METHOD(0x01D78770, void, __ctor, (WebPermission * __this, bool unrestricted));
IL2CPP_REGISTER_METHOD(0x01D78990, void, __ctor, (WebPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D78BA0, void, __ctor, (WebPermission * __this, NetworkAccess__Enum access));
IL2CPP_REGISTER_METHOD(0x01D78DD0, void, __ctor, (WebPermission * __this, NetworkAccess__Enum access, Regex * uriRegex));
IL2CPP_REGISTER_METHOD(0x01D79010, void, __ctor, (WebPermission * __this, NetworkAccess__Enum access, String * uriString));
IL2CPP_REGISTER_METHOD(0x01D79250, void, __ctor, (WebPermission * __this, NetworkAccess__Enum access, Uri * uri));
IL2CPP_REGISTER_METHOD(0x01D79490, void, AddPermission, (WebPermission * __this, NetworkAccess__Enum access, String * uriString));
IL2CPP_REGISTER_METHODINFO(0x04760C60, WebPermission_AddPermission__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D79A80, void, AddPermission, (WebPermission * __this, NetworkAccess__Enum access, Uri * uri));
IL2CPP_REGISTER_METHODINFO(0x0475F778, WebPermission_AddPermission_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D79F60, void, AddPermission, (WebPermission * __this, NetworkAccess__Enum access, Regex * uriRegex));
IL2CPP_REGISTER_METHODINFO(0x0470B1C0, WebPermission_AddPermission_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D7A210, void, AddAsPattern, (WebPermission * __this, NetworkAccess__Enum access, DelayedRegex * uriRegexPattern));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, IsUnrestricted, (WebPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D7A7F0, IPermission *, Copy, (WebPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D7AB40, bool, IsSubsetOf, (WebPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHODINFO(0x0475BDA8, WebPermission_IsSubsetOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D7B160, bool, isSpecialSubsetCase, (String * regexToCheck, ArrayList * permList));
IL2CPP_REGISTER_METHOD(0x01D7B730, IPermission *, Union, (WebPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHODINFO(0x04790D28, WebPermission_Union__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D7BE00, IPermission *, Intersect, (WebPermission * __this, IPermission * target));
IL2CPP_REGISTER_METHODINFO(0x04786788, WebPermission_Intersect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D7C190, void, FromXml, (WebPermission * __this, SecurityElement * securityElement));
IL2CPP_REGISTER_METHODINFO(0x04708E58, WebPermission_FromXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D7CE60, SecurityElement *, ToXml, (WebPermission * __this));
IL2CPP_REGISTER_METHOD(0x01D7DC80, bool, isMatchedURI, (Object * uriToCheck, ArrayList * uriPatternList));
IL2CPP_REGISTER_METHOD(0x01D7E1C0, void, intersectList, (ArrayList * A, ArrayList * B, ArrayList * result));
IL2CPP_REGISTER_METHOD(0x01D7EEA0, Object *, intersectPair, (Object * L, Object * R, bool * isUri));
}
