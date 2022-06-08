#include <interception_macros.h>

namespace app::methods::UberStateMatcher {
IL2CPP_REGISTER_METHOD(0x00529FF0, UberStateMatcher_UberStateMatcherTypeIds__Enum, get_MatcherTypeID, (UberStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x0314A4B0, void, InitializeData, (UberStateMatcher * __this, int32_t booleans, int32_t ints, int32_t floats, int32_t vectors, int32_t colors));
IL2CPP_REGISTER_METHOD(0x0314A4F0, void, Clear, (UberStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x0314A520, int32_t, Resolve, (UberStateMatcher * __this, IUberState * descriptor));
IL2CPP_REGISTER_METHODINFO(0x04755430, UberStateMatcher_Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0314A580, UberStateMatcher *, CastTo, (Type * type, UberStateMatcher * sourceData));
IL2CPP_REGISTER_METHOD(0x0314A7A0, Dictionary_2_System_Int32_System_Type_ *, GetIdToTypeMap, (UberStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x0314AA60, void, __ctor, (UberStateMatcher * __this));
IL2CPP_REGISTER_METHOD(0x0157BC70, Object *, CastTo, (UberStateMatcher * sourceData));
}
