#include <interception_macros.h>

namespace app::methods::SkillTreeLaneLogic {
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Index, (SkillTreeLaneLogic * __this));
IL2CPP_REGISTER_METHOD(0x006B5660, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x006B5700, void, OnEnable, (SkillTreeLaneLogic * __this));
IL2CPP_REGISTER_METHOD(0x006B5850, void, FixedUpdate, (SkillTreeLaneLogic * __this));
IL2CPP_REGISTER_METHOD(0x006B5860, void, UpdateItems, (SkillTreeLaneLogic * __this, bool instant));
IL2CPP_REGISTER_METHOD(0x006B5AB0, bool, get_HasAllSkills, (SkillTreeLaneLogic * __this));
IL2CPP_REGISTER_METHOD(0x006B5B90, void, Serialize, (SkillTreeLaneLogic * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x006B5BC0, void, __ctor, (SkillTreeLaneLogic * __this));
IL2CPP_REGISTER_METHOD(0x006B5D20, void, __cctor, ());
}
