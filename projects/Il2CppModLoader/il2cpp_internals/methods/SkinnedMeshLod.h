#include <interception_macros.h>

namespace app::methods::SkinnedMeshLod {
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_CurrentLevel, (SkinnedMeshLod * __this));
IL2CPP_REGISTER_METHOD(0x006BD280, void, set_CurrentLevel, (SkinnedMeshLod * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x006BD290, void, OnValidate, (SkinnedMeshLod * __this));
IL2CPP_REGISTER_METHOD(0x006BD290, void, CollectComponents, (SkinnedMeshLod * __this));
IL2CPP_REGISTER_METHOD(0x006BD390, void, SetLodLevel, (SkinnedMeshLod * __this, int32_t level));
IL2CPP_REGISTER_METHOD(0x006BD6A0, SkinnedMeshRenderer *, GetRendererByName, (SkinnedMeshLod * __this, SkinnedMeshRenderer__Array * renderers, String * name));
IL2CPP_REGISTER_METHOD(0x006BD760, void, UpdateMeshRenderer, (SkinnedMeshLod * __this, SkinnedMeshRenderer * newMeshRenderer, SkinnedMeshRenderer * activeRenderer));
IL2CPP_REGISTER_METHOD(0x006BDE70, void, __ctor, (SkinnedMeshLod * __this));
}
