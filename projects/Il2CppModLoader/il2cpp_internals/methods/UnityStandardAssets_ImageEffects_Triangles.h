#include <interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::Triangles {
IL2CPP_REGISTER_METHOD(0x02D6A530, bool, HasMeshes, ());
IL2CPP_REGISTER_METHOD(0x02D6A6C0, void, Cleanup, ());
IL2CPP_REGISTER_METHOD(0x02D6A950, Mesh__Array *, GetMeshes, (int32_t totalWidth, int32_t totalHeight));
IL2CPP_REGISTER_METHOD(0x02D6ADB0, Mesh *, GetMesh, (int32_t triCount, int32_t triOffset, int32_t totalWidth, int32_t totalHeight));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Triangles * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
