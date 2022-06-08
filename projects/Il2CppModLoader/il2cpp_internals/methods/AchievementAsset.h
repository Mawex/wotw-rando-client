#include <interception_macros.h>

namespace app::methods::AchievementAsset {
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Name, (AchievementAsset * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_PlayFabIdentifier, (AchievementAsset * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Texture *, get_Icon, (AchievementAsset * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Texture *, get_LockedIcon, (AchievementAsset * __this));
IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Hidden, (AchievementAsset * __this));
IL2CPP_REGISTER_METHOD(0x004B4010, void, SetIcons, (AchievementAsset * __this, Texture * icon, Texture * lockedIcon));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, SetIdentifier, (AchievementAsset * __this, String * identifier));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (AchievementAsset * __this));
}
