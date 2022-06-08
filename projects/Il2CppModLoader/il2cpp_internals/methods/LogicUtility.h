#include <interception_macros.h>

namespace app::methods::LogicUtility {
IL2CPP_REGISTER_METHOD(0x009EC800, bool, Compare, (float a, float b, LogicUtility_ComparisonType__Enum comparison));
IL2CPP_REGISTER_METHOD(0x009EC870, String *, GetComparisonNiceName, (String * a, String * b, LogicUtility_ComparisonType__Enum comparison));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LogicUtility * __this));
}
