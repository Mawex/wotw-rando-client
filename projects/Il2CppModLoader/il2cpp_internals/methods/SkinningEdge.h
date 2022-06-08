using namespace app;

namespace app::methods::SkinningEdge {
IL2CPP_REGISTER_METHOD(0x006BE0D0, SkinningEdge_SkinningCapsule *, GetSkinningCapsule, (SkinningEdge * __this, UberShaderModifier * sprite));
IL2CPP_REGISTER_METHOD(0x006BE320, SkinningEdge_SkinningCapsule *, AddSkinningCapsule, (SkinningEdge * __this, UberShaderModifier * sprite));
IL2CPP_REGISTER_METHOD(0x006BE4A0, void, RemoveSkinningCapsule, (SkinningEdge * __this, UberShaderModifier * sprite));
IL2CPP_REGISTER_METHOD(0x006BE710, void, __ctor, (SkinningEdge * __this));
}
