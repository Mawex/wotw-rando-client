#include <interception_macros.h>

namespace app::methods::System::Xml::XmlUrlResolver {
IL2CPP_REGISTER_METHOD(0x01FC3F60, XmlDownloadManager *, get_DownloadManager, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlUrlResolver * __this));
IL2CPP_REGISTER_METHOD(0x01FC4120, Object *, GetEntity, (XmlUrlResolver * __this, Uri * absoluteUri, String * role, Type * ofObjectToReturn));
IL2CPP_REGISTER_METHODINFO(0x047354D0, XmlUrlResolver_GetEntity__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01FC42D0, Uri *, ResolveUri, (XmlUrlResolver * __this, Uri * baseUri, String * relativeUri));
IL2CPP_REGISTER_METHOD(0x01FC42E0, Task_1_System_Object_ *, GetEntityAsync, (XmlUrlResolver * __this, Uri * absoluteUri, String * role, Type * ofObjectToReturn));
}
