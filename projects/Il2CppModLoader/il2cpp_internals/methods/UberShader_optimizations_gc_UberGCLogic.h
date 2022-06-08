#include <interception_macros.h>

namespace app::methods::UberShader::optimizations::gc::UberGCLogic {
IL2CPP_REGISTER_METHOD(0x01902550, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01902810, void, OnFader, (UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum trigger));
IL2CPP_REGISTER_METHOD(0x01902960, int32_t, NumForcedCleanupsAfterFaderType, (UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum faderType));
IL2CPP_REGISTER_METHOD(0x01902A30, void, OnSceneUnload, ());
IL2CPP_REGISTER_METHOD(0x01902B10, void, UpdateMemoryProbe, (UberGCLogic_MemoryProbeType__Enum type, uint64_t usedBytes));
IL2CPP_REGISTER_METHOD(0x01902D20, void, ReportRunCleanup, (UberGCLogic_CleanupType__Enum type));
IL2CPP_REGISTER_METHOD(0x01902FE0, bool, ShouldGrowGcHeap, (uint64_t gcUsedBefore, uint64_t gcHeapBefore, uint64_t gcUsedAfter, uint64_t gcHeapAfter));
IL2CPP_REGISTER_METHOD(0x01903130, bool, ShouldRunCleanup, (UberGCLogic_CleanupType__Enum type, UberGCLogic_CleanupTrigger__Enum trigger, UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum source));
IL2CPP_REGISTER_METHOD(0x019038C0, int32_t, GetDesiredProactiveUnloadJobPriority, ());
IL2CPP_REGISTER_METHOD(0x01903A30, float, GetMemoryProbeMB, (UberGCLogic_MemoryProbeType__Enum type));
IL2CPP_REGISTER_METHOD(0x01903B00, float, SecondsSinceLastCleanup, (UberGCLogic_CleanupType__Enum type));
IL2CPP_REGISTER_METHOD(0x01903C20, int32_t, SceneUnloadsSinceLastCleanup, (UberGCLogic_CleanupType__Enum type));
IL2CPP_REGISTER_METHOD(0x01903CF0, int32_t, FadersDoneSinceLastCleanup, (UberGCLogic_CleanupType__Enum type));
IL2CPP_REGISTER_METHOD(0x01903DC0, float, SecondsSinceLastCheck, (UberGCLogic_CleanupType__Enum type, UberGCLogic_CleanupTrigger__Enum trigger));
IL2CPP_REGISTER_METHOD(0x01903F10, float, SecondsSinceLastResourceCollect, ());
IL2CPP_REGISTER_METHOD(0x01903FF0, int32_t, SceneUnloadsSinceLastResourceCollect, ());
IL2CPP_REGISTER_METHOD(0x019040D0, int32_t, FadersSinceLastResourceCollect, ());
IL2CPP_REGISTER_METHOD(0x019041B0, bool, ShouldRunProactiveCleanupOnBlack, (UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum source));
IL2CPP_REGISTER_METHOD(0x01904620, bool, get_ShouldRunPanicCleanupActiveGameplay, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldRunPanicCleanupFromHint, ());
IL2CPP_REGISTER_METHOD(0x01904920, bool, get_ShouldRunGcActiveGameplay, ());
IL2CPP_REGISTER_METHOD(0x01904A90, bool, ShouldRunGcOnBlack, (UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum source));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldRunGcFromHint, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UberGCLogic * __this));
}
