#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::ConditionalDecorator {
IL2CPP_REGISTER_METHOD(0x0300B200, String *, get_Info, (ConditionalDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300B440, void, add_OnConditionAdded, (ConditionalDecorator * __this, Action_1_Moon_BehaviourSystem_Condition_ * value));
IL2CPP_REGISTER_METHOD(0x0300B530, void, remove_OnConditionAdded, (ConditionalDecorator * __this, Action_1_Moon_BehaviourSystem_Condition_ * value));
IL2CPP_REGISTER_METHOD(0x0300B620, void, add_OnConditionRemoved, (ConditionalDecorator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x0300B710, void, remove_OnConditionRemoved, (ConditionalDecorator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsDynamic, (ConditionalDecorator * __this));
IL2CPP_REGISTER_METHOD(0x00855600, ConditionalDecorator_ConditionsCheckMode__Enum, get_CheckMode, (ConditionalDecorator * __this));
IL2CPP_REGISTER_METHOD(0x002FBD20, List_1_Moon_BehaviourSystem_Condition_ *, get_Conditions, (ConditionalDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300B800, void, AddCondition, (ConditionalDecorator * __this, Condition * newCondition));
IL2CPP_REGISTER_METHOD(0x0300B8F0, bool, RemoveCondition, (ConditionalDecorator * __this, Condition * newCondition));
IL2CPP_REGISTER_METHOD(0x0300B9E0, BehaviourStatus__Enum, OnExecute, (ConditionalDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300BB80, bool, EvaluateConditions, (ConditionalDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005DA240, bool, ShouldEvaluateEachTick, (ConditionalDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300BD10, float, GetUtility, (ConditionalDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300BD30, void, PerformSanityCheck, (ConditionalDecorator * __this));
IL2CPP_REGISTER_METHOD(0x0300BFF0, void, __ctor, (ConditionalDecorator * __this));
}
