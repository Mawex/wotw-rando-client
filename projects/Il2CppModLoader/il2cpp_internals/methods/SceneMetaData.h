#include <interception_macros.h>

namespace app::methods::SceneMetaData {
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_SceneName, (SceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x00BAB260, String *, get_SceneGuid, (SceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x00BAB2C0, void, set_SceneGuid, (SceneMetaData * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00BAB460, Rect, get_SceneBounds, (SceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x00720040, String *, get_SceneSolidsTexturePath, (SceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x00A64240, String *, get_SceneTexturePath, (SceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Texture *, get_SolidsSceneTexture, (SceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Texture *, get_SceneTexture, (SceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x00BAB660, bool, get_CanBeLoaded, (SceneMetaData * __this));
IL2CPP_REGISTER_METHOD(0x00BAB750, bool, AnyPaddingBoundaryOverlaps, (SceneMetaData * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x00BAB9A0, bool, IsInsideSceneBounds, (SceneMetaData * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00BABAE0, bool, IsInsideSceneBounds, (SceneMetaData * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x00BABC40, bool, IsInsideSceneLoadingZone, (SceneMetaData * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x00BABDA0, bool, IsInsideSceneLoadingZone, (SceneMetaData * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x00BABED0, bool, IsInsideScenePaddingBounds, (SceneMetaData * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00BAC010, bool, IsInsideScenePaddingBounds, (SceneMetaData * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x00BAC170, void, CopySceneMetaData, (SceneMetaData * from, SceneMetaData * to));
IL2CPP_REGISTER_METHOD(0x00BAC260, void, __ctor, (SceneMetaData * __this));
}
