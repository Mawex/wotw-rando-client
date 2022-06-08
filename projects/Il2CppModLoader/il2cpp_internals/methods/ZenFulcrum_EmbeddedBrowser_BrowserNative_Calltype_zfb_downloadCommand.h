#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_downloadCommand {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (BrowserNative_Calltype_zfb_downloadCommand * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C78C90, void, Invoke, (BrowserNative_Calltype_zfb_downloadCommand * __this, int32_t id, int32_t downloadId, BrowserNative_DownloadAction__Enum command, String * fileName));
IL2CPP_REGISTER_METHOD(0x01C79070, IAsyncResult *, BeginInvoke, (BrowserNative_Calltype_zfb_downloadCommand * __this, int32_t id, int32_t downloadId, BrowserNative_DownloadAction__Enum command, String * fileName, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (BrowserNative_Calltype_zfb_downloadCommand * __this, IAsyncResult * result));
}
