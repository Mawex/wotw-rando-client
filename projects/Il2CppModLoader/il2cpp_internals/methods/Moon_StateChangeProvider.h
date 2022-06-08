#include <interception_macros.h>

namespace app::methods::Moon::StateChangeProvider {
IL2CPP_REGISTER_METHOD(0x01BAF240, IGenericUberState *, get_State, (StateChangeProvider * __this));
IL2CPP_REGISTER_METHOD(0x01BAF300, List_1_Moon_DesiredStateTransitionInfo_ *, get_DesiredStateList, (StateChangeProvider * __this));
IL2CPP_REGISTER_METHOD(0x01BAF4B0, IDesiredUberState *, GetRequirementsForTimeline, (StateChangeProvider * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (StateChangeProvider * __this));
}
