#include <interception_macros.h>

namespace app::methods::Moon::CageTextureMaker {
IL2CPP_REGISTER_METHOD(0x00CC0780, Material *, get_baseMaterial, ());
IL2CPP_REGISTER_METHOD(0x00CC0980, Material *, get_strokeMaterial, ());
IL2CPP_REGISTER_METHOD(0x00CC0B80, Mesh *, get_QuadMesh, ());
IL2CPP_REGISTER_METHOD(0x00CC1150, Texture2D *, CreateTexture, (app::Bounds bounds, app::Mesh * mesh, app::Transform * cage_structure_transform));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::CageTextureMaker * this_ptr));
}
