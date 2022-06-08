using namespace app;

namespace app::methods::AkObstructionOcclusionValuesArray {
IL2CPP_REGISTER_METHOD(0x01886020, void, __ctor, (AkObstructionOcclusionValuesArray * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x018860B0, int32_t, get_StructureSize, (AkObstructionOcclusionValuesArray * __this));
IL2CPP_REGISTER_METHOD(0x01886140, void, DefaultConstructAtIntPtr, (AkObstructionOcclusionValuesArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x018861E0, AkObstructionOcclusionValues *, CreateNewReferenceFromIntPtr, (AkObstructionOcclusionValuesArray * __this, void * address));
IL2CPP_REGISTER_METHOD(0x01886330, void, CloneIntoReferenceFromIntPtr, (AkObstructionOcclusionValuesArray * __this, void * address, AkObstructionOcclusionValues * other));
}
