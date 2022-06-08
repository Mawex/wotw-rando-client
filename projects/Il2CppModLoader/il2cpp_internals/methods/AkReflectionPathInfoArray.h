using namespace app;

namespace app::methods::AkReflectionPathInfoArray {
IL2CPP_REGISTER_METHOD(0x01894BF0, void, __ctor, (AkReflectionPathInfoArray * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x01894C80, int32_t, get_StructureSize, (AkReflectionPathInfoArray * __this));
IL2CPP_REGISTER_METHOD(0x01894D10, AkReflectionPathInfo *, CreateNewReferenceFromIntPtr, (AkReflectionPathInfoArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x01894E60, void, CloneIntoReferenceFromIntPtr, (AkReflectionPathInfoArray * __this, void * address, AkReflectionPathInfo * other));
}
