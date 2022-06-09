#include <interception_macros.h>

namespace app::methods::Moon_BehaviourSystem::DistanceComparisonCondition {
    IL2CPP_REGISTER_METHOD(0x0300D340, app::String *, get_Info, (app::DistanceComparisonCondition * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0300D420, bool, OnCheck, (app::DistanceComparisonCondition * this_ptr, app::IContext * context));
    IL2CPP_REGISTER_METHOD(0x0300D790, void, __ctor, (app::DistanceComparisonCondition * this_ptr));
}
