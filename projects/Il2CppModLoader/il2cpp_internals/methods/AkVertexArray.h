#include <interception_macros.h>

namespace app::methods::AkVertexArray {
IL2CPP_REGISTER_METHOD(0x027028B0, void, __ctor, (AkVertexArray * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x02702940, int32_t, get_StructureSize, (AkVertexArray * __this));
IL2CPP_REGISTER_METHOD(0x027029D0, void, DefaultConstructAtIntPtr, (AkVertexArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x02702A70, AkVertex *, CreateNewReferenceFromIntPtr, (AkVertexArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x02702BC0, void, CloneIntoReferenceFromIntPtr, (AkVertexArray * __this, void * address, AkVertex * other));
}
