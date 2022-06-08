#include <interception_macros.h>

namespace app::methods::System::Xml::XmlDownloadManager {
IL2CPP_REGISTER_METHOD(0x01DABC20, Stream *, GetStream, (XmlDownloadManager * __this, Uri * uri, ICredentials * credentials, IWebProxy * proxy, RequestCachePolicy * cachePolicy));
IL2CPP_REGISTER_METHOD(0x01DABE30, Stream *, GetNonFileStream, (XmlDownloadManager * __this, Uri * uri, ICredentials * credentials, IWebProxy * proxy, RequestCachePolicy * cachePolicy));
IL2CPP_REGISTER_METHOD(0x01DAC5D0, void, Remove, (XmlDownloadManager * __this, String * host));
IL2CPP_REGISTER_METHOD(0x01DAC7A0, Task_1_System_IO_Stream_ *, GetStreamAsync, (XmlDownloadManager * __this, Uri * uri, ICredentials * credentials, IWebProxy * proxy, RequestCachePolicy * cachePolicy));
IL2CPP_REGISTER_METHOD(0x01DACB50, Task_1_System_IO_Stream_ *, GetNonFileStreamAsync, (XmlDownloadManager * __this, Uri * uri, ICredentials * credentials, IWebProxy * proxy, RequestCachePolicy * cachePolicy));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XmlDownloadManager * __this));
}
