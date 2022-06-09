#include <interception_macros.h>

namespace app::methods::SkinningEdge {
    IL2CPP_REGISTER_METHOD(0x006BE0D0, SkinningEdge_SkinningCapsule*, GetSkinningCapsule, (app::SkinningEdge * this_ptr, app::UberShaderModifier* sprite));
    IL2CPP_REGISTER_METHOD(0x006BE320, SkinningEdge_SkinningCapsule*, AddSkinningCapsule, (app::SkinningEdge * this_ptr, app::UberShaderModifier* sprite));
    IL2CPP_REGISTER_METHOD(0x006BE4A0, void, RemoveSkinningCapsule, (app::SkinningEdge * this_ptr, app::UberShaderModifier* sprite));
    IL2CPP_REGISTER_METHOD(0x006BE710, void, __ctor, (app::SkinningEdge * this_ptr));
} // namespace app::methods::SkinningEdge
