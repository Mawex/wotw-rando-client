#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x028771B0, void, __ctor_1, (app::TraceLoggingTypeInfo_1_System_Single_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04743BF0, TraceLoggingTypeInfo_1_System_Single___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02877280, void, __ctor_2, (app::TraceLoggingTypeInfo_1_System_Single_ * this_ptr, app::String * name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags));
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Single_ *, get_Instance, ());
    IL2CPP_REGISTER_METHOD(0x028773A0, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Single_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02877450, app::TraceLoggingTypeInfo_1_System_Single_ *, GetInstance, (app::List_1_System_Type_ * recursion_check));
    IL2CPP_REGISTER_METHOD(0x02877640, app::TraceLoggingTypeInfo_1_System_Single_ *, InitInstance, ());
}
