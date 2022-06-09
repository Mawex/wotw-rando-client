#include <interception_macros.h>

namespace app::methods::UnityEngine_Windows_Speech::DictationRecognizer_DictationResultDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::DictationRecognizer_DictationResultDelegate * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, (app::DictationRecognizer_DictationResultDelegate * this_ptr, app::String * text, app::ConfidenceLevel__Enum confidence));
IL2CPP_REGISTER_METHOD(0x02C79FA0, IAsyncResult *, BeginInvoke, (app::DictationRecognizer_DictationResultDelegate * this_ptr, app::String * text, app::ConfidenceLevel__Enum confidence, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DictationRecognizer_DictationResultDelegate * this_ptr, app::IAsyncResult * result));
}
