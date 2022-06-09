#include <interception_macros.h>

namespace app::methods::System_Runtime_CompilerServices::RuleCache_1_System_Object_ {
IL2CPP_REGISTER_METHOD(0x027731A0, void, __ctor, (app::RuleCache_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, Object__Array *, GetRules, (app::RuleCache_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02773300, void, MoveRule, (app::RuleCache_1_System_Object_ * this_ptr, app::Object * rule, int32_t i));
IL2CPP_REGISTER_METHOD(0x02773630, void, AddRule, (app::RuleCache_1_System_Object_ * this_ptr, app::Object * new_rule));
IL2CPP_REGISTER_METHOD(0x02773740, Object__Array *, AddOrInsert, (app::Object__Array * rules, app::Object * item));
}
