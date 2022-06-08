using namespace app;

namespace app::methods::ZoneScalingData {
IL2CPP_REGISTER_METHOD(0x00F59020, Texture *, get_DisplayTexture, (ZoneScalingData * __this));
IL2CPP_REGISTER_METHOD(0x00F59150, int32_t, GetMonsterDifficulty, (ZoneScalingData * __this, EntityPlaceholderScalingData * enemy));
IL2CPP_REGISTER_METHOD(0x00F592B0, bool, GetMonsterDifficulty, (ZoneScalingData * __this, ScreenshotIcon_EnemyType__Enum enemyIcon, int32_t * difficulty));
IL2CPP_REGISTER_METHOD(0x00F59430, void, __ctor, (ZoneScalingData * __this));
}
