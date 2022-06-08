#include <interception_macros.h>

namespace app::methods::System::Xml::CachingEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CachingEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (CachingEventHandler * __this, XsdCachingReader * cachingReader));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (CachingEventHandler * __this, XsdCachingReader * cachingReader, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (CachingEventHandler * __this, IAsyncResult * result));
}
