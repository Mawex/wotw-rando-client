#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::ActionNode {
IL2CPP_REGISTER_METHOD(0x03003210, String *, get_Info, (ActionNode * __this));
IL2CPP_REGISTER_METHOD(0x03003410, void, add_OnActionAdded, (ActionNode * __this, Action_1_Moon_BehaviourSystem_Action_ * value));
IL2CPP_REGISTER_METHOD(0x03003500, void, remove_OnActionAdded, (ActionNode * __this, Action_1_Moon_BehaviourSystem_Action_ * value));
IL2CPP_REGISTER_METHOD(0x030035F0, void, add_OnActionRemoved, (ActionNode * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x030036E0, void, remove_OnActionRemoved, (ActionNode * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x030037D0, void, OnValidate, (ActionNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBCA0, List_1_Moon_BehaviourSystem_Action_ *, get_Actions, (ActionNode * __this));
IL2CPP_REGISTER_METHOD(0x03003910, void, AddAction, (ActionNode * __this, Action_1 * newAction));
IL2CPP_REGISTER_METHOD(0x03003A00, bool, RemoveAction, (ActionNode * __this, Action_1 * action));
IL2CPP_REGISTER_METHOD(0x03003AF0, BehaviourStatus__Enum, OnExecute, (ActionNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03003D60, void, PerformSanityCheck, (ActionNode * __this));
IL2CPP_REGISTER_METHOD(0x03004020, void, __ctor, (ActionNode * __this));
}
