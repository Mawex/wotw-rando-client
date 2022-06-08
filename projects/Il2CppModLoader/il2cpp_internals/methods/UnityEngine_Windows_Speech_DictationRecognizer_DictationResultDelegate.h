#include <interception_macros.h>

namespace app::methods::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (DictationRecognizer_DictationResultDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, (DictationRecognizer_DictationResultDelegate * __this, String * text, ConfidenceLevel__Enum confidence));
IL2CPP_REGISTER_METHOD(0x02C79FA0, IAsyncResult *, BeginInvoke, (DictationRecognizer_DictationResultDelegate * __this, String * text, ConfidenceLevel__Enum confidence, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (DictationRecognizer_DictationResultDelegate * __this, IAsyncResult * result));
}
