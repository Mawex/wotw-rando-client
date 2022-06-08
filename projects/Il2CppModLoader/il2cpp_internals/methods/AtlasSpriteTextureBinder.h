using namespace app;

namespace app::methods::AtlasSpriteTextureBinder {
IL2CPP_REGISTER_METHOD(0x00845430, void, OnPoolSpawned, (AtlasSpriteTextureBinder * __this));
IL2CPP_REGISTER_METHOD(0x00845440, void, __ctor, (AtlasSpriteTextureBinder * __this, AnimationMeshingSettings * settings, bool spriceSpaceuvs, Mesh * mesh));
IL2CPP_REGISTER_METHOD(0x008455A0, void, AllocateBufferForSettings, (AtlasSpriteTextureBinder * __this, AnimationMeshingSettings * settings));
IL2CPP_REGISTER_METHOD(0x008458C0, void, UpdateSettings, (AtlasSpriteTextureBinder * __this, AnimationMeshingSettings * settings));
IL2CPP_REGISTER_METHOD(0x008458E0, void, UpdateSpriceSpaceUv, (AtlasSpriteTextureBinder * __this, bool correctUvs));
IL2CPP_REGISTER_METHOD(0x008458F0, void, GenerateCorrectUvBuffer, (AtlasSpriteTextureBinder * __this));
IL2CPP_REGISTER_METHOD(0x00845AB0, void, BindTo, (AtlasSpriteTextureBinder * __this, MeshFilter * filter, Renderer * renderer, Atlas * atlas, UberScreenMode__Enum mode, AtlasSpriteTexture * texture));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitProperties, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00846260, void, ApplyToMesh, (AtlasSpriteTextureBinder * __this, Atlas * atlas, AtlasSpriteTexture * texture));
IL2CPP_REGISTER_METHOD(0x00846780, void, __cctor, (MethodInfo * method));
}
