#pragma once
#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumUInt64TypeInfo_1_System_DateTimeOffset_ {
    IL2CPP_REGISTER_METHOD(0x02B968F0, void, WriteMetadata, (app::EnumUInt64TypeInfo_1_System_DateTimeOffset_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B969C0, void, WriteData, (app::EnumUInt64TypeInfo_1_System_DateTimeOffset_ * this_ptr, app::TraceLoggingDataCollector * collector, app::DateTimeOffset * value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumUInt64TypeInfo_1_System_DateTimeOffset_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumUInt64TypeInfo_1_System_DateTimeOffset_ * this_ptr))
}
