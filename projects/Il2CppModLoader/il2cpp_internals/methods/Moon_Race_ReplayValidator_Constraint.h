#include <interception_macros.h>

namespace app::methods::Moon::Race::ReplayValidator_Constraint {
IL2CPP_REGISTER_METHOD(0x00C4C420, bool, IntervalComplete, (ReplayValidator_Constraint * __this, ReplayValidator_Snapshot * past, ReplayValidator_Snapshot * current));
IL2CPP_REGISTER_METHOD(0x00C4C460, bool, IsValid, (ReplayValidator_Constraint * __this, ReplayValidator_Snapshot * past, ReplayValidator_Snapshot * current));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ReplayValidator_Constraint * __this));
}
