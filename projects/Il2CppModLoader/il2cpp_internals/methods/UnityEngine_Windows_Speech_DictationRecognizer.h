using namespace app;

namespace app::methods::UnityEngine::Windows::Speech::DictationRecognizer {
IL2CPP_REGISTER_METHOD(0x02C79AB0, void, Destroy, (void * self));
IL2CPP_REGISTER_METHOD(0x02C79B00, void, DestroyThreaded, (void * self));
IL2CPP_REGISTER_METHOD(0x02C79B50, void, Finalize, (DictationRecognizer * __this));
IL2CPP_REGISTER_METHOD(0x02C79C90, void, Dispose, (DictationRecognizer * __this));
IL2CPP_REGISTER_METHOD(0x02C79D90, void, DictationRecognizer_InvokeHypothesisGeneratedEvent, (DictationRecognizer * __this, String * keyword));
IL2CPP_REGISTER_METHOD(0x02C79DB0, void, DictationRecognizer_InvokeResultGeneratedEvent, (DictationRecognizer * __this, String * keyword, ConfidenceLevel__Enum minimumConfidence));
IL2CPP_REGISTER_METHOD(0x02C79DD0, void, DictationRecognizer_InvokeCompletedEvent, (DictationRecognizer * __this, DictationCompletionCause__Enum cause));
IL2CPP_REGISTER_METHOD(0x02C79DF0, void, DictationRecognizer_InvokeErrorEvent, (DictationRecognizer * __this, String * error, int32_t hresult));
}
