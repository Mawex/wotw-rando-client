#include <interception_macros.h>

namespace app::methods::AkTaskContext {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkTaskContext * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026FCB40, void *, getCPtr, (AkTaskContext * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkTaskContext * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026FCBD0, void, Finalize, (AkTaskContext * __this));
IL2CPP_REGISTER_METHOD(0x026FCC50, void, Dispose, (AkTaskContext * __this));
IL2CPP_REGISTER_METHOD(0x026FCE60, void, set_uIdxThread, (AkTaskContext * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026FCF90, uint32_t, get_uIdxThread, (AkTaskContext * __this));
IL2CPP_REGISTER_METHOD(0x026FD0B0, void, __ctor, (AkTaskContext * __this));
}
