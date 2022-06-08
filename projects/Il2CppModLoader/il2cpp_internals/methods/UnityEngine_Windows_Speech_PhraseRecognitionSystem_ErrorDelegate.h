using namespace app;

namespace app::methods::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PhraseRecognitionSystem_ErrorDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (PhraseRecognitionSystem_ErrorDelegate * __this, SpeechError__Enum errorCode));
IL2CPP_REGISTER_METHOD(0x02C7A1B0, IAsyncResult *, BeginInvoke, (PhraseRecognitionSystem_ErrorDelegate * __this, SpeechError__Enum errorCode, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (PhraseRecognitionSystem_ErrorDelegate * __this, IAsyncResult * result));
}
