#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::SingleTypeInfo {
IL2CPP_REGISTER_METHOD(0x01A07960, void, WriteMetadata, (app::SingleTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01A07A30, void, WriteData, (app::SingleTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::float * value));
IL2CPP_REGISTER_METHOD(0x01A07B10, void, __ctor, (app::SingleTypeInfo * this_ptr));
}
