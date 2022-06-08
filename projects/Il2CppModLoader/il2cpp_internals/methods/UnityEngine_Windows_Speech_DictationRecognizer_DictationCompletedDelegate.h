using namespace app;

namespace app::methods::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DictationRecognizer_DictationCompletedDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (DictationRecognizer_DictationCompletedDelegate * __this, DictationCompletionCause__Enum cause));
IL2CPP_REGISTER_METHOD(0x02C79E10, IAsyncResult *, BeginInvoke, (DictationRecognizer_DictationCompletedDelegate * __this, DictationCompletionCause__Enum cause, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DictationRecognizer_DictationCompletedDelegate * __this, IAsyncResult * result));
}
