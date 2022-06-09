#include <interception_macros.h>

namespace app::methods::UnityEngine_Windows_Speech::PhraseRecognizer {
IL2CPP_REGISTER_METHOD(0x02C7A330, void, Destroy, (app::void * recognizer));
IL2CPP_REGISTER_METHOD(0x02C7A380, void, DestroyThreaded, (app::void * recognizer));
IL2CPP_REGISTER_METHOD(0x02C7A3D0, void, Finalize, (app::PhraseRecognizer * this_ptr));
IL2CPP_REGISTER_METHOD(0x02C7A510, void, Dispose, (app::PhraseRecognizer * this_ptr));
IL2CPP_REGISTER_METHOD(0x02C7A610, void, InvokePhraseRecognizedEvent, (app::PhraseRecognizer * this_ptr, app::String * text, app::ConfidenceLevel__Enum confidence, app::SemanticMeaning__Array * semantic_meanings, int64_t phrase_start_file_time, int64_t phrase_duration_ticks));
IL2CPP_REGISTER_METHOD(0x02C7A770, SemanticMeaning__Array *, MarshalSemanticMeaning, (app::void * keys, app::void * values, app::void * value_sizes, int32_t value_count));
}
