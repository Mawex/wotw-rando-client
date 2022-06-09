#include <interception_macros.h>

namespace app::methods::Moon_Race::ReplayValidatorData {
IL2CPP_REGISTER_METHOD(0x00C4C7F0, ReplayValidatorData *, FromTrialData, (app::ITrialData * data, bool set_positions));
IL2CPP_REGISTER_METHOD(0x00C4CB70, ReplayValidatorData *, FromJson, (app::String * json));
IL2CPP_REGISTER_METHOD(0x00C4CBF0, String *, ToJson, (app::ReplayValidatorData * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ReplayValidatorData * this_ptr));
}
