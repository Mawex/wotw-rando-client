#include <interception_macros.h>

namespace app::methods::AkVertexArray {
    IL2CPP_REGISTER_METHOD(0x027028B0, void, __ctor, (app::AkVertexArray * this_ptr, int32_t count));
    IL2CPP_REGISTER_METHOD(0x02702940, int32_t, get_StructureSize, (app::AkVertexArray * this_ptr));
    IL2CPP_REGISTER_METHOD(0x027029D0, void, DefaultConstructAtIntPtr, (app::AkVertexArray * this_ptr, app::void* address));
    IL2CPP_REGISTER_METHOD(0x02702A70, AkVertex*, CreateNewReferenceFromIntPtr, (app::AkVertexArray * this_ptr, app::void* address));
    IL2CPP_REGISTER_METHOD(0x02702BC0, void, CloneIntoReferenceFromIntPtr, (app::AkVertexArray * this_ptr, app::void* address, app::AkVertex* other));
} // namespace app::methods::AkVertexArray
