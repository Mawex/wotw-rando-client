#include <interception_macros.h>

namespace app::methods::FPSTestFields {
IL2CPP_REGISTER_METHOD(0x0098B530, void, AppendHeaderRow, (StringBuilder * s, FPSTestFields_Scope__Enum scope));
IL2CPP_REGISTER_METHOD(0x0098B6F0, void, AppendDataRow, (StringBuilder * s, FPSTestFields_Scope__Enum scope, FPSTestResult * testResult, FPSSampleData * sample));
IL2CPP_REGISTER_METHOD(0x0098B900, void, AppendDataEntry, (StringBuilder * s, FPSTestFields_Field__Enum field, FPSTestResult * testResult, FPSSampleData * sample));
IL2CPP_REGISTER_METHOD(0x0098C6A0, void, __cctor, ());
}
