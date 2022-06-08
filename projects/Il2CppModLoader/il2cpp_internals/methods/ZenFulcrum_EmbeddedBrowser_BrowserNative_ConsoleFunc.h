using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_ConsoleFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_ConsoleFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCC650, void, Invoke, (BrowserNative_ConsoleFunc * __this, int32_t browserId, String * message, String * source, int32_t line));
IL2CPP_REGISTER_METHOD(0x01DCCA50, IAsyncResult *, BeginInvoke, (BrowserNative_ConsoleFunc * __this, int32_t browserId, String * message, String * source, int32_t line, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_ConsoleFunc * __this, IAsyncResult * result));
}
