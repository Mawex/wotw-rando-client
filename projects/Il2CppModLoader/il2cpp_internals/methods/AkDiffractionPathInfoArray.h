#include <interception_macros.h>

namespace app::methods::AkDiffractionPathInfoArray {
IL2CPP_REGISTER_METHOD(0x026E0B10, void, __ctor, (AkDiffractionPathInfoArray * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x026E0BA0, int32_t, get_StructureSize, (AkDiffractionPathInfoArray * __this));
IL2CPP_REGISTER_METHOD(0x026E0C30, AkDiffractionPathInfo *, CreateNewReferenceFromIntPtr, (AkDiffractionPathInfoArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x026E0D80, void, CloneIntoReferenceFromIntPtr, (AkDiffractionPathInfoArray * __this, void * address, AkDiffractionPathInfo * other));
}
