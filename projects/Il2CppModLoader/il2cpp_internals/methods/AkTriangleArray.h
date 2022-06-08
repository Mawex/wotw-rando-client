using namespace app;

namespace app::methods::AkTriangleArray {
IL2CPP_REGISTER_METHOD(0x027000B0, void, __ctor, (AkTriangleArray * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x02700140, int32_t, get_StructureSize, (AkTriangleArray * __this));
IL2CPP_REGISTER_METHOD(0x027001D0, void, DefaultConstructAtIntPtr, (AkTriangleArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x02700270, AkTriangle *, CreateNewReferenceFromIntPtr, (AkTriangleArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x027003C0, void, CloneIntoReferenceFromIntPtr, (AkTriangleArray * __this, void * address, AkTriangle * other));
}
