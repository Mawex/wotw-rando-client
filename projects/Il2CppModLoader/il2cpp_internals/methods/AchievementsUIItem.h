using namespace app;

namespace app::methods::AchievementsUIItem {
IL2CPP_REGISTER_METHOD(0x004BE060, void, Start, (AchievementsUIItem * __this));
IL2CPP_REGISTER_METHOD(0x004BE1E0, void, OnEnable, (AchievementsUIItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (AchievementsUIItem * __this));
IL2CPP_REGISTER_METHOD(0x004BE320, void, ValidateLock, (AchievementsUIItem * __this));
IL2CPP_REGISTER_METHOD(0x004BE400, bool, IsAchievementUnlocked, (AchievementsUIItem * __this, String * playFabId));
IL2CPP_REGISTER_METHOD(0x004BE690, bool, IsUnlocked, (AchievementsUIItem * __this));
IL2CPP_REGISTER_METHOD(0x004BE770, void, UnclockAchievement, (AchievementsUIItem * __this, bool unlock));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetAchievementAsset, (AchievementsUIItem * __this, AchievementAsset * asset));
IL2CPP_REGISTER_METHOD(0x004BEBE0, void, SetIconTexture, (AchievementsUIItem * __this, Texture * texture));
IL2CPP_REGISTER_METHOD(0x004B4010, void, AssignIconTextures, (AchievementsUIItem * __this, Texture * locked, Texture * unlocked));
IL2CPP_REGISTER_METHOD(0x004BEC90, void, SetIconColor, (AchievementsUIItem * __this, Color color));
IL2CPP_REGISTER_METHOD(0x004BED80, void, SetNameTextProvider, (AchievementsUIItem * __this, MessageProvider * messageProvider));
IL2CPP_REGISTER_METHOD(0x004BEE60, void, SetDescriptionTextProvider, (AchievementsUIItem * __this, MessageProvider * messageProvider));
IL2CPP_REGISTER_METHOD(0x004BEF40, void, AssignComponents, (AchievementsUIItem * __this));
IL2CPP_REGISTER_METHOD(0x004BF3A0, void, SetTextRenderOrder, (AchievementsUIItem * __this, float zOffset));
IL2CPP_REGISTER_METHOD(0x004BF4E0, void, __ctor, (AchievementsUIItem * __this));
}
