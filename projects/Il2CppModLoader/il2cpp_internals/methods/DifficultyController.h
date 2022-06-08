#include <interception_macros.h>

namespace app::methods::DifficultyController {
IL2CPP_REGISTER_METHOD(0x00B91B70, void, Awake, (DifficultyController * __this));
IL2CPP_REGISTER_METHOD(0x00B91D10, void, OnDestroy, (DifficultyController * __this));
IL2CPP_REGISTER_METHOD(0x00B91EA0, void, Serialize, (DifficultyController * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00B91FE0, void, OnGameReset, (DifficultyController * __this));
IL2CPP_REGISTER_METHODINFO(0x0478E1F0, DifficultyController_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00B91FF0, void, ChangeDifficulty, (DifficultyController * __this, DifficultyMode__Enum easy));
IL2CPP_REGISTER_METHOD(0x00B920C0, void, SetDifficulty, (DifficultyController * __this, DifficultyMode__Enum difficulty));
IL2CPP_REGISTER_METHOD(0x00B920F0, void, __ctor, (DifficultyController * __this));
}
