#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CageStructureTool_Face {
    IL2CPP_REGISTER_METHOD(0x0167F990, void, ctor, (app::CageStructureTool_Face * this_ptr, app::List_1_System_Int32_ * vertices, int32_t id))
    IL2CPP_REGISTER_METHOD(0x0167FD20, int32_t, GetVertexIndexAtWrappedIndex, (app::CageStructureTool_Face * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x0167FDD0, int32_t, get_FaceHash, (app::CageStructureTool_Face * this_ptr))
}
