using namespace app;

namespace app::methods::Moon::BehaviourSystem::BehaviourNode {
IL2CPP_REGISTER_METHOD(0x004E57A0, BehaviourStatus__Enum, get_Status, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_Status, (BehaviourNode * __this, BehaviourStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnTaskStatus, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_ForceReturnTaskStatus, (BehaviourNode * __this, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value));
IL2CPP_REGISTER_METHOD(0x03004580, void, add_OnDecoratorAdded, (BehaviourNode * __this, Action_1_Moon_BehaviourSystem_DecoratorNode_ * value));
IL2CPP_REGISTER_METHOD(0x03004670, void, remove_OnDecoratorAdded, (BehaviourNode * __this, Action_1_Moon_BehaviourSystem_DecoratorNode_ * value));
IL2CPP_REGISTER_METHOD(0x03004760, void, add_OnDecoratorRemoved, (BehaviourNode * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x03004850, void, remove_OnDecoratorRemoved, (BehaviourNode * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x03004940, void, add_ExceptionThrown, (BehaviourNode * __this, Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_ * value));
IL2CPP_REGISTER_METHOD(0x03004A30, void, remove_ExceptionThrown, (BehaviourNode * __this, Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_ * value));
IL2CPP_REGISTER_METHOD(0x03004B20, void, add_OnNodeExit, (BehaviourNode * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x03004C10, void, remove_OnNodeExit, (BehaviourNode * __this, Action * value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, List_1_Moon_BehaviourSystem_DecoratorNode_ *, get_Decorators, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x03004D00, void, OnValidate, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x03004E80, void, OnDestroy, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x01E85AB0, void, MoonCleanup, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x03004EA0, void, AddDecorator, (BehaviourNode * __this, DecoratorNode * newDecorator));
IL2CPP_REGISTER_METHOD(0x03004F90, bool, RemoveDecorator, (BehaviourNode * __this, DecoratorNode * node));
IL2CPP_REGISTER_METHOD(0x03005080, bool, RemoveDecoratorAt, (BehaviourNode * __this, int32_t decoratorIndex));
IL2CPP_REGISTER_METHOD(0x03005160, void, ClearDecorators, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x03005220, void, EnterInternal, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03005240, void, SetupDecorators, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x030053D0, BehaviourStatus__Enum, Execute, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x030056C0, void, ExitInternal, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03005700, void, SetForceReturnStatus, (BehaviourNode * __this, BehaviourStatus__Enum status));
IL2CPP_REGISTER_METHOD(0x030057A0, void, Reset, (BehaviourNode * __this, IContext * context, bool recursively));
IL2CPP_REGISTER_METHOD(0x03005920, String *, get_ProfExecute, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x030059D0, void, InitializeBehaviourNode, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBehaviourTreeInitialize, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03005A00, int32_t, CompareTo, (BehaviourNode * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04712390, BehaviourNode_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03005B70, void, PerformSanityCheck, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x03005CA0, void, OnExceptionThrown, (BehaviourNode * __this, Exception * e));
IL2CPP_REGISTER_METHOD(0x004E57A0, BehaviourStatus__Enum, get_TaskStatus, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x004E57B0, void, set_TaskStatus, (BehaviourNode * __this, BehaviourStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x030059D0, void, OnInitializeTask, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x02023C90, void, OnEnterTask, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03005D70, void, OnExitTask, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03005D90, void, OnResetTask, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x02997080, BehaviourStatus__Enum, OnExecuteTask, (BehaviourNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03005DB0, void, __ctor, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x015EBC30, Object *, GetDecorator, (BehaviourNode * __this));
IL2CPP_REGISTER_METHOD(0x0154ABD0, void, GetDecorators, (BehaviourNode * __this, List_1_System_Object_ * list));
IL2CPP_REGISTER_METHOD(0x0154ABD0, void, GetDecorators, (BehaviourNode * __this, List_1_Moon_BehaviourSystem_IUtilityProvider_ * list));
IL2CPP_REGISTER_METHODINFO(0x04730758, BehaviourNode_GetDecorators_1__MethodInfo);
}
