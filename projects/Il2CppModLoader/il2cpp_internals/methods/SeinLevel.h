#include <interception_macros.h>

namespace app::methods::SeinLevel {
IL2CPP_REGISTER_METHOD(0x010226C0, int32_t, get_Experience, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01022780, void, set_Experience, (SeinLevel * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01022850, int32_t, get_Ore, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01022910, void, set_Ore, (SeinLevel * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x010229E0, int32_t, get_PartialHealthContainers, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01022AA0, void, set_PartialHealthContainers, (SeinLevel * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01022B70, int32_t, get_PartialEnergyContainers, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01022C30, void, set_PartialEnergyContainers, (SeinLevel * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01022D00, int32_t, get_ExperienceNeedForNextLevel, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01022D30, float, get_ExperienceVisualMinNormalized, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01022D60, float, get_ExperienceVisualMaxNormalized, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01022D90, int32_t, get_ExperienceForNextLevel, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01022EA0, void, GainExperience, (SeinLevel * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x01023070, void, GainOre, (SeinLevel * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x010230C0, void, GainPartialEnergyContainer, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x010230D0, void, EmptyPartialEnergyContainer, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x010230E0, void, GainPartialHealthContainer, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x010230F0, void, EmptyPartialHealthContainer, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01023100, void, FixedUpdate, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01023310, void, LevelUp, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x010235C0, void, LoseExperience, (SeinLevel * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x010236C0, void, LoseOre, (SeinLevel * __this, int32_t amount));
IL2CPP_REGISTER_METHOD(0x01023710, void, SetReferenceToSein, (SeinLevel * __this, SeinCharacter * sein));
IL2CPP_REGISTER_METHOD(0x00E84200, void, GainSkillPoint, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x01023730, void, __ctor, (SeinLevel * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
