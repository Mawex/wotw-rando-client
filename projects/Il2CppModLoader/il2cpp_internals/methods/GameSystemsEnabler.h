#include <interception_macros.h>

namespace app::methods::GameSystemsEnabler {
    IL2CPP_REGISTER_METHOD(0x004046C0, void, Awake, (app::GameSystemsEnabler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00404760, void, Initialize, (app::GameSystemsEnabler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00404B80, void, OnEnabledComplete, (app::GameSystemsEnabler * this_ptr, bool success));
    IL2CPP_REGISTER_METHODINFO(0x0475E300, GameSystemsEnabler_OnEnabledComplete__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::GameSystemsEnabler * this_ptr));
}
