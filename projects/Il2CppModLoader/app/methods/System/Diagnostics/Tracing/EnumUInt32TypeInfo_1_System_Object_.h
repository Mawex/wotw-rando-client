#pragma once
#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumUInt32TypeInfo_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B952F0, void, WriteMetadata, (app::EnumUInt32TypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B953C0, void, WriteData, (app::EnumUInt32TypeInfo_1_System_Object_ * this_ptr, app::TraceLoggingDataCollector * collector, app::Object * * value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumUInt32TypeInfo_1_System_Object_ * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumUInt32TypeInfo_1_System_Object_ * this_ptr))
}
