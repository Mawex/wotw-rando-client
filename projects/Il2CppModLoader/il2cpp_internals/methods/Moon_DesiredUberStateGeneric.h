#include <interception_macros.h>

namespace app::methods::Moon::DesiredUberStateGeneric {
IL2CPP_REGISTER_METHOD(0x01B619E0, void, __ctor, (DesiredUberStateGeneric * __this, IGenericUberState * uberState, GameObject * owner, float desiredValue));
IL2CPP_REGISTER_METHOD(0x01B61BC0, void, WriteDesiredStates, (DesiredUberStateGeneric * __this));
IL2CPP_REGISTER_METHODINFO(0x04730B88, DesiredUberStateGeneric_WriteDesiredStates__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01B61DC0, void, Revert, (DesiredUberStateGeneric * __this));
IL2CPP_REGISTER_METHOD(0x01B61EB0, IGenericUberState *, get_GenericState, (DesiredUberStateGeneric * __this));
IL2CPP_REGISTER_METHOD(0x01B61F40, IUberState *, get_UberState, (DesiredUberStateGeneric * __this));
IL2CPP_REGISTER_METHOD(0x01B61FD0, bool, IsFulfilled, (DesiredUberStateGeneric * __this));
IL2CPP_REGISTER_METHOD(0x01B620D0, String *, get_NiceName, (DesiredUberStateGeneric * __this));
}
