#include <interception_macros.h>

namespace app::methods::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DictationRecognizer_DictationHypothesisDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (DictationRecognizer_DictationHypothesisDelegate * __this, String * text));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (DictationRecognizer_DictationHypothesisDelegate * __this, String * text, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DictationRecognizer_DictationHypothesisDelegate * __this, IAsyncResult * result));
}
