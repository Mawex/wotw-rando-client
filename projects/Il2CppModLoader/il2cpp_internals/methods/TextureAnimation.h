#include <interception_macros.h>

namespace app::methods::TextureAnimation {
IL2CPP_REGISTER_METHOD(0x010E90B0, float, get_Duration, (TextureAnimation * __this));
IL2CPP_REGISTER_METHOD(0x010E9140, float, TimeToFrame, (TextureAnimation * __this, float time));
IL2CPP_REGISTER_METHOD(0x010E9150, float, FrameToTime, (TextureAnimation * __this, float frame));
IL2CPP_REGISTER_METHOD(0x010E9160, AtlasSpriteTexture *, GetTextureAtTime, (TextureAnimation * __this, float time, Atlas * * atlas));
IL2CPP_REGISTER_METHOD(0x010E9170, AtlasSpriteTexture *, GetTextureAtIndex, (TextureAnimation * __this, float index, Atlas * * foundAtlas));
IL2CPP_REGISTER_METHOD(0x010E9390, AtlasSpriteTexture *, GetFrameForId, (TextureAnimation * __this, MoonGuid * guid, Atlas * * foundAtlas));
IL2CPP_REGISTER_METHOD(0x010E95E0, void, SortAnimationFrames, (TextureAnimation * __this));
IL2CPP_REGISTER_METHOD(0x010E9850, void, AddFrameForPlatform, (TextureAnimation * __this, AtlasSpriteTexture * frame, Atlas * atlas, UberAtlassingPlatform__Enum platform));
IL2CPP_REGISTER_METHOD(0x010E9960, void, __ctor, (TextureAnimation * __this));
}
