#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumUInt64TypeInfo_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02B97500, void, WriteMetadata, (app::EnumUInt64TypeInfo_1_System_Int64_ * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x02B975D0, void, WriteData, (app::EnumUInt64TypeInfo_1_System_Int64_ * this_ptr, app::TraceLoggingDataCollector * collector, int64_t * value));
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object *, GetData, (app::EnumUInt64TypeInfo_1_System_Int64_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, __ctor, (app::EnumUInt64TypeInfo_1_System_Int64_ * this_ptr));
}
