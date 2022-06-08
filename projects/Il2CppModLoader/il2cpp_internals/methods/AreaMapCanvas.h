#include <interception_macros.h>

namespace app::methods::AreaMapCanvas {
IL2CPP_REGISTER_METHOD(0x00508FE0, bool, get_WantsToUpdateMask, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x00508FF0, void, set_WantsToUpdateMask, (AreaMapCanvas * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00509000, void, Awake, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x005090C0, void, Init, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x00509920, void, ResetMap, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x00509DD0, Texture *, get_WorldMapTexture, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x00509DF0, Bounds, get_Bounds, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x00509E30, CageStructureTool *, get_CageStructureTool, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x00509E50, Vector2, get_WorldMapTextureSize, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x00509EE0, Color, GetColor, (AreaMapCanvas * __this, WorldMapAreaState__Enum worldState));
IL2CPP_REGISTER_METHOD(0x00509FF0, void, GenerateAreaMaskTexture, (AreaMapCanvas * __this, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0050A940, void, Update, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x0050AAF0, void, UpdateAreaMaskTextureA, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x0050ABC0, void, UpdateAreaMaskTextureB, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x0050AC90, void, SetFade, (AreaMapCanvas * __this, float fade));
IL2CPP_REGISTER_METHOD(0x0050AD50, void, OnDestroy, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x0050AD50, void, DestroyResources, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x0050AEE0, void, BlurTextures, (AreaMapCanvas * __this, RenderTexture * originalTexture, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0050B250, void, ReleaseAreaMaskTextureB, (AreaMapCanvas * __this));
IL2CPP_REGISTER_METHOD(0x0050B260, void, __ctor, (AreaMapCanvas * __this));
}
