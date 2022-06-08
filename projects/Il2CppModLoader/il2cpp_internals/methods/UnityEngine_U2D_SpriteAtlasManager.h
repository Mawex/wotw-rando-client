using namespace app;

namespace app::methods::UnityEngine::U2D::SpriteAtlasManager {
IL2CPP_REGISTER_METHOD(0x02C6FEF0, bool, RequestAtlas, (String * tag));
IL2CPP_REGISTER_METHOD(0x02C70150, void, add_atlasRegistered, (Action_1_UnityEngine_U2D_SpriteAtlas_ * value));
IL2CPP_REGISTER_METHOD(0x02C70290, void, remove_atlasRegistered, (Action_1_UnityEngine_U2D_SpriteAtlas_ * value));
IL2CPP_REGISTER_METHOD(0x02C703D0, void, PostRegisteredAtlas, (SpriteAtlas * spriteAtlas));
IL2CPP_REGISTER_METHOD(0x02C704C0, void, Register, (SpriteAtlas * spriteAtlas));
IL2CPP_REGISTER_METHODINFO(0x04730818, SpriteAtlasManager_Register__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02C70510, void, __cctor, (MethodInfo * method));
}
