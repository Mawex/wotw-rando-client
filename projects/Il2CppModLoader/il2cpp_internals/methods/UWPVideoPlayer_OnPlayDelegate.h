#include <interception_macros.h>

namespace app::methods::UWPVideoPlayer_OnPlayDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UWPVideoPlayer_OnPlayDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (UWPVideoPlayer_OnPlayDelegate * __this, String * filename));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (UWPVideoPlayer_OnPlayDelegate * __this, String * filename, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UWPVideoPlayer_OnPlayDelegate * __this, IAsyncResult * result));
}
