using namespace app;

namespace app::methods::AkAcousticSurfaceArray {
IL2CPP_REGISTER_METHOD(0x026C4F40, void, __ctor, (AkAcousticSurfaceArray * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x026C4FD0, int32_t, get_StructureSize, (AkAcousticSurfaceArray * __this));
IL2CPP_REGISTER_METHOD(0x026C5060, void, DefaultConstructAtIntPtr, (AkAcousticSurfaceArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x026C5100, AkAcousticSurface *, CreateNewReferenceFromIntPtr, (AkAcousticSurfaceArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x026C5250, void, CloneIntoReferenceFromIntPtr, (AkAcousticSurfaceArray * __this, void * address, AkAcousticSurface * other));
}
