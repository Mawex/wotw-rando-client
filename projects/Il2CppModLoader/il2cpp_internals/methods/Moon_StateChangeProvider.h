#include <interception_macros.h>

namespace app::methods::Moon::StateChangeProvider {
IL2CPP_REGISTER_METHOD(0x01BAF240, IGenericUberState *, get_State, (app::StateChangeProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BAF300, List_1_Moon_DesiredStateTransitionInfo_ *, get_DesiredStateList, (app::StateChangeProvider * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BAF4B0, IDesiredUberState *, GetRequirementsForTimeline, (app::StateChangeProvider * this_ptr, app::MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::StateChangeProvider * this_ptr));
}
