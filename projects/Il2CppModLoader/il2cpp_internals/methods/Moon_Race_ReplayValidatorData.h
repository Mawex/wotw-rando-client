#include <interception_macros.h>

namespace app::methods::Moon::Race::ReplayValidatorData {
IL2CPP_REGISTER_METHOD(0x00C4C7F0, ReplayValidatorData *, FromTrialData, (ITrialData * data, bool setPositions));
IL2CPP_REGISTER_METHOD(0x00C4CB70, ReplayValidatorData *, FromJson, (String * json));
IL2CPP_REGISTER_METHOD(0x00C4CBF0, String *, ToJson, (ReplayValidatorData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ReplayValidatorData * __this));
}
