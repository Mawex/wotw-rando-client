#include <interception_macros.h>

namespace app::methods::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PhraseRecognizer_PhraseRecognizedDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (PhraseRecognizer_PhraseRecognizedDelegate * __this, PhraseRecognizedEventArgs args));
IL2CPP_REGISTER_METHOD(0x02C7A960, IAsyncResult *, BeginInvoke, (PhraseRecognizer_PhraseRecognizedDelegate * __this, PhraseRecognizedEventArgs args, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (PhraseRecognizer_PhraseRecognizedDelegate * __this, IAsyncResult * result));
}
