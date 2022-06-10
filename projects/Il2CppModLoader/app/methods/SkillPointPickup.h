#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SkillPointPickup {
    IL2CPP_REGISTER_METHOD(0x006B52C0, void, OnCollectorCandidateTouch, (app::SkillPointPickup * this_ptr, app::GameObject * collector))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::SkillPointPickup * this_ptr))
}
