#include <interception_macros.h>

namespace app::methods::Moon::ContinuousIntegration::TeamCityHelper {
IL2CPP_REGISTER_METHOD(0x0318E6A0, String *, GetAndValidateNonCriticalEnvironmentVariable, (String * setting));
IL2CPP_REGISTER_METHOD(0x0318E7A0, String *, GetAndValidateEnvironmentVariable, (String * setting));
IL2CPP_REGISTER_METHOD(0x0318E910, void, FailExitIfTeamCity, (String * message));
IL2CPP_REGISTER_METHOD(0x0318EA30, bool, SetBoolArgument, (String * argName, bool * value));
IL2CPP_REGISTER_METHODINFO(0x04790E08, TeamCityHelper_SetBoolArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
