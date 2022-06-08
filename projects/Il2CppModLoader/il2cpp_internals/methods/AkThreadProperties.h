#include <interception_macros.h>

namespace app::methods::AkThreadProperties {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkThreadProperties * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026FD1D0, void *, getCPtr, (AkThreadProperties * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkThreadProperties * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026FD260, void, Finalize, (AkThreadProperties * __this));
IL2CPP_REGISTER_METHOD(0x026FD2E0, void, Dispose, (AkThreadProperties * __this));
IL2CPP_REGISTER_METHOD(0x026FD4F0, void, set_nPriority, (AkThreadProperties * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x026FD620, int32_t, get_nPriority, (AkThreadProperties * __this));
IL2CPP_REGISTER_METHOD(0x026FD740, void, set_dwAffinityMask, (AkThreadProperties * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026FD870, uint32_t, get_dwAffinityMask, (AkThreadProperties * __this));
IL2CPP_REGISTER_METHOD(0x026FD990, void, set_uStackSize, (AkThreadProperties * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026FDAC0, uint32_t, get_uStackSize, (AkThreadProperties * __this));
IL2CPP_REGISTER_METHOD(0x026FDBE0, void, __ctor, (AkThreadProperties * __this));
}
