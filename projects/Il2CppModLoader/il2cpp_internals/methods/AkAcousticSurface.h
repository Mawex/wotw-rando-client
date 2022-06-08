#include <interception_macros.h>

namespace app::methods::AkAcousticSurface {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkAcousticSurface * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026C3FA0, void *, getCPtr, (AkAcousticSurface * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkAcousticSurface * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026C4030, void, Finalize, (AkAcousticSurface * __this));
IL2CPP_REGISTER_METHOD(0x026C40B0, void, Dispose, (AkAcousticSurface * __this));
IL2CPP_REGISTER_METHOD(0x026C42C0, void, __ctor, (AkAcousticSurface * __this));
IL2CPP_REGISTER_METHOD(0x026C43E0, void, set_textureID, (AkAcousticSurface * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C4510, uint32_t, get_textureID, (AkAcousticSurface * __this));
IL2CPP_REGISTER_METHOD(0x026C4630, void, set_reflectorChannelMask, (AkAcousticSurface * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026C4760, uint32_t, get_reflectorChannelMask, (AkAcousticSurface * __this));
IL2CPP_REGISTER_METHOD(0x026C4880, void, set_strName, (AkAcousticSurface * __this, String * value));
IL2CPP_REGISTER_METHOD(0x026C4A80, String *, get_strName, (AkAcousticSurface * __this));
IL2CPP_REGISTER_METHOD(0x026C4BD0, void, Clear, (AkAcousticSurface * __this));
IL2CPP_REGISTER_METHOD(0x026C4C70, void, DeleteName, (AkAcousticSurface * __this));
IL2CPP_REGISTER_METHOD(0x026C4D90, int32_t, GetSizeOf, ());
IL2CPP_REGISTER_METHOD(0x026C4E20, void, Clone, (AkAcousticSurface * __this, AkAcousticSurface * other));
}
