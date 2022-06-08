using namespace app;

namespace app::methods::AkExternalSourceInfoArray {
IL2CPP_REGISTER_METHOD(0x026E5F20, void, __ctor, (AkExternalSourceInfoArray * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x026E5FB0, int32_t, get_StructureSize, (AkExternalSourceInfoArray * __this));
IL2CPP_REGISTER_METHOD(0x026E6040, void, DefaultConstructAtIntPtr, (AkExternalSourceInfoArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x026E60E0, void, ReleaseAllocatedMemoryFromReferenceAtIntPtr, (AkExternalSourceInfoArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x026E6180, AkExternalSourceInfo *, CreateNewReferenceFromIntPtr, (AkExternalSourceInfoArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x026E62D0, void, CloneIntoReferenceFromIntPtr, (AkExternalSourceInfoArray * __this, void * address, AkExternalSourceInfo * other));
}
