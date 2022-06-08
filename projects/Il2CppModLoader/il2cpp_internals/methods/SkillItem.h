using namespace app;

namespace app::methods::SkillItem {
IL2CPP_REGISTER_METHOD(0x006B4670, int32_t, get_ActualRequiredSkillPoints, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B4710, Color, get_LargeIconColor, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B4720, void, set_LargeIconColor, (SkillItem * __this, Color value));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Visible, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B4730, bool, get_RequiresAbilitiesOrItems, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B47E0, bool, get_SoulRequirementMet, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B48B0, bool, get_AbilitiesRequirementMet, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B4B90, void, Awake, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B4C30, bool, get_CanEarnSkill, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B4C60, void, FixedUpdate, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B4C70, void, UpdateItem, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B4EB0, void, OnEnable, (SkillItem * __this));
IL2CPP_REGISTER_METHOD(0x006B5090, void, __ctor, (SkillItem * __this));
}
