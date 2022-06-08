using namespace app;

namespace app::methods::ChangeDifficultyScreen {
IL2CPP_REGISTER_METHOD(0x010459A0, String *, DifficultyToText, (ChangeDifficultyScreen * __this, DifficultyMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x01045A20, void, Awake, (ChangeDifficultyScreen * __this));
IL2CPP_REGISTER_METHOD(0x01045AB0, void, OnDestroy, (ChangeDifficultyScreen * __this));
IL2CPP_REGISTER_METHOD(0x01045B30, void, SetDifficulty, (ChangeDifficultyScreen * __this, DifficultyMode__Enum difficulty));
IL2CPP_REGISTER_METHOD(0x01045DB0, void, Confirm, (ChangeDifficultyScreen * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ChangeDifficultyScreen * __this));
}
