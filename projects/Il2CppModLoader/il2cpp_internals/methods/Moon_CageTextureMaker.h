#include <interception_macros.h>

namespace app::methods::Moon::CageTextureMaker {
IL2CPP_REGISTER_METHOD(0x00CC0780, Material *, get_baseMaterial, ());
IL2CPP_REGISTER_METHOD(0x00CC0980, Material *, get_strokeMaterial, ());
IL2CPP_REGISTER_METHOD(0x00CC0B80, Mesh *, get_QuadMesh, ());
IL2CPP_REGISTER_METHOD(0x00CC1150, Texture2D *, CreateTexture, (Bounds bounds, Mesh * mesh, Transform * cageStructureTransform));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CageTextureMaker * __this));
}
