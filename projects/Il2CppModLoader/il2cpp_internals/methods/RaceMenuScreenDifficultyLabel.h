#include <interception_macros.h>

namespace app::methods::RaceMenuScreenDifficultyLabel {
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (RaceMenuScreenDifficultyLabel * __this));
IL2CPP_REGISTER_METHOD(0x0070D0F0, void, UpdateLabel, (RaceMenuScreenDifficultyLabel * __this, DifficultyMode__Enum difficulty));
IL2CPP_REGISTER_METHOD(0x0070D290, MessageDescriptor, DifficultyModeToMessage, (RaceMenuScreenDifficultyLabel * __this, DifficultyMode__Enum difficulty));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RaceMenuScreenDifficultyLabel * __this));
}
