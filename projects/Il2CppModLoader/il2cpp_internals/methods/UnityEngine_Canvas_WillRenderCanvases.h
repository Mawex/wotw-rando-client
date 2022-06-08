#include <interception_macros.h>

namespace app::methods::UnityEngine::Canvas_WillRenderCanvases {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (Canvas_WillRenderCanvases * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (Canvas_WillRenderCanvases * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (Canvas_WillRenderCanvases * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (Canvas_WillRenderCanvases * __this, IAsyncResult * result));
}
