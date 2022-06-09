#include <interception_macros.h>

namespace app::methods::AkTriangleArray {
IL2CPP_REGISTER_METHOD(0x027000B0, void, __ctor, (app::AkTriangleArray * this_ptr, int32_t count));
IL2CPP_REGISTER_METHOD(0x02700140, int32_t, get_StructureSize, (app::AkTriangleArray * this_ptr));
IL2CPP_REGISTER_METHOD(0x027001D0, void, DefaultConstructAtIntPtr, (app::AkTriangleArray * this_ptr, app::void * address));
IL2CPP_REGISTER_METHOD(0x02700270, AkTriangle *, CreateNewReferenceFromIntPtr, (app::AkTriangleArray * this_ptr, app::void * address));
IL2CPP_REGISTER_METHOD(0x027003C0, void, CloneIntoReferenceFromIntPtr, (app::AkTriangleArray * this_ptr, app::void * address, app::AkTriangle * other));
}
