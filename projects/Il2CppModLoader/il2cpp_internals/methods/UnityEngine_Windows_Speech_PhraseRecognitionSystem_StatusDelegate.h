using namespace app;

namespace app::methods::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (PhraseRecognitionSystem_StatusDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (PhraseRecognitionSystem_StatusDelegate * __this, SpeechSystemStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x02C7A270, IAsyncResult *, BeginInvoke, (PhraseRecognitionSystem_StatusDelegate * __this, SpeechSystemStatus__Enum status, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (PhraseRecognitionSystem_StatusDelegate * __this, IAsyncResult * result));
}
