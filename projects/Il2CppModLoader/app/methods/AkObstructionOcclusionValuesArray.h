#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkObstructionOcclusionValuesArray {
    IL2CPP_REGISTER_METHOD(0x01886020, void, ctor, (app::AkObstructionOcclusionValuesArray * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x018860B0, int32_t, get_StructureSize, (app::AkObstructionOcclusionValuesArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01886140, void, DefaultConstructAtIntPtr, (app::AkObstructionOcclusionValuesArray * this_ptr, void * address))
    IL2CPP_REGISTER_METHOD(0x018861E0, app::AkObstructionOcclusionValues *, CreateNewReferenceFromIntPtr, (app::AkObstructionOcclusionValuesArray * this_ptr, void * address))
    IL2CPP_REGISTER_METHOD(0x01886330, void, CloneIntoReferenceFromIntPtr, (app::AkObstructionOcclusionValuesArray * this_ptr, void * address, app::AkObstructionOcclusionValues * other))
}
