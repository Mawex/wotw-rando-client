using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_DisplayDialogFunc {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_DisplayDialogFunc * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DCCB40, void, Invoke, (BrowserNative_DisplayDialogFunc * __this, int32_t browserId, BrowserNative_DialogType__Enum dialogType, void * dialogText, void * initialPromptText, void * sourceURL));
IL2CPP_REGISTER_METHOD(0x01DCCFE0, IAsyncResult *, BeginInvoke, (BrowserNative_DisplayDialogFunc * __this, int32_t browserId, BrowserNative_DialogType__Enum dialogType, void * dialogText, void * initialPromptText, void * sourceURL, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_DisplayDialogFunc * __this, IAsyncResult * result));
}
