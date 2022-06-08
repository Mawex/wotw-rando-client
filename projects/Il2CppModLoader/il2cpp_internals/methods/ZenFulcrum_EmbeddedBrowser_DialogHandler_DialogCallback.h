#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::DialogHandler_DialogCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DialogHandler_DialogCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01DD5590, void, Invoke, (DialogHandler_DialogCallback * __this, bool affirm, String * text1, String * text2));
IL2CPP_REGISTER_METHOD(0x01DD5920, IAsyncResult *, BeginInvoke, (DialogHandler_DialogCallback * __this, bool affirm, String * text1, String * text2, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DialogHandler_DialogCallback * __this, IAsyncResult * result));
}
