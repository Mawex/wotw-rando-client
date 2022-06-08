using namespace app;

namespace app::methods::Moon::BehaviourSystem::UtilitySelectorNode {
IL2CPP_REGISTER_METHOD(0x002FBCA0, Single__Array *, get_Utilities, (UtilitySelectorNode * __this));
IL2CPP_REGISTER_METHOD(0x03012540, BehaviourStatus__Enum, OnExecute, (UtilitySelectorNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (UtilitySelectorNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03012AB0, bool, IsValidChildIndex, (UtilitySelectorNode * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x03012B60, void, SetupWeightedGroup, (UtilitySelectorNode * __this));
IL2CPP_REGISTER_METHOD(0x030133A0, void, SortNodes, (UtilitySelectorNode * __this));
IL2CPP_REGISTER_METHOD(0x03013970, int32_t, SortByUtility, (UtilitySelectorNode * __this, UtilitySelectorNode_NodeUtility node1, UtilitySelectorNode_NodeUtility node2));
IL2CPP_REGISTER_METHODINFO(0x0478EB80, UtilitySelectorNode_SortByUtility__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03013AF0, void, UpdateUtilities, (UtilitySelectorNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x03013C80, float, GetNodeUtility, (UtilitySelectorNode * __this, BehaviourNode * node, IContext * context));
IL2CPP_REGISTER_METHOD(0x03013F00, void, __ctor, (UtilitySelectorNode * __this));
}
