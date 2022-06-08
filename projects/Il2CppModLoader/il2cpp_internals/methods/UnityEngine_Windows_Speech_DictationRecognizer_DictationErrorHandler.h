using namespace app;

namespace app::methods::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DictationRecognizer_DictationErrorHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, (DictationRecognizer_DictationErrorHandler * __this, String * error, int32_t hresult));
IL2CPP_REGISTER_METHOD(0x02C79ED0, IAsyncResult *, BeginInvoke, (DictationRecognizer_DictationErrorHandler * __this, String * error, int32_t hresult, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DictationRecognizer_DictationErrorHandler * __this, IAsyncResult * result));
}
