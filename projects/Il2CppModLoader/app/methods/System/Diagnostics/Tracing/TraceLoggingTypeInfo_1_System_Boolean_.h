#pragma once
#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02871520, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767018, TraceLoggingTypeInfo_1_System_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028715F0, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_Boolean_ * this_ptr, app::String * name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Boolean_ *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x028717C0, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Boolean_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x02871870, app::TraceLoggingTypeInfo_1_System_Boolean_ *, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02871A60, app::TraceLoggingTypeInfo_1_System_Boolean_ *, InitInstance, ())
}
