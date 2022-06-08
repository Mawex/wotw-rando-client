#include <interception_macros.h>

namespace app::methods::UnityEngine::Profiling::Memory::Experimental::MemoryProfiler {
IL2CPP_REGISTER_METHOD(0x029688E0, void, add_snapshotFinished, (Action_2_String_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x029689E0, void, remove_snapshotFinished, (Action_2_String_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x02968AE0, void, TakeSnapshotInternal, (String * path, uint32_t captureFlag));
IL2CPP_REGISTER_METHOD(0x02968B40, void, TakeSnapshot, (String * path, Action_2_String_Boolean_ * finishCallback, CaptureFlags__Enum captureFlags));
IL2CPP_REGISTER_METHOD(0x02968D50, Byte__Array *, PrepareMetadata, ());
IL2CPP_REGISTER_METHOD(0x02969330, int32_t, WriteIntToByteArray, (Byte__Array * array, int32_t offset, int32_t value));
IL2CPP_REGISTER_METHOD(0x029693E0, int32_t, WriteStringToByteArray, (Byte__Array * array, int32_t offset, String * value));
IL2CPP_REGISTER_METHOD(0x02969460, void, FinalizeSnapshot, (String * path, bool result));
}
