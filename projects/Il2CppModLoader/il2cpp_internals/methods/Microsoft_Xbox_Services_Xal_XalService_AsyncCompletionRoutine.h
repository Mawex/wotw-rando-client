#include <interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_AsyncCompletionRoutine {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XalService_AsyncCompletionRoutine * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (XalService_AsyncCompletionRoutine * __this, void * asyncBlock));
IL2CPP_REGISTER_METHOD(0x0143D080, IAsyncResult *, BeginInvoke, (XalService_AsyncCompletionRoutine * __this, void * asyncBlock, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XalService_AsyncCompletionRoutine * __this, IAsyncResult * result));
}
