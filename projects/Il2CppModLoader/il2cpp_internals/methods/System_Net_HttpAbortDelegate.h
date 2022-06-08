#include <interception_macros.h>

namespace app::methods::System::Net::HttpAbortDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (HttpAbortDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (HttpAbortDelegate * __this, HttpWebRequest * request, WebException * webException));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (HttpAbortDelegate * __this, HttpWebRequest * request, WebException * webException, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (HttpAbortDelegate * __this, IAsyncResult * result));
}
