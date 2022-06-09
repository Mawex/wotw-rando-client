#include <interception_macros.h>

namespace app::methods::AkExternalSourceInfoArray {
IL2CPP_REGISTER_METHOD(0x026E5F20, void, __ctor, (app::AkExternalSourceInfoArray * this_ptr, int32_t count));
IL2CPP_REGISTER_METHOD(0x026E5FB0, int32_t, get_StructureSize, (app::AkExternalSourceInfoArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x026E6040, void, DefaultConstructAtIntPtr, (app::AkExternalSourceInfoArray * this_ptr, app::void * address));
IL2CPP_REGISTER_METHOD(0x026E60E0, void, ReleaseAllocatedMemoryFromReferenceAtIntPtr, (app::AkExternalSourceInfoArray * this_ptr, app::void * address));
IL2CPP_REGISTER_METHOD(0x026E6180, AkExternalSourceInfo *, CreateNewReferenceFromIntPtr, (app::AkExternalSourceInfoArray * this_ptr, app::void * address));
IL2CPP_REGISTER_METHOD(0x026E62D0, void, CloneIntoReferenceFromIntPtr, (app::AkExternalSourceInfoArray * this_ptr, app::void * address, app::AkExternalSourceInfo * other));
}
