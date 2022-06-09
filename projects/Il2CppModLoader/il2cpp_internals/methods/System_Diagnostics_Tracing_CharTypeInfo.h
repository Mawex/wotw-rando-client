#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::CharTypeInfo {
IL2CPP_REGISTER_METHOD(0x01747E90, void, WriteMetadata, (app::CharTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01747F60, void, WriteData, (app::CharTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::uint16_t * value));
IL2CPP_REGISTER_METHOD(0x01748040, void, __ctor, (app::CharTypeInfo * this_ptr));
}
