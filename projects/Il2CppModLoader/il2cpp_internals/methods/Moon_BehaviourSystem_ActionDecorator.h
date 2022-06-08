using namespace app;

namespace app::methods::Moon::BehaviourSystem::ActionDecorator {
IL2CPP_REGISTER_METHOD(0x03002050, String *, get_Info, (ActionDecorator * __this));
IL2CPP_REGISTER_METHOD(0x03002250, void, add_OnActionAdded, (ActionDecorator * __this, Action_1_Moon_BehaviourSystem_Action_ * value));
IL2CPP_REGISTER_METHOD(0x03002340, void, remove_OnActionAdded, (ActionDecorator * __this, Action_1_Moon_BehaviourSystem_Action_ * value));
IL2CPP_REGISTER_METHOD(0x03002430, void, add_OnActionRemoved, (ActionDecorator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x03002520, void, remove_OnActionRemoved, (ActionDecorator * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBD00, List_1_Moon_BehaviourSystem_Action_ *, get_Actions, (ActionDecorator * __this));
IL2CPP_REGISTER_METHOD(0x03002610, void, AddAction, (ActionDecorator * __this, Action_1 * newAction));
IL2CPP_REGISTER_METHOD(0x03002700, bool, RemoveAction, (ActionDecorator * __this, Action_1 * action));
IL2CPP_REGISTER_METHOD(0x030027F0, BehaviourStatus__Enum, OnExecute, (ActionDecorator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03002A10, void, PerformSanityCheck, (ActionDecorator * __this));
IL2CPP_REGISTER_METHOD(0x03002CD0, void, __ctor, (ActionDecorator * __this));
}
