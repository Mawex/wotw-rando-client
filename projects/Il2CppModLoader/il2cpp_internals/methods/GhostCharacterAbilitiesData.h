#include <interception_macros.h>

namespace app::methods::GhostCharacterAbilitiesData {
IL2CPP_REGISTER_METHOD(0x002FA280, HashSet_1_AbilityType_ *, get_Abilities, (GhostCharacterAbilitiesData * __this));
IL2CPP_REGISTER_METHOD(0x00E15C70, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostCharacterAbilitiesData * __this));
IL2CPP_REGISTER_METHOD(0x00E15C80, int32_t, GetDataSize, (GhostCharacterAbilitiesData * __this));
IL2CPP_REGISTER_METHOD(0x00E15D10, void, __ctor, (GhostCharacterAbilitiesData * __this));
IL2CPP_REGISTER_METHOD(0x00E15E90, void, __ctor, (GhostCharacterAbilitiesData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x00E16030, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00E163D0, void, Save, (GhostCharacterAbilitiesData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00E16570, void, Load, (GhostCharacterAbilitiesData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Executed, (GhostCharacterAbilitiesData * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_Executed, (GhostCharacterAbilitiesData * __this, bool value));
}
