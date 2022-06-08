#include <interception_macros.h>

namespace app::methods::AkDeviceSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkDeviceSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026DD420, void *, getCPtr, (AkDeviceSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkDeviceSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026DD4B0, void, Finalize, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DD530, void, Dispose, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DD740, void, set_pIOMemory, (AkDeviceSettings * __this, void * value));
IL2CPP_REGISTER_METHOD(0x026DD870, void *, get_pIOMemory, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DD990, void, set_uIOMemorySize, (AkDeviceSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026DDAC0, uint32_t, get_uIOMemorySize, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DDBE0, void, set_uIOMemoryAlignment, (AkDeviceSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026DDD10, uint32_t, get_uIOMemoryAlignment, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DDE30, void, set_ePoolAttributes, (AkDeviceSettings * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x026DDF60, int32_t, get_ePoolAttributes, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DE080, void, set_uGranularity, (AkDeviceSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026DE1B0, uint32_t, get_uGranularity, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DE2D0, void, set_uSchedulerTypeFlags, (AkDeviceSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026DE400, uint32_t, get_uSchedulerTypeFlags, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DE520, void, set_threadProperties, (AkDeviceSettings * __this, AkThreadProperties * value));
IL2CPP_REGISTER_METHOD(0x026DE660, AkThreadProperties *, get_threadProperties, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DE870, void, set_fTargetAutoStmBufferLength, (AkDeviceSettings * __this, float value));
IL2CPP_REGISTER_METHOD(0x026DE9A0, float, get_fTargetAutoStmBufferLength, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DEAC0, void, set_uMaxConcurrentIO, (AkDeviceSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026DEBF0, uint32_t, get_uMaxConcurrentIO, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DED10, void, set_bUseStreamCache, (AkDeviceSettings * __this, bool value));
IL2CPP_REGISTER_METHOD(0x026DEE40, bool, get_bUseStreamCache, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DEF70, void, set_uMaxCachePinnedBytes, (AkDeviceSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026DF0A0, uint32_t, get_uMaxCachePinnedBytes, (AkDeviceSettings * __this));
IL2CPP_REGISTER_METHOD(0x026DF1C0, void, __ctor, (AkDeviceSettings * __this));
}
