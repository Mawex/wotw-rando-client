#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Guid_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B39960, void, ctor, (app::ClassPropertyWriter_2_System_Guid_System_Int32_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B371B0, void, Write, (app::ClassPropertyWriter_2_System_Guid_System_Int32_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Guid * container))
    IL2CPP_REGISTER_METHOD(0x02B37230, app::Object *, GetData, (app::ClassPropertyWriter_2_System_Guid_System_Int32_ * this_ptr, app::Guid container))
}
