#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::UtilitySelectorNode {
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::Single__Array *, get_Utilities, (app::UtilitySelectorNode * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03012540, app::BehaviourStatus__Enum, OnExecute, (app::UtilitySelectorNode * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (app::UtilitySelectorNode * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x03012AB0, bool, IsValidChildIndex, (app::UtilitySelectorNode * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x03012B60, void, SetupWeightedGroup, (app::UtilitySelectorNode * this_ptr));
    IL2CPP_REGISTER_METHOD(0x030133A0, void, SortNodes, (app::UtilitySelectorNode * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03013970, int32_t, SortByUtility, (app::UtilitySelectorNode * this_ptr, app::UtilitySelectorNode_NodeUtility node1, app::UtilitySelectorNode_NodeUtility node2));
    IL2CPP_REGISTER_METHODINFO(0x0478EB80, UtilitySelectorNode_SortByUtility__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x03013AF0, void, UpdateUtilities, (app::UtilitySelectorNode * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x03013C80, float, GetNodeUtility, (app::UtilitySelectorNode * this_ptr, app::BehaviourNode * node, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x03013F00, void, __ctor, (app::UtilitySelectorNode * this_ptr));
}
