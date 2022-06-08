using namespace app;

namespace app::methods::UnityEngine::Windows::Speech::PhraseRecognizer {
IL2CPP_REGISTER_METHOD(0x02C7A330, void, Destroy, (void * recognizer));
IL2CPP_REGISTER_METHOD(0x02C7A380, void, DestroyThreaded, (void * recognizer));
IL2CPP_REGISTER_METHOD(0x02C7A3D0, void, Finalize, (PhraseRecognizer * __this));
IL2CPP_REGISTER_METHOD(0x02C7A510, void, Dispose, (PhraseRecognizer * __this));
IL2CPP_REGISTER_METHOD(0x02C7A610, void, InvokePhraseRecognizedEvent, (PhraseRecognizer * __this, String * text, ConfidenceLevel__Enum confidence, SemanticMeaning__Array * semanticMeanings, int64_t phraseStartFileTime, int64_t phraseDurationTicks));
IL2CPP_REGISTER_METHOD(0x02C7A770, SemanticMeaning__Array *, MarshalSemanticMeaning, (void * keys, void * values, void * valueSizes, int32_t valueCount));
}
