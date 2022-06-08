#include <interception_macros.h>

namespace app::methods::AkObjectInfoArray {
IL2CPP_REGISTER_METHOD(0x01885120, void, __ctor, (AkObjectInfoArray * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x018851B0, int32_t, get_StructureSize, (AkObjectInfoArray * __this));
IL2CPP_REGISTER_METHOD(0x01885240, void, DefaultConstructAtIntPtr, (AkObjectInfoArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x018852E0, AkObjectInfo *, CreateNewReferenceFromIntPtr, (AkObjectInfoArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x01885430, void, CloneIntoReferenceFromIntPtr, (AkObjectInfoArray * __this, void * address, AkObjectInfo * other));
}
